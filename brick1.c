#include "shared.c"

task main() {
	startTask(blinkLights);
	setSoundVolume(25);
	//startTask(playSong);
	startTask(scream);
	while (true) { sleep(1000); }
}
