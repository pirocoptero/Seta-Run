using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShipTrigger : MonoBehaviour {

	public GameObject ship;
	private Animator anim;
	// Use this for initialization

	void Awake () {
		anim = ship.gameObject.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void LateUpdate () {
		
	}

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Player") {
			anim.SetBool("Active", true);
		}
	}

}
