using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class CoinController : MonoBehaviour {

	public GameObject coinEffect;

	private ParticleSystem explosion;

	public AudioClip sound;
	private AudioSource source;

	private float countdown = 3f;
	bool canExplode;

	void Awake(){ 
		explosion = coinEffect.GetComponent<ParticleSystem>();
		source = GetComponent<AudioSource>();
		source.clip = sound;
		source.playOnAwake = false;	
	}



	void Update(){

	}


	void OnTriggerEnter2D(Collider2D collision){


		source.PlayOneShot(sound);

		Destroy(this.gameObject, 0.3f);
		

		//transform.parent.gameObject.transform.parent.gameObject.SetActive (false);

		//currentPlayer = Instantiate(player,spawnPos,Quaternion.identity) as GameObject;


		GameObject balloonExplosionCopy = Instantiate (coinEffect, transform.position, transform.rotation) as GameObject;

		//Destroy instance of balloonExplosionCopy after 5 seconds
		Destroy (balloonExplosionCopy, 1);

		

		

	
	}
}

