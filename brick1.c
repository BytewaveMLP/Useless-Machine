#include "shared.c"

task main() {
	startTask(blinkLights);
	startTask(playSong);
	while (true) { sleep(1000); }
}
