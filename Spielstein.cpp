#include "Spielstein.hpp"

void Spielstein::init() {
switch (typ)
	{
	case SPIELSTEIN_Z2:
	{
		name = "Z2";
		farbe = HINTERGRUND_BLAU;
		felder[0][0].push_back(Position(2, 0));//_#
		felder[0][0].push_back(Position(1, 1));//##
		felder[0][0].push_back(Position(2, 1));//#_
		felder[0][0].push_back(Position(1, 2));//__

		felder[0][1].push_back(Position(1, 1));//__
		felder[0][1].push_back(Position(2, 1));//##
		felder[0][1].push_back(Position(2, 2));//__##
		felder[0][1].push_back(Position(3, 2));//__

		felder[0][2].push_back(Position(2, 0));//_#
		felder[0][2].push_back(Position(1, 1));//##
		felder[0][2].push_back(Position(2, 1));//#_
		felder[0][2].push_back(Position(1, 2));//__

		felder[0][3].push_back(Position(1, 1));//__
		felder[0][3].push_back(Position(2, 1));//##
		felder[0][3].push_back(Position(2, 2));//__##
		felder[0][3].push_back(Position(3, 2));//__

		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(1, 1));//##
		felder[1][0].push_back(Position(2, 1));//_#
		felder[1][0].push_back(Position(2, 2));//__

		felder[1][1].push_back(Position(2, 1));//__
		felder[1][1].push_back(Position(3, 1));//__##
		felder[1][1].push_back(Position(1, 2));//##
		felder[1][1].push_back(Position(2, 2));//__

		felder[1][2].push_back(Position(1, 0));//#_
		felder[1][2].push_back(Position(1, 1));//##
		felder[1][2].push_back(Position(2, 1));//_#
		felder[1][2].push_back(Position(2, 2));//__

		felder[1][3].push_back(Position(2, 1));//__
		felder[1][3].push_back(Position(3, 1));//__##
		felder[1][3].push_back(Position(1, 2));//##
		felder[1][3].push_back(Position(2, 2));//__
		break;
	}
	case SPIELSTEIN_Z3:
	{
		name = "Z3";
		farbe = HINTERGRUND_GELB;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(2, 0));//##
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(0, 2));//##__
		felder[0][0].push_back(Position(1, 2));//__


		felder[0][1].push_back(Position(1, 0));
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(1, 1));//###_
		felder[0][1].push_back(Position(2, 1));//_#
		felder[0][1].push_back(Position(2, 2));//__

		felder[0][2].push_back(Position(1, 0));
		felder[0][2].push_back(Position(2, 0));//##
		felder[0][2].push_back(Position(1, 1));//#_
		felder[0][2].push_back(Position(0, 2));//##__
		felder[0][2].push_back(Position(1, 2));//__


		felder[0][3].push_back(Position(1, 0));
		felder[0][3].push_back(Position(0, 1));//#_
		felder[0][3].push_back(Position(1, 1));//###_
		felder[0][3].push_back(Position(2, 1));//_#
		felder[0][3].push_back(Position(2, 2));//__




		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(1, 0));//##__
		felder[1][0].push_back(Position(1, 1));//#
		felder[1][0].push_back(Position(1, 2));//##
		felder[1][0].push_back(Position(2, 2));//__

		felder[1][1].push_back(Position(3, 0));
		felder[1][1].push_back(Position(1, 1));//_#
		felder[1][1].push_back(Position(2, 1));//_###
		felder[1][1].push_back(Position(3, 1));//#_
		felder[1][1].push_back(Position(1, 2));//__

		felder[1][2].push_back(Position(3, 0));
		felder[1][2].push_back(Position(1, 1));//##__
		felder[1][2].push_back(Position(2, 1));//#_
		felder[1][2].push_back(Position(3, 1));//##
		felder[1][2].push_back(Position(1, 2));//__

		felder[1][3].push_back(Position(3, 0));
		felder[1][3].push_back(Position(1, 1));//_#
		felder[1][3].push_back(Position(2, 1));//_###
		felder[1][3].push_back(Position(3, 1));//#_
		felder[1][3].push_back(Position(1, 2));//__






		break;
	}
	case SPIELSTEIN_L2:
	{
		name = "L2";
		farbe = HINTERGRUND_CYAN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(1, 1));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(1, 1));//##__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));//#_



		
		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(1, 1));//##__

		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));//#_

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));//#_
		
		felder[1][3].push_back(Position(1, 0));
		felder[1][3].push_back(Position(0, 1));//#_
		felder[1][3].push_back(Position(1, 1));//##__

		break;

	}
	case SPIELSTEIN_L3:
	{
		name = "L3";
		farbe = HINTERGRUND_HELL_GRUEN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(1, 2));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//###_
		felder[0][1].push_back(Position(1, 2));//__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//###
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(2, 1));



		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(1, 2));//##__
		
		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//###_
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_

		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//###_
		felder[1][3].push_back(Position(2, 1));





		
		
		break;
	}
	case SPIELSTEIN_L4:
	{
		name = "L4";
		farbe = HINTERGRUND_HELL_LILA;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(1, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_
		felder[0][0].push_back(Position(1, 3));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//####
		felder[0][1].push_back(Position(1, 2));//__
		felder[0][1].push_back(Position(1, 3));

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//####
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(3, 0));
		felder[0][3].push_back(Position(2, 1));



		felder[1][0].push_back(Position(0, 0));//#
		felder[1][0].push_back(Position(0, 1));
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_
		felder[1][0].push_back(Position(1, 3));//##__
	
		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//####
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(0, 3));
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_
		felder[1][2].push_back(Position(1, 3));//#_

		felder[1][3].push_back(Position(3, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//####
		felder[1][3].push_back(Position(2, 1));
		felder[1][3].push_back(Position(3, 1));

		break;
	}
	case SPIELSTEIN_I2:
	{
		name = "I2";
		farbe = HINTERGRUND_LILA;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//__

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//__



		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//__

		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//__




		break;
	}
	case SPIELSTEIN_I3:
	{
		name = "I2";
		farbe = HINTERGRUND_HELL_BLAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_

		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));//###_
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));


		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_


		felder[1][1].push_back(Position(0, 0));//###_
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));


		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_


		felder[1][3].push_back(Position(0, 0));//###_
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		
		break;
	}
	case SPIELSTEIN_I4:
	{

		name = "I4";
		farbe = HINTERGRUND_HELL_GRAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_


		felder[0][1].push_back(Position(0, 0));//####
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(3, 0));


		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_


		felder[0][3].push_back(Position(0, 0));//####
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));
		felder[0][3].push_back(Position(3, 0));



		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_



		felder[1][1].push_back(Position(0, 0));//####
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));
		felder[1][1].push_back(Position(3, 0));



		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_
		felder[1][2].push_back(Position(0, 3));//#_



		felder[1][3].push_back(Position(0, 0));//####
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(3, 0));

		
		break;
	}
	case SPIELSTEIN_Q:  //quader 
	{

		name = "Q";
		farbe = HINTERGRUND_ROT;
		felder[0][0].push_back(Position(0, 0));//##__
		felder[0][0].push_back(Position(1, 0));//##__
		felder[0][0].push_back(Position(0, 1));
		felder[0][0].push_back(Position(1, 1));

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 1));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));
		felder[0][2].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));



		felder[1][0].push_back(Position(0, 0));//##__
		felder[1][0].push_back(Position(1, 0));//##__
		felder[1][0].push_back(Position(0, 1));
		felder[1][0].push_back(Position(1, 1));

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));
		felder[1][1].push_back(Position(1, 1));

		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));
		felder[1][2].push_back(Position(1, 1));

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//##__
		felder[1][3].push_back(Position(0, 1));
		felder[1][3].push_back(Position(1, 1));

		break;
	}
	case SPIELSTEIN_QPLUS: //GECHECKT   Quader mit extra stein
	{
		name = "QPLUS";
		farbe = HINTERGRUND_GRUEN;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//##__
		felder[0][0].push_back(Position(1, 1));//##__
		felder[0][0].push_back(Position(0, 2));
		felder[0][0].push_back(Position(1, 2));


		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 1));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(1, 2));


		felder[0][3].push_back(Position(1, 0));//##_
		felder[0][3].push_back(Position(2, 0));//###__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));
		felder[0][3].push_back(Position(2, 1));


		


		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(0, 1));//##__
		felder[1][0].push_back(Position(1, 1));//##__
		felder[1][0].push_back(Position(0, 2));
		felder[1][0].push_back(Position(1, 2));

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//###_
		felder[1][1].push_back(Position(0, 1));
		felder[1][1].push_back(Position(1, 1));
		felder[1][1].push_back(Position(2, 1));


		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(1, 2));


		felder[1][3].push_back(Position(0, 0));//###__
		felder[1][3].push_back(Position(1, 0));//##_
		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(1, 1));
		felder[1][3].push_back(Position(2, 1));

		break;
	}
	case SPIELSTEIN_T:
	{
		name = "T";
		farbe = HINTERGRUND_HELL_GELB;
		felder[0][0].push_back(Position(1, 0));//#_
		felder[0][0].push_back(Position(0, 1));//###_
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));
		
		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(1, 0));//###_
		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(2, 0));

		felder[0][3].push_back(Position(1, 0));//#_
		felder[0][3].push_back(Position(0, 1));//##__
		felder[0][3].push_back(Position(1, 1));//#_
		felder[0][3].push_back(Position(1, 2));




		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(0, 1));//###_
		felder[1][0].push_back(Position(1, 1));
		felder[1][0].push_back(Position(2, 1));

		felder[1][1].push_back(Position(0, 0));//#_
		felder[1][1].push_back(Position(0, 1));//##__
		felder[1][1].push_back(Position(1, 1));//#
		felder[1][1].push_back(Position(2, 0));

		felder[1][2].push_back(Position(1, 0));//###_
		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(2, 0));

		felder[1][3].push_back(Position(1, 0));//#_
		felder[1][3].push_back(Position(0, 1));//##__
		felder[1][3].push_back(Position(1, 1));//#_
		felder[1][3].push_back(Position(1, 2));
		break;
	}
	case SPIELSTEIN_TPLUS:  //T stein mit eins extra
	{
		name = "TPLUS";
		farbe = HINTERGRUND_HELL_ROT;
		felder[0][0].push_back(Position(1, 0));//#_
		felder[0][0].push_back(Position(0, 1));//####
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));
		felder[0][0].push_back(Position(3, 1));

		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#
		felder[0][1].push_back(Position(0, 2));//#
		felder[0][1].push_back(Position(0, 3));

		felder[0][2].push_back(Position(0, 0));//####_
		felder[0][2].push_back(Position(1, 0));//_#_
		felder[0][2].push_back(Position(2, 0));
		felder[0][2].push_back(Position(3, 0));
		felder[0][2].push_back(Position(2, 1));

		felder[0][3].push_back(Position(1, 0));//#_
		felder[0][3].push_back(Position(1, 1));//#_
		felder[0][3].push_back(Position(0, 2));//##__
		felder[0][3].push_back(Position(1, 2));//#_
		felder[0][3].push_back(Position(1, 3));



		felder[1][0].push_back(Position(2, 0));//_#
		felder[1][0].push_back(Position(0, 1));//####
		felder[1][0].push_back(Position(1, 1));
		felder[1][0].push_back(Position(2, 1));
		felder[1][0].push_back(Position(3, 1));

		felder[1][1].push_back(Position(0, 0));//#_
		felder[1][1].push_back(Position(0, 1));//#_
		felder[1][1].push_back(Position(0, 2));//##
		felder[1][1].push_back(Position(1, 2));//#
		felder[1][1].push_back(Position(0, 3));

		felder[1][2].push_back(Position(0, 0));//####_
		felder[1][2].push_back(Position(1, 0));//#__
		felder[1][2].push_back(Position(2, 0));
		felder[1][2].push_back(Position(3, 0));
		felder[1][2].push_back(Position(1, 1));

		felder[1][3].push_back(Position(1, 0));//#_
		felder[1][3].push_back(Position(0, 1));//##__
		felder[1][3].push_back(Position(1, 1));//#_
		felder[1][3].push_back(Position(1, 2));//#_
		felder[1][3].push_back(Position(1, 3));
		
		break;
	}
	case SPIELSTEIN_FREI:
	{
		name = "FREI";
		farbe = HINTERGRUND_HELL_GRAU;
		break;
	}
	case SPIELSTEIN_LOESUNG:
	{
		name = "LOESUNG";
		farbe = HINTERGRUND_HELL_WEISS;
		break;
	}
	default:
		break;
	}
}

