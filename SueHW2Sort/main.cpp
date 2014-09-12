//
//  main.cpp
//  SueHW2Sort
//
//  Created by cj on 9/12/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <vector>


using namespace std;

int genRandomNumber(){
    /* generate secret number between 1 and 10: */
    return rand() % 10 + 1;
}

void printVector(vector<int> myVector){
    
    for(int i = 0; i < myVector.size(); i++){
        
        cout << myVector[i] << " " ;
    }
    
    cout << endl;
}


vector <int> bubbleSort(vector <int> myArray){
    //TODO: SORT!!
    //https://en.wikipedia.org/wiki/Bubble_sort
    
    
    //Loop through
    //Compare what ? if larger : swap ...
    
    for(int i = 1 ; i <myArray.size(); i++){
        
        if(myArray[i-1] > myArray[i]){
            //Swap
            int temp = myArray[i];
            myArray[i] = myArray[i-1];
            myArray[i-1] = temp;
        }
    }
    
    return myArray;
}

vector <int> insertionSort(vector <int> myArray){
    
    return myArray;
}
vector <int> selectionSort(vector <int> myArray){
    return myArray;
}
vector <int> shakerSort(vector <int> myArray){
    
    return myArray;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    vector <int> unsortedVector;
    
    for(int i=0; i<10; i++){
        unsortedVector.push_back(genRandomNumber());
    }

    cout << "BubbleSort: " << endl;
    printVector(unsortedVector);
    printVector(bubbleSort(unsortedVector));
    

    
    
    
    return 0;
}

