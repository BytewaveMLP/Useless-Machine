#include "shared.c"

task main() {
	startTask(blinkLights);
	sleep(1500);
	startTask(playSong);
	while (true) { sleep(1000); }
}
