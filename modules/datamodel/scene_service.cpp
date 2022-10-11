//
// Created by Jack Trent on 11/10/2022.
//

#include "scene_service.h"
#include "scene/main/scene_tree.h"
#include "scene/main/window.h"

SceneService *SceneService::singleton = nullptr;

SceneService *SceneService::get_singleton() {
	if (!singleton) {
		memnew(SceneService);
	}
	return singleton;
}

void SceneService::_bind_methods() {}

SceneService::SceneService() {
	singleton = this;
	set_name("SceneService");
}

SceneService::~SceneService() {
	singleton = nullptr;
}