// read data.c

// should be relatively easy compared to other 2 .c files:

// Do as shown in the pseudo code.

// 1. We want to get the urls from the collection.txt file and
//    put them into a list

// 2. We then use this list to make a graph for each of the url's
//    that we put into the list - Shouldn't be too bad. Make sure
//    we just create the appropriate lists - Gotta decide between
//    list structure or adjancency matrix.

// 3. Call invertedlist to create the inverted List.

// readData.c can mainly be done through calling functions from the
// different .h files of invertedList and Graph.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "graph.h"
#include "inverted.h"
#include "list.h"

#include "readData.h"



// Get this function to open collection.txt and create a linked list of nodes:
List getListUrls() {


    // Open the file then pass it through to the list function:
    FILE *fp = fopen("collection.txt", "r");
    assert(fp != NULL);

    List listUrls = getFromFile(fp);

    fclose(fp);
    return listUrls;

}

// Create a graph from the list of our Urls: base it off week 8 graph structure.
Graph getGraph(List listUrls) {


    Graph graphUrls = createGraph(listUrls);
    

    return graphUrls;



}


