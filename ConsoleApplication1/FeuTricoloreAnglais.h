#pragma once
#include "FeuTricolore.h"

/// <summary>
/// Cette classe décrit un Feu Tricolore Anglais
/// </summary>
class FeuTricoloreAnglais : public FeuTricolore
{
public:
	/// <summary>
	/// Constructeur de la classe
	/// </summary>
	/// <param name="state">Etat initial du Feu Tricolore</param>
	FeuTricoloreAnglais(State state);

	/// <summary>
	/// Force l'état du feu
	/// </summary>
	/// <param name="state">Etat du feu (vert, orange, rouge)</param>
	void setState(State state);
	
	/// <summary>
	/// Permets de changer l'état du Feu tricolore automatiquement
	/// </summary>
	void moveState();
};