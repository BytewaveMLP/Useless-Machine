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
	playImmediateTone(freq, timeMs / 10);
	sleep(timeMs);
}

task playSong() {
	while (true) {
		playMusicNote(D5, 750);
		playMusicNote(G5, 750);
		playMusicNote(G5, 375);
		playMusicNote(A5, 375);
		playMusicNote(G5, 375);
		playMusicNote(F5S, 375);
		playMusicNote(E5, 750);
		playMusicNote(E5, 750);
		playMusicNote(E5, 750);
		playMusicNote(A5, 750);
		playMusicNote(A5, 375);
		playMusicNote(B5, 375);
		playMusicNote(A5, 375);
		playMusicNote(G5, 375);
		playMusicNote(F5S, 750);
		playMusicNote(D5, 750);
		playMusicNote(D5, 750);
		playMusicNote(B5, 750);
		playMusicNote(B5, 375);
		playMusicNote(C6, 375);
		playMusicNote(B5, 375);
		playMusicNote(A5, 375);
		playMusicNote(G5, 750);
		playMusicNote(E5, 750);
		playMusicNote(D5, 375);
		playMusicNote(D5, 375);
		playMusicNote(E5, 750);
		playMusicNote(A5, 750);
		playMusicNote(F5S, 750);
		playMusicNote(G5, 1500);
		sleep(1000);
	}
}

void scream() {

	for (int i = 1324; i <= 1724; i += 49) {
		playMusicNote(i, 1);
	}

	playMusicNote(1724, 600);

	for (int i = 1724; i >= 1000; i -= 36) {
		playMusicNote(i, 1);
	}

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
