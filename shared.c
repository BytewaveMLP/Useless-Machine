task blinkLights() {
	int state;

	while (true) {
		int r = random(99);

		if (r < 33) {
			state = ledGreenPulse;
		} else if (r < 66) {
			state = ledOrangePulse;
		} else {
			state = ledRedPulse;
		}

		setLEDColor(state);
		sleep(500);
	}
}

void playMusicNote(int freq, int timeMs) {
	playTone(freq, timeMs / 10);
	sleep(timeMs);
}

task playSong() {
	playMusicNote(, 750);
	playMusicNote(, 750);
	playMusicNote(, 375);
	playMusicNote(, 375);
}
