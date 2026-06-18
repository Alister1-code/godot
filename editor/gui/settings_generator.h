#pragma once

#include "scene/gui/dialogs.h"

class SettingsGenerator : public AcceptDialog {
	GDCLASS(SettingsGenerator, AcceptDialog);

protected:
	void _notification(int p_what);

public:
	SettingsGenerator();
};
