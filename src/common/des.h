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
// - des.h                                                            ||
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

#ifndef COMMON_DES_H
#define COMMON_DES_H

#include "common/cbasetypes.h"

/// One 64-bit block.
typedef struct BIT64 { uint8_t b[8]; } BIT64;

#ifdef HERCULES_CORE
void des_decrypt_block(BIT64* block);
void des_decrypt(unsigned char* data, size_t size);
#endif // HERCULES_CORE

#endif // COMMON_DES_H