void Spielstein::zeichne()
{
	Cursor::setze_Farbe(farbe);
	for (int i = 0; i < felder[seite][orientierung].size(); i++) //seite bestimmt ob gespiegelt oder nicht
																 // orientierung bestimmt die rotation
	{
			//um den Punkt zu zeichen benötigen wir die X und Y koordinaten
			//dazu rufen wir den Vektor an der jeweiligen Seite und orientierung auf
			//wir brauchen jedoch nur eine bestimmte kette, deswegen das .at(i)
			//da die Konsole bei (0,0) anfängt zu zeichen, müssen wir noch ein offset in form von position.getX()/.getX() draufrechnen
			//gezeichnet wird der aktuelle punkt
			Console::zeichne_punkt(felder[seite][orientierung].at(i).getX() + position.getX(),felder[seite][orientierung].at(i).getY() + position.getY(), CONFIGURATION::SPIELFELD_HINTERGRUND_SYMBOL); 
	}
	Cursor::setze_Farbe(CURSOR_SCHWARZ);
			
	
}
void Spielstein::loesche()
{
	//hier nehmen wir die gleiche Funktion wie bei zeichne(), jedoch mit der abänderung, dass wir das Feld auf Schwarz setzen
	Cursor::setze_Farbe(CURSOR_SCHWARZ);
	for (auto i = 0; i < felder[seite][orientierung].size(); i++)
	{
			Console::zeichne_punkt(felder[seite][orientierung].at(i).getX() + position.getX(),felder[seite][orientierung].at(i).getY() + position.getY(), CONFIGURATION::SPIELFELD_HINTERGRUND_SYMBOL);
	}
	
}


