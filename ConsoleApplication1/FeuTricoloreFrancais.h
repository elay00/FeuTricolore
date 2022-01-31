#pragma once
#include "FeuTricolore.h"

/// <summary>
/// Classe d�crivant un Feu Francais
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
	/// Force l'�tat du Feu Tricolore
	/// </summary>
	/// <param name="state">Etat forc�</param>
	void setState(State state);

	/// <summary>
	/// Permets de changer l'�tat du Feu Tricolore automatiquement
	/// </summary>
	void moveState();
};