#pragma once

#include <unordered_map>

//* generall definitions
#define TILE				16
#define	SCALE				4
#define TILE_SIZE			TILE * TILE_SIZE // 64

#define FRAME_WIDTH_TILES	22
#define FRAME_HEIGHT_TILES	14
#define FRAME_WIDTH			FRAME_WIDTH_TILES * TILE
#define FRAME_HEIGHT		FRAME_HEIGHT_TILES * TILE


//* general ENUMS
enum DIR {
	UP, DOWN, LEFT, RIGHT,
	UP_LEFT, UP_RIGHT,
	DOWN_LEFT, DOWN_RIGHT
};

enum STATUS {
	HP, STAMINA, MANA,
};


enum STAT {
	HEALTH, STRENGTH, SPEED, ENDURANCE, TOUGHNESS, VITALITY, WISDOME, INTELLIGENCE
};

enum CLASS {
	// Archer
	ARCHER, NOVICE_ARCHER, APPRENTICE_ARCHER, VETERAN_ARCHER, GRAND_ARCHER, ELDER_ARCHER,
			ARCHER_OF_DECAY,
			NEOPHYTE_MANA_ARCHER,
	// MAGE
	MAGE, NOVICE_MAGE,
			RANGED_MAGE,
			COMBAT_MAGE,
	// LIGHT WARRIOR
	LIGHT_WARRIOR,
	// HEAVY WARRIOR
	HEAVY_WARRIOR,
	// CONJURER
	CONJURER,
	// TRAPPER
};

enum PROFESSION {
	BUILDER, WOOODWORKER, ENGENEER, 
	SMITH, BLACKSMITH,
	ALCHEMIST,

};

enum RACE {
	HUMAN,
};

enum class GAME_STATE {
	LOADING, MENU, PLAYING, PAUSE, OPTIONS
};

enum SKILL {
	BASIC_TWO_HANDED_WEAPONS, BASIC_RANGED_WEAPONS, POISONOUS_TOUCH
};

//* General structs and classes
struct Position {

	int x;
	int y;

};

struct Stats {

private:
	std::unordered_map<STAT, int> stats;

public:
	int& operator[](STAT stat) {
		return stats[stat];
	}

	Stats(int health, int strength, int speed, int endurance, int toughness, int vitality, int wisdome, int intelligence);

};

class Status {

	std::unordered_map<STATUS, int[]> status;

	int* operator[](STATUS a) {
		return status[a];
	}

};


struct Race {

	RACE race;
	// skills
	int stage;
	int level;

};

struct Skill {

private:
	std::unordered_map<SKILL, int[]> status;

};

struct Class {

private:
	CLASS baseClase;
	CLASS currentClass;
	int level;
	int stage;
public:

	Class(CLASS baseClass, int level, int stage);
	Class(CLASS baseClass, CLASS currentClass, int level, int stage);

};

struct Professions {



};