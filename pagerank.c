// PageRank program for Assignment 2
// Andrew Gallagher - Oct 2018


// This program is going to call functions from our ADTs to build up a useable graph:
// We're going to need it to include a readData.h header, and also a graph header so we can use
// the struct framework.

// Once we figure getting out how to get all the data in successfully (should be the hard bit of Part 1.a)
// We then just work out the pseudocode.


#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"
#include "readData.h"


int main(void) {

    // We want to first make a call to get a list from collection.txt:
    // we can store the urls in a simple linked list

    Link listUrls = getListUrls();

    // we then want to pass the link list in and use it to get the graph:
    
    Graph graphUrls = getGraphUrls(listUrls);

    // After this is when we run the PageRank algorithm:
    // -> Should use a f'n to calculate, and a f'n to output (and supporting functions).
    
    

    return EXIT_SUCCESS;

}

