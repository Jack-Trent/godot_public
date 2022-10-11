//
// Created by Jack Trent on 08/10/2022.
//

#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include "scene/main/scene_tree.h"

class DataModel : public SceneTree {
	GDCLASS(DataModel, SceneTree);

public:
	virtual void initialize() override;
	virtual void finalize() override;


	static void _bind_methods();

	static bool s_is_instantiated;


	DataModel();
	~DataModel();
};

#endif //GAME_CONTROLLER_H
