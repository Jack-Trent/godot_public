//
// Created by Jack Trent on 08/10/2022.
//

#include "register_types.h"
#include "core/object/class_db.h"
#include "datamodel.h"
#include "base_singleton.h"
#include "scene_service.h"

void initialize_datamodel_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<DataModel>();
	ClassDB::register_abstract_class<BaseSingleton>();
	ClassDB::register_abstract_class<SceneService>();
	Engine::get_singleton()->add_singleton(Engine::Singleton("SceneService", SceneService::get_singleton()));
}

void uninitialize_datamodel_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}