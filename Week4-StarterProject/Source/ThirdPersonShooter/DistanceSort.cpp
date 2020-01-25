// Fill out your copyright notice in the Description page of Project Settings.


#include "DistanceSort.h"

void  UDistanceSort::Distance_Sort(UPARAM() TArray <AActor*> Array_To_Sort, UPARAM()class AActor* From_Actor, bool Descending, TArray <FActor_Dist> &Sorted_Array)
{

	if (Array_To_Sort.Num() > 0)            // check that input array is populated
	{
		TArray <FActor_Dist> Combined_Data; // define temporary array of custom struct variables
		FActor_Dist CurActor;
		FVector location1 = From_Actor->GetActorLocation(); // get the world location of the "central" actor distance will be measured from
		float length;


		for (int x = 0; x < Array_To_Sort.Num(); ++x)       // loop through all actors in array
		{
			FVector location2 = Array_To_Sort[x]->GetActorLocation();   // get world location of actor in array
			length = (location1 - location2).Size();                    // get distance between "central" actor and this actor from the array
			CurActor.distance = length;                                 // set the custom struct variable for distance
			CurActor.actor = Array_To_Sort[x];                          // set the custom struct actor

			Combined_Data.Add(CurActor);                                // add the newly created struct to the temporary array
		}

		for (FActor_Dist x : Combined_Data)                             // using the distance value of each struct order the actors based on distance from "central" actor
		{
			int32 m = Combined_Data.Num();                              // run basic bubble sort algorithm
			int32 a, k;
			bool bDidSwap;

			for (a = 0; a < (m - 1); a++)
			{
				bDidSwap = false;

				if (Descending == true)                                 // sort high to low
				{
					for (k = 0; k < m - a - 1; k++)
					{
						if (Combined_Data[k].distance < Combined_Data[k + 1].distance)
						{
							FActor_Dist z;
							z = Combined_Data[k];
							Combined_Data[k] = Combined_Data[k + 1];
							Combined_Data[k + 1] = z;
							bDidSwap = true;
						}
					}

					if (bDidSwap == false)
					{
						break;
					}
				}
				else                                                    // sort low to high
				{
					for (k = 0; k < m - a - 1; k++)
					{
						if (Combined_Data[k].distance > Combined_Data[k + 1].distance)
						{
							FActor_Dist z;
							z = Combined_Data[k];
							Combined_Data[k] = Combined_Data[k + 1];
							Combined_Data[k + 1] = z;
							bDidSwap = true;
						}
					}

					if (bDidSwap == false)
					{
						break;
					}
				}
			}

			Sorted_Array = Combined_Data;                               // set output struct array to sorted temporary array

		}
	}
	    else                                                                // if no elements in array exit function
        ;

}