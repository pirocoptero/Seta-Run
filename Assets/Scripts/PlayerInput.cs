using System.Collections;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

[RequireComponent(typeof(Personagem))]
public class PlayerInput : MonoBehaviour {

    private Personagem c_movement;  //Reference to PlayerMovement script
    private bool isJumping;             //To determine if the player is jumping
    private bool wait = true;
    public GameObject button;
	
	void Awake()
    {
        //References
        c_movement = GetComponent<Personagem>();
	}

    public void Run(){
        wait = false;
        Destroy(button);

    }
	
	void Update ()
    {

        if(!wait) {
        
            //If he is not jumping...
            if (!isJumping)
            {
                //See if button is pressed...
                isJumping = CrossPlatformInputManager.GetButtonDown("Fire1");
            }

        }	
	}

    private void FixedUpdate()
    {

        if(!wait) {
            //Get horizontal axis
            //float h = CrossPlatformInputManager.GetAxis("Horizontal");
            //Call movement function in PlayerMovement
            c_movement.Move(isJumping);
            //Reset
            isJumping = false;
        }
    }
}
