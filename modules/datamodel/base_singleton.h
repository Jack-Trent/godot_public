//
// Created by Jack Trent on 10/10/2022.
//

#ifndef TEST_SINGLETON_H
#define TEST_SINGLETON_H

#include "scene/main/node.h"

class BaseSingleton : public Node {
	GDCLASS(BaseSingleton, Node);

	//static void _bind_methods();
	//static BaseSingleton *singleton;

public:
	//static BaseSingleton *get_singleton();

	BaseSingleton();
	virtual ~BaseSingleton();
};


#endif //TEST_SINGLETON_H
