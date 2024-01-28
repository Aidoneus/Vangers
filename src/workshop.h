#include "xglobal.h"
#include "xcontainers.h"
#include "actint/a_consts.h"

struct ModFindChain {
	// TODO [Workshop/VSS] Unique mod identifier (might actually be of different type?)
	int id;
	int order;
	char name[ACI_MOD_NAME_LEN];
	bool enabled;
	// TODO [Workshop/VSS] Other properties might be needed for mod, i.e. loading order/priority

	ModFindChain* next;
	ModFindChain* prev;
	XTList<ModFindChain>* list;

	ModFindChain(int id = 0, int order = 0, char* name = 0, bool enabled = false);
	~ModFindChain();
};

struct ModsList : XTList<ModFindChain> {
	// TODO [Workshop/VSS] Whatever properties/methods might be needed
	void clear_states();
	int find_mods();
};

extern ModsList available_mods;