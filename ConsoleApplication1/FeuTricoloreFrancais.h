#pragma once
#include "FeuTricolore.h"

/// <summary>
/// Classe décrivant un Feu Francais
/// </summary>
class FeuTricoloreFrancais : public FeuTricolore
{

public:
	/// <summary>
	/// Constructeur de la classe
	/// </summary>
	/// <param name="state">Etat initial du Feu Tricolore</param>
	FeuTricoloreFrancais(State state);

	/// <summary>
	/// Force l'état du Feu Tricolore
	/// </summary>
	/// <param name="state">Etat forcé</param>
	void setState(State state);

	/// <summary>
	/// Permets de changer l'état du Feu Tricolore automatiquement
	/// </summary>
	void moveState();
};