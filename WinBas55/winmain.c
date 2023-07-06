#include <stdio.h>
#include <string.h>

#include "sdlut.h"
#include "display.h"
#include "conio.h"

extern int bas55_main(int argc, char *argv[]);

// sdlut global data
struct SDLData SDLDATA;



// program entry point
int main(int argc, char *argv[]) {

	// create the SDLUT worker thread
	if (CreateSDLBackgroundThread("WinBas55")) {

		DisplayOpen(DM_GRAPHICS);
		ConOpen();

		ClearGraphicsDisplay(30);
		
		bas55_main(1, NULL);
		
		// make sure we wait for the worker thread to terminate
		int tstate;
		SDL_WaitThread(SDLDATA.ITHREAD, &tstate);
	}

	return 0;
}
