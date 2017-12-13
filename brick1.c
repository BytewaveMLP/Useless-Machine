#include "shared.c"

task main() {
	startTask(blinkLights);
	startTask(playSong);
}
