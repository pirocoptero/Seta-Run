using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityStandardAssets.CrossPlatformInput;
using UnityEngine.SceneManagement;

public class Personagem : MonoBehaviour {


    [SerializeField]
    private float m_MaxSpeed = 10f;                    // The fastest the player can travel in the x axis.
    [SerializeField]
    private float m_JumpForce = 400f;                  // Amount of force added when the player jumps.
    [SerializeField]
    private bool m_AirControl = false;                 // Whether or not a player can steer while jumping;
    [SerializeField]
    private LayerMask m_WhatIsGround;                  // A mask determining what is ground to the character

    public Transform m_GroundCheck;                   // A position marking where to check if the player is grounded.
    const float k_GroundedRadius = .2f;                // Radius of the overlap circle to determine if grounded
    private bool m_Grounded;                           // Whether or not the player is grounded.
    private Animator m_Anim;                           // Reference to the player's animator component.
    private Rigidbody2D m_Rigidbody2D;
    public bool m_FacingRight = true;  

    public GameObject gameOver;
    private Animator animGameOver;
    
    public bool stop = false;              // For determining which way the player is currently facing.
    public bool canPlay = false;

    //Rotation preset
    Vector3 v_faceRight = new Vector3(0, 0, 0);
    Vector3 v_faceLeft = new Vector3(0, 180, 0);

    public Text scoreText;
	
	public int ponto = 1;

	public int scoreCount = 0;

	// public AudioClip sound;
	// private AudioSource source;

	private Vector2 touchOrigin = Vector2.one;

	
    void Awake () {
        // Setting up references.
        m_Anim = GetComponent<Animator>();
        m_Rigidbody2D = GetComponent<Rigidbody2D>();
        m_GroundCheck = transform.Find("GroundCheck");
        
    }
	
	// Update is called once per frame
	void FixedUpdate () {

        if(canPlay && CrossPlatformInputManager.GetButtonDown("Fire1")){
            SceneManager.LoadScene("Proto1");
        }


        m_Grounded = false;

        // The player is grounded if a circlecast to the groundcheck position hits anything designated as ground
        // This can be done using layers instead but Sample Assets will not overwrite your project settings.
        Collider2D[] colliders = Physics2D.OverlapCircleAll(m_GroundCheck.position, k_GroundedRadius, m_WhatIsGround);
        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].gameObject != gameObject)
                m_Grounded = true;
        }

        m_Anim.SetBool("Ground", m_Grounded);

        //Set the vertical animation
        m_Anim.SetFloat("vSpeed", m_Rigidbody2D.velocity.y);
    }

    public void Move(bool _jump)
    {

        if(!stop){
            //only control the player if grounded or airControl is turned on
            if (m_Grounded || m_AirControl)
            {
                // The Speed animator parameter is set to the absolute value of the horizontal input.
                m_Anim.SetFloat("Speed", Mathf.Abs(1));

                // Move the character
                m_Rigidbody2D.velocity = new Vector2(1 * m_MaxSpeed, m_Rigidbody2D.velocity.y);

                // If the input is moving the player right and the player is facing left...
                
            }

            // If the player should jump...
            if (m_Grounded && _jump && m_Anim.GetBool("Ground"))
            {
                // Add a vertical force to the player.
                m_Grounded = false;
                m_Anim.SetBool("Ground", false);
                m_Rigidbody2D.AddForce(new Vector2(0f, m_JumpForce));
            }
        }
        
    }

    private void Flip()
    {
        // Switch the way the player is labelled as facing.
        m_FacingRight = !m_FacingRight;

        // Multiply the player's x local scale by -1.
        //Vector3 theScale = transform.localScale;
        //theScale.x *= -1;
        //transform.localScale = theScale;
        
        if (m_FacingRight)
        {
            transform.eulerAngles = v_faceRight;
        }
        else
        {
            transform.eulerAngles = v_faceLeft;
        }


    }


    void OnTriggerEnter2D(Collider2D col) {
		if (col.gameObject.tag == "Coin") {
			scoreCount += ponto;
            scoreText.text = "Score " + scoreCount;
		}

        if (col.gameObject.tag == "Diamond") {
			stop = true;
            m_Anim.SetBool("Finished", true);

            StartCoroutine(continueGame(4f));

            
		}
	}

    void OnCollisionEnter2D(Collision2D collision) {
        if(collision.collider.tag == "Espinho") {

            m_MaxSpeed = 0;

            //start coroutine call
            StartCoroutine (dyingAnimation());

            //transform.rotation = Quaternion.Lerp (transform.rotation, Quaternion.Euler (0, 270, 0), 1);
            //transform.position = new Vector3 (transform.position.x, transform.position.y, transform.position.z - 5);

            m_Rigidbody2D.AddForce(new Vector3(0, 400, 0));

            m_Anim.SetBool("isDying", true);

            Destroy(GetComponent<BoxCollider2D>());
            Destroy(GetComponent<CircleCollider2D>());

            
            
        }
    }

    

    IEnumerator dyingAnimation(){
        
        yield return new WaitForSeconds(1f);

        //gameObject.SetActive(false);

        gameOver.SetActive(true);        
        animGameOver = gameOver.GetComponent<Animator>();
        animGameOver.SetBool("GameOver", true);

        Destroy(m_Rigidbody2D);

        yield return StartCoroutine(continueGame(3f));

	}

    IEnumerator continueGame(float wait) {
        yield return new WaitForSeconds(wait);
        canPlay = true;
    }
	

}
