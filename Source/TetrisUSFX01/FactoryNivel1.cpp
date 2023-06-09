// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryNivel1.h"
#include "bloqueCono.h"
#include "bloqueRedondo.h"
#include "bloqueNormal.h"
#include "BloqueMarmol.h"

ABlock* AFactoryNivel1::CrearBloque(FString nombreBloque)
{
	//Select which potion to spawn depending on the passed string
	if (nombreBloque.Equals("marmol")) {
		return GetWorld()->SpawnActor<ABloqueMarmol>(ABloqueMarmol::StaticClass());
	}
	else if (nombreBloque.Equals("temporal")) {
		return GetWorld()->SpawnActor<AbloqueNormal>(AbloqueNormal::StaticClass());
	}
	else if (nombreBloque.Equals("color")) {
		return GetWorld()->SpawnActor<AbloqueRedondo>(AbloqueRedondo::StaticClass());	
	}
	else if (nombreBloque.Equals("dura")) {
		return GetWorld()->SpawnActor<AbloqueCono>(AbloqueCono::StaticClass());
	}
	else return nullptr; //Return null if the string isn't valid
}

