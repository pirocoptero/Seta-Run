using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Personagem))]
public class SlidePlayer : MonoBehaviour {

	private Personagem personagem;

	// Use this for initialization
	void Awake()
    {
        //References
        personagem = GetComponent<Personagem>();

	}
	
	// Update is called once per frame
	void Update () {


		
	}

	void OnCollisionEnter2D(Collision2D coll) {

        
    }
}
