// invertedIndex.c

// from the spec:
// inverted.c reads data from collection.txt and generates an inverted index.

// By inverted they mean that the list is ordered by the word so that for a word, it lists the websites
// its found in alphebetical order (of the URL).

// EXAMPLE: design url2 url25 url31

// inverted.c has to also normalise words:

// We've got to design something that:

// 1. Removes lead and trailing white space -> examples of how to do so easily searchable.
// 2. Converts all characters to lowercase -> tolower() in string.h
// 3. Remove punctuation off the word if they appear in it.

// 