void Spielstein::bewegen(int richtung)
{
	switch (richtung)
	{
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH:
		position.setY(position.getY() - 1); //der 0,0 punk ist bei der konsole oben links, (vierter Quadrant)
		break;								//deswegen müssen wir um den Spielstein nach oben zu bewegen eins abziehen
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER:
		position.setY(position.getY() + 1);
		break;
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS:
		position.setX(position.getX() + 1);
		break;
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS:
		position.setY(position.getY() - 1);
		break;
	default:
		break;
	}
}

//Inkrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_rechts()
{
	switch (orientierung)
	{
	case 0:
		++orientierung;
		break;
	
	case 1:
		++orientierung;
		break;

	case 2:
		++orientierung;
		break;

	case 3:
		orientierung = 0;
		break;
	//default lassen wird drinnen um undefined behaviour vorzubeugen falls wir eine andere eingabe bekommen
	default:
		orientierung = 0;
		break;
	}
}

//Dekrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_links()
{
	
	switch (orientierung)
	{
	case 0:
		orientierung = 3;
		break;
	
	case 1:
		--orientierung;
		break;

	case 2:
		--orientierung;
		break;

	case 3:
		--orientierung;
		break;
		
	default:
		orientierung = 0;
		break;
	}
}
//Inkrementiert das Attribut seite um 1, wobei stets Werte zwischen 0 und 1 angenommen werden.
void Spielstein::flip()
{
	switch (seite)
	{
	case 1:
		seite = 0;
		break;
	case 0:
		seite = 1; //alternativ könnte man auch ++seite schreiben
		break;
	default:
		seite = 0;
		break;
	}
	
}

