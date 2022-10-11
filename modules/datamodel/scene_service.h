//
// Created by Jack Trent on 11/10/2022.
//

#ifndef SCENE_SERVICE_H
#define SCENE_SERVICE_H

#include "base_singleton.h"

class SceneService : public BaseSingleton {
	GDCLASS(SceneService, BaseSingleton);
	static void _bind_methods();
	static SceneService *singleton;

public:
	static SceneService *get_singleton();

	SceneService();
	virtual ~SceneService();
};

#endif //SCENE_SERVICE_H
