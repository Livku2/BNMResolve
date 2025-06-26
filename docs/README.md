# Setup
Replace the ```#include "../Utils/includes.h"``` with either your bnm includes or whereever your include directory is

# Info
Most functions will need to be casted e.g.

```cpp
	auto component = (Renderer*)obj->AddComponent(Renderer::GetType());
```

If this is not done then it will default to Component*
	
# Examples

### Creating an instance
```cpp
    GameObject* gameObject = (GameObject*)GameObject::GetClass().CreateNewObjectParameters();
```

### Adding a component
```cpp
	Renderer* renderer = (Renderer*)gameObject->AddComponent(Renderer::GetType());
```

### FindObjectsOfType
```cpp
	Array<Camera*>* cameras = (Array<Camera*>*)GameObject::FindObjectsOfType(Camera::GetType());
```

### Creating GameObjects
```cpp
    GameObject* obj1 = GameObject::CreatePrimitive(Cube);
```

The same concept applies with everything else as well