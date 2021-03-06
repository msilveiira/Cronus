//====================================================================\\
//                   _____                                            ||
//                  /  __ \                                           ||
//                  | /  \/_ __ ___  _ __  _   _ ___                  ||
//                  | |   | '__/ _ \| '_ \| | | / __|                 ||
//                  | \__/\ | | (_) | | | | |_| \__ \                 ||
//                   \____/_|  \___/|_| |_|\__,_|___/                 ||
//                        Source - 2016                               ||
//====================================================================||
// = Arquivo:                                                         ||
// - geoip.h                                                          ||
//====================================================================||
// = C�digo Base:                                                     ||
// - eAthena/Hercules/Cronus                                          ||
//====================================================================||
// = Sobre:                                                           ||
// Este software � livre: voc� pode redistribu�-lo e/ou modific�-lo   ||
// sob os termos da GNU General Public License conforme publicada     ||
// pela Free Software Foundation, tanto a vers�o 3 da licen�a, ou     ||
// (a seu crit�rio) qualquer vers�o posterior.                        ||
//                                                                    ||
// Este programa � distribu�do na esperan�a de que possa ser �til,    ||
//�mas SEM QUALQUER GARANTIA; mesmo sem a garantia impl�cita de       ||
//�COMERCIALIZA��O ou ADEQUA��O A UM DETERMINADO FIM. Veja a          ||
//�GNU General Public License para mais detalhes.                     ||
//                                                                    ||
// Voc� deve ter recebido uma c�pia da Licen�a P�blica Geral GNU      ||
// juntamente com este programa. Se n�o, veja:                        ||
// <http://www.gnu.org/licenses/>.                                    ||
//====================================================================//

#ifndef CHAR_GEOIP_H
#define CHAR_GEOIP_H

#include "common/hercules.h"

/**
 * GeoIP information
 **/
struct s_geoip {
	unsigned char *cache; // GeoIP.dat information see geoip->init()
	bool active;
};


/**
 * geoip interface
 **/
struct geoip_interface {
	struct s_geoip *data;
	const char* (*getcountry) (uint32 ipnum);
	void (*final) (bool shutdown);
	void (*init) (void);
};

#ifdef HERCULES_CORE
void geoip_defaults(void);
#endif // HERCULES_CORE

HPShared struct geoip_interface *geoip;

#endif /* CHAR_GEOIP_H */
