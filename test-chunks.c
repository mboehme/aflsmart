/*
   AFLSmart - chunks handler unit tester
   -------------------------------------

   Copyright 2018 National University of Singapore

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at:

     http://www.apache.org/licenses/LICENSE-2.0

   This implements a unit tester for the chunk handler.
   It reads a sequence of chunks (stored in image.chunks which is generated by Peach) and
   checks the tree representation of these chunks. The correct tree is stored in chunks.print.
	 Please read the test_chunks target in the Makefile for more information.

 */

#include <stdio.h>

#include "smart-chunks.h"

int main(int argc, char **argv) {
  struct chunk *data_chunks = NULL;

  get_chunks("test-data/chunks/image.chunks", &data_chunks);  

  printf("IMAGE CHUNKS:\n");
  print_tree(data_chunks);

  delete_chunks(data_chunks);

  return 0;
}


