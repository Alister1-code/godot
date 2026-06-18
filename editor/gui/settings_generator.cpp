#include "settings_generator.h"

#include "core/os/keyboard.h"
#include "scene/gui/check_box.h"
#include "scene/gui/label.h"
#include "scene/gui/line_edit.h"
#include "scene/gui/menu_button.h"
#include "scene/gui/rich_text_label.h"
#include "scene/gui/separator.h"

void SettingsGenerator::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_TRANSLATION_CHANGED: {
			//TODO: once ui is ready
		} break;
		case NOTIFICATION_THEME_CHANGED: {
			//TODO: add theme logic
		} break;
	}
}


SettingsGenerator::SettingsGenerator() {
	set_title(TTRC("Generate Settings"));
	set_hide_on_ok(false);

	VBoxContainer *vbc = memnew(VBoxContainer);
	add_child(vbc);

	HBoxContainer *hbc = memnew(HBoxContainer);
	hbc->set_h_size_flags(Control::SIZE_EXPAND_FILL);
	hbc->set_alignment(BoxContainer::ALIGNMENT_CENTER);
	hbc->add_theme_constant_override("seperate", 30 * EDSCALE);
	vbc->add_child(hbc);
}
