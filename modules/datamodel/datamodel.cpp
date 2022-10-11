//
// Created by Jack Trent on 08/10/2022.
//

#include "datamodel.h"
#include "scene/main/window.h"
#include "scene_service.h"

bool DataModel::s_is_instantiated = false;

void DataModel::_bind_methods() {}

void DataModel::finalize() {
	SceneTree::finalize();
}


DataModel::DataModel() : SceneTree() {
	if (s_is_instantiated) {
		memdelete(this);
		ERR_FAIL_MSG("Class 'DataModel' or its base class cannot be instantiated.");
	} else {
		s_is_instantiated = true;
	}
}

void DataModel::initialize() {
	SceneTree::initialize();
	get_root()->add_child(SceneService::get_singleton());
}

DataModel::~DataModel() {

}