#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <allegro5/allegro_image.h>
#include "libs/tabuleiro.h"
#include "libs/bloco.h"

using namespace std;

int main() {

	al_init();
	al_init_image_addon();

	Tabuleiro t;
	Bloco b;
	t.getDisplay(570,450); // 15 - 19
	b.preencherMatriz();
	b.draw();
	al_rest(3.0);
	t.destroiDisplay();
	b.destroyDraw();

	return 0;
}