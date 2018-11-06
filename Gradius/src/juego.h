#ifndef JUEGO_H
#define JUEGO_H
//#define AUDIO

namespace Juego
{
	enum Estado
	{
		menu,
		juego,
		gameover,
		creditos,
		juegoPausado
	};

	extern bool haySonido;
	extern Estado estado;
	extern Estado estadoA;
	extern int screenWidth;
	extern int screenHeight;

	void ejecutarJuego();
}

#endif // !JUEGO_H

