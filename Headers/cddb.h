/*
	cddb.h - functions and structures for accessing CDDB
*/

#ifndef CDDB_H
#define CDDB_H

#include <Application.h>

typedef struct  {
	int32 min;
	int32 sec;
	int32 frame;
} cddb_toc;

typedef struct
{
	uchar track_num;
	char track_name[64];
	struct cddb_toc start;
	struct cddb_toc end;
	struct cddb_toc length;
}cddb_track_info;

typedef struct
{
	char disc_title[64];
	char disc_artist[64];
	int32 numtracks;
	struct cddb_track_info track[100];
	int32 playOrder[100];
	int32 shuffleIndex;
}cd_info;

#endif
