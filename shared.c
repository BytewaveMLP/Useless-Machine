#define C5  523
#define D5  587
#define E5  659
#define F5S 740
#define G5  784
#define A5  880
#define B5  988
#define C6  1047
#define D6  1175
#define E6  1319
#define F6S 1480

void playMusicNote(int freq, int timeMs) {
	playTone(freq, timeMs / 10);
	sleep(timeMs);
}

task playSong() {
	playMusicNote(D5, 750);
	playMusicNote(G5, 750);
	playMusicNote(G5, 375);
	playMusicNote(A5, 375);
}

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
