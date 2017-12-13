#include "shared.c"

task main() {
	startTask(blinkLights);
	// startTask(playSong);
	startTask(scream);
	while (true) { sleep(1000); }
}