//Gibt den felder Vektor der aktuellen Lage des Spielsteins zur�ck.
std::vector<Position>* Spielstein::getPositionen()
{
	return &felder[seite][orientierung]; 
}

//Durchläuft den felder Vektor des Spielsteins in aktueller Lage.
//Gibt true zur�ck, falls die �bergebene Position innerhalb des Spielsteines liegt.
//Ansonsten wird false zur�ckgegeben.
bool Spielstein::innerhalb(Position pos) const
{
	for (int i = 0; i < felder[seite][orientierung].size(); i++)
	{
		//hier überprüfen wir ob sich der positionsoperator im feld befindet
		//wir brauchen das offset, da das Spielfeld verschoben ist.
		if (pos==(felder[seite][orientierung].at(i) + position /*<--offset*/)) 
		{
			return true;
		}
	}
		return false;
}

//Gibt wahr zurück, falls sich der aufrufende und der �bergebene Spielstein sich in mindestens einer Position �berlappen.
bool Spielstein::ueberlapp(Spielstein& sp) 
{
	for (int i = 0; i < felder[seite][orientierung].size(); i++)
	{
		for (int j = 0; j < sp.felder[seite][orientierung].size(); j++)
		{
			if (felder[seite][orientierung].at(i) == sp.felder[seite][orientierung].at(j)) { //überprüft ob sich einträge im felder und spielstein vektor überlappen
			return true;
		}
		}
	}
	return false;
}

//Addiert zwei Spielsteine in ihrer aktuellen Lage und gibt die Summe als neuen Spielstein zur�ck.
Spielstein Spielstein::operator+ (const Spielstein& rhs) const
{
	Spielstein summe(SPIELSTEIN_FREI); //erzeugt einen neuen Spielstein auf dem stack
	summe.position = position + rhs.position; //addiert 
	summe.seite = seite + rhs.seite;
	summe.orientierung = orientierung + rhs.orientierung;
	return summe;
}