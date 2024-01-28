#include "workshop.h"

ModsList available_mods;

ModFindChain::ModFindChain(int id, int order, char* mod_name, bool enabled)
{
	ModFindChain::id = id;
	ModFindChain::order = order;
	ModFindChain::enabled = enabled;
	prev = next = 0;
	list = 0;
	XBuffer str_buf;

	str_buf < mod_name;

	strncpy(name, str_buf.GetBuf(), ACI_MOD_NAME_LEN);
	name[ACI_MOD_NAME_LEN] = 0;
}
ModFindChain::~ModFindChain()
{}

void ModsList::clear_states()
{
	ModFindChain* p;
	while ((p = first()) != 0) {
		remove(p);
		delete p;
	}
}
int ModsList::find_mods()
{
	clear_states();

	// TODO [Workshop/VSS] Number of found mods;
	//  needs to actually be read from somewhere, 20 is for testing purposes
	//  Probably only needs VSS functions without any of Workshop's
	unsigned char n_mods = 20;
	ModFindChain* p;
	int i, j, mod_id, mod_order;
	bool mod_enabled;
	char mod_name[ACI_MOD_NAME_LEN];
	for (i = 0; i < n_mods; i++) {
		// TODO [Workshop/VSS] Logic for finding mods;
		//  for now there's just fake ids & names
		//  Probably only needs VSS functions without any of Workshop's
		mod_id = i;
		for (j = 0; j < ACI_MOD_NAME_LEN; j++) {
			// TODO [Workshop/VSS] Placeholder mod name
			mod_name[j] = 97 + i;
		}

		// TODO [Workshop/VSS] Logic for deciding the mods' loading order and whether
		//  they're enabled or not
		mod_order = i + 1;
		mod_enabled = false;

		p = new ModFindChain(mod_id, mod_order, mod_name, mod_enabled);
		append(p);
	}

	return n_mods;
}