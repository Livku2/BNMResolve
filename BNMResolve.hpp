#include "../Utils/includes.h"

using namespace BNM;
using namespace Structures::Unity;
using namespace Structures::Mono;
using namespace UnityEngine;

struct Component;
struct GameObject;
struct Transform;
struct Behavior;
struct Canvas;
struct CanvasScaler;
struct Camera;
struct UIBehavior;
struct BaseRaycaster;
struct GraphicRaycaster;
struct Shader;
struct Renderer;
struct Material;
struct RectTransform;
struct Graphic;
struct MaskableGraphic;
struct Text;
struct Font;
struct LineRenderer;
struct Rigidbody;
struct Time;

//enums
enum RenderMode
{
    ScreenSpaceOverlay,
    ScreenSpaceCamera,
    WorldSpace
};
enum PrimitiveType{
    Sphere,
    Capsule,
    Cylinder,
    Cube,
    Plane,
    Quad
};
enum TextAnchor
{
    UpperLeft,
    UpperCenter,
    UpperRight,
    MiddleLeft,
    MiddleCenter,
    MiddleRight,
    LowerLeft,
    LowerCenter,
    LowerRight
};

//structs
struct Component : Object{
    static MonoType* GetType(){
        return Class("UnityEngine", "Component").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Component");
    }

    Transform* GetTransform(){
        auto get_transform = (Transform*(*)(void*))GetExternMethod("UnityEngine.Component::get_transform");
        return get_transform(this);
    }
    GameObject* GetGameObject(){
        auto get_gameObject = (GameObject*(*)(void*))GetExternMethod("UnityEngine.Component::get_gameObject");
        return get_gameObject(this);
    }
    std::string GetTag(){
        Method<String*> get_tag = GetClass().GetMethod("get_tag");
        auto tag = get_tag[this]();
        return tag->str();
    }
    void SetTag(std::string tag){
        Method<void> set_tag = GetClass().GetMethod("set_tag");
        set_tag[this](CreateMonoString(tag));
    }

    std::string GetName(){
        Method<String*> get_name = GetClass().GetMethod("get_name");
        auto tag = get_name[this]();
        return tag->str();
    }
    void SetName(std::string tag){
        Method<void> set_name = GetClass().GetMethod("set_name");
        set_name[this](CreateMonoString(tag));
    }
};
struct GameObject : Object{
    static MonoType* GetType(){
        return Class("UnityEngine", "GameObject").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "GameObject");
    }
    static void Destroy(Object* obj){
        Method<void> Destroy = Class("UnityEngine", "Object").GetMethod("Destroy", 1);
        Destroy(obj);
    }
    static GameObject *CreatePrimitive(PrimitiveType primitiveType){
        auto CreatePrimitive = (GameObject*(*)(PrimitiveType))GetExternMethod("UnityEngine.GameObject::CreatePrimitive");
        return CreatePrimitive(primitiveType);
    }

    Array<Component*>* GetComponentsInChildren(MonoType* type){
        Method<Array<Component*>*> GetComponentsInChildren = GetClass().GetMethod("GetComponentsInChildren");
        return GetComponentsInChildren[this](type);
    }
    Array<Component*>* GetComponentsInParent(MonoType* type){
        Method<Array<Component*>*> GetComponentsInParent = GetClass().GetMethod("GetComponentsInParent");
        return GetComponentsInParent[this](type);
    }
    Array<Component*>* GetComponents(MonoType* type){
        Method<Array<Component*>*> GetComponents = GetClass().GetMethod("GetComponents");
        return GetComponents[this](type);
    }
    static Array<Object*>* FindObjectsOfType(MonoType * type){
        Method<Array<Object*>*> FindObjectsOfType = GetClass().GetMethod("FindObjectsOfType", {"type"});
        return FindObjectsOfType(type);
    }
    Component* GetComponent(MonoType* type){
        auto GetComponent = (Component*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::GetComponent");
        return GetComponent(this, type);
    }
    Component* AddComponent(MonoType* type){
        Method<Component*> AddComponent = GetClass().GetMethod("AddComponent");
        return AddComponent[this](type);
    }
    Transform* GetTransform(){
        auto get_transform = (Transform*(*)(void*))GetExternMethod("UnityEngine.GameObject::get_transform");
        return get_transform(this);
    }
    std::string GetTag(){
        auto get_tag = (String*(*)(void*))GetExternMethod("UnityEngine.GameObject::get_tag");
        auto tag = get_tag(this);
        return tag->str();
    }
    void SetTag(std::string str){
        auto set_tag = (void (*)(void*, String*))GetExternMethod("UnityEngine.GameObject::set_tag");
        set_tag(this, CreateMonoString(str));
    }
    static GameObject* Find(std::string str){
        auto Find = (GameObject*(*)(String*)) GetExternMethod("UnityEngine.GameObject::Find");
        return Find(CreateMonoString(str));
    }
    void SetActive(bool active){
        auto SetActive = (void (*)(void*, bool))GetExternMethod("UnityEngine.GameObject::SetActive");
        SetActive(this, active);
    }
    bool GetActiveSelf(){
        auto get_activeSelf = (bool (*)(void*))GetExternMethod("UnityEngine.GameObject::get_activeSelf");
        return get_activeSelf(this);
    }

    std::string GetName(){
        Method<String*> get_name = GetClass().GetMethod("get_name");
        auto tag = get_name[this]();
        return tag->str();
    }
    void SetName(std::string name){
        Method<void> set_name = GetClass().GetMethod("set_name");
        set_name[this](CreateMonoString(name));
    }
};
struct Transform : Component{
    static MonoType* GetType(){
        return Class("UnityEngine", "Transform").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Transform");
    }

    Vector3 GetPosition(){
        Method<Vector3> get_position = GetClass().GetMethod("get_position");
        return get_position[this]();
    }
    void SetPosition(Vector3 position){
        Method<void> set_position = GetClass().GetMethod("set_position");
        set_position[this](position);
    }
    Vector3 GetLocalPosition(){
        Method<Vector3> get_position = GetClass().GetMethod("get_localPosition");
        return get_position[this]();
    }
    void SetLocalPosition(Vector3 position){
        Method<void> set_position = GetClass().GetMethod("set_localPosition");
        set_position[this](position);
    }
    void LookAt(Transform* target){
        Method<void> LookAt = GetClass().GetMethod("LookAt", {"target"});
        LookAt[this](target);
    }
    void LookAt(Vector3 worldPosition){
        Method<void> LookAt = GetClass().GetMethod("LookAt", {"worldPosition"});
        LookAt[this](worldPosition);
    }
    void* GetParent(){
        Method<void*> get_parent = GetClass().GetMethod("get_parent");
        return get_parent[this]();
    }
    void SetParent(Transform* parent){
        Method<void> set_parent = GetClass().GetMethod("set_parent");
        set_parent[this](parent);
    }
    Vector3 GetForward(){
        Method<Vector3> get_forward = GetClass().GetMethod("get_forward");
        return get_forward[this]();
    }
    void SetForward(Vector3 forward){
        Method<void> set_forward = GetClass().GetMethod("set_forward");
        set_forward[this](forward);
    }
    Vector3 GetLocalScale(){
        Method<Vector3> get_localScale = GetClass().GetMethod("get_localScale");
        return get_localScale[this]();
    }
    void SetLocalScale(Vector3 scale){
        Method<void> set_localScale = GetClass().GetMethod("set_localScale");
        set_localScale[this](scale);
    }
    Quaternion GetRotation(){
        Method<Quaternion> get_rotation = GetClass().GetMethod("get_rotation");
        return get_rotation[this]();
    }
    void SetRotation(Quaternion rotation){
        Method<void> set_rotation = GetClass().GetMethod("set_rotation");
        set_rotation[this](rotation);
    }
    Quaternion GetLocalRotation(){
        Method<Quaternion> get_rotation = GetClass().GetMethod("get_localRotation");
        return get_rotation[this]();
    }
    void SetLocalRotation(Quaternion rotation){
        Method<void> set_rotation = GetClass().GetMethod("set_localRotation");
        set_rotation[this](rotation);
    }
};
struct Behaviour : Component{
    static MonoType* GetType(){
        return Class("UnityEngine", "Behaviour").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Behaviour");
    }
    void SetEnabled(bool enabled){
        auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Behaviour::set_enabled");
        set_enabled(this, enabled);
    }
    bool GetEnabled(){
        auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Behaviour::get_enabled");
        return get_enabled(this);
    }
};
struct Camera : Behaviour{
    static MonoType* GetType(){
        return Class("UnityEngine", "Camera").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Camera");
    }

    static Camera* GetMain(){
        auto get_main = (Camera*(*)())GetExternMethod("UnityEngine.Camera::get_main");
        return get_main();
    }
};
struct Canvas : Behaviour{
    static MonoType* GetType(){
        return Class("UnityEngine", "Canvas").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Canvas");
    }
    void SetRenderMode(RenderMode mode){
        auto set_renderMode = (void(*)(void*, RenderMode))GetExternMethod("UnityEngine.Canvas::set_renderMode");
        set_renderMode(this, mode);
    }
    RenderMode GetRenderMode(){
        auto get_renderMode = (RenderMode(*)(void*))GetExternMethod("UnityEngine.Canvas::get_renderMode");
        return get_renderMode(this);
    }
    void SetWorldCamera(Camera* camera){
        auto set_worldCamera = (void(*)(void*, Camera*))GetExternMethod("UnityEngine.Canvas::set_worldCamera");
        set_worldCamera(this, camera);
    }
    Camera GetWorldCamera(){
        auto get_worldCamera = (Camera(*)(void*))GetExternMethod("UnityEngine.Canvas::get_worldCamera");
        return get_worldCamera(this);
    }
};
struct UIBehavior : MonoBehaviour{
    static MonoType* GetType(){
        return Class("UnityEngine.EventSystems", "UIBehavior").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.EventSystems", "UIBehavior");
    }
};
struct CanvasScaler : UIBehavior{
    static MonoType* GetType(){
        return Class("UnityEngine.UI", "CanvasScaler").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.UI", "CanvasScaler");
    }
};
struct BaseRaycaster : UIBehavior{
    static MonoType* GetType(){
        return Class("UnityEngine.EventSystems", "BaseRaycaster").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.EventSystems", "BaseRaycaster");
    }
};
struct GraphicRaycaster : BaseRaycaster{
    static MonoType* GetType(){
        return Class("UnityEngine.UI", "GraphicRaycaster").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.UI", "GraphicRaycaster");
    }
};
struct Shader : Object{
    static MonoType* GetType(){
        return Class("UnityEngine", "Shader").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Shader");
    }
    static Shader* Find(std::string shaderName){
        Method<Shader*> Find = GetClass().GetMethod("Find");
        return Find(CreateMonoString(shaderName));
    }
    std::string GetName(){
        Method<String*> get_name = GetClass().GetMethod("get_name");
        auto tag = get_name[this]();
        return tag->str();
    }
    void SetName(std::string name){
        Method<void> set_name = GetClass().GetMethod("set_name");
        set_name[this](CreateMonoString(name));
    }

};
struct Material : Object{
    static MonoType* GetType(){
        return Class("UnityEngine", "Material").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Material");
    }
    Shader* GetShader(){
        auto getShader = (Shader*(*)(void*)) GetExternMethod("UnityEngine.Material::get_shader");
        return getShader(this);
    }
    void SetShader(Shader* shader){
        auto setShader = (void(*)(void*, Shader*)) GetExternMethod("UnityEngine.Material::set_shader");
        setShader(this, shader);
    }
    Color GetColor(){
        Method<Color> get_color = GetClass().GetMethod("get_color");
        return get_color[this]();
    }
    void SetColor(Color color){
        Method<void> set_color = GetClass().GetMethod("set_color");
        set_color[this](color);
    }
};
struct Renderer : Component{
    static MonoType* GetType(){
        return Class("UnityEngine", "Renderer").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Renderer");
    }

    Material* GetMaterial(){
        auto getMaterial = (Material*(*)(void*)) GetExternMethod("UnityEngine.Renderer::GetMaterial");
        return getMaterial(this);
    }
    void SetMaterial(Material* material){
        auto setMaterial = (void(*)(void*, Material*)) GetExternMethod("UnityEngine.Renderer::SetMaterial");
        setMaterial(this, material);
    }
};
struct RectTransform : Transform{
    static MonoType* GetType(){
        return Class("UnityEngine", "RectTransform").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "RectTransform");
    }

    void SetSizeDelta(Vector2 sizeDelta){
        Method<void> set_sizeDelta = GetClass().GetMethod("set_sizeDelta");
        set_sizeDelta[this](sizeDelta);
    }
    Vector2 GetSizeDelta(){
        Method<Vector2> get_sizeDelta = GetClass().GetMethod("get_sizeDelta");
        return get_sizeDelta[this]();
    }
};
struct Graphic : UIBehavior{
    static MonoType* GetType(){
        return Class("UnityEngine.UI", "Graphic").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.UI", "Graphic");
    }
};
struct MaskableGraphic : Graphic{
    static MonoType* GetType(){
        return Class("UnityEngine.UI", "MaskableGraphic").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.UI", "MaskableGraphic");
    }
};
struct Font : Object{
    static MonoType* GetType(){
        return Class("UnityEngine", "Font").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Font");
    }
};
struct Text : MaskableGraphic{
    static MonoType* GetType(){
        return Class("UnityEngine.UI", "Text").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine.UI", "Text");
    }
    TextAnchor GetAlignment(){
        Method<TextAnchor> get_alignment = GetClass().GetMethod("get_alignment");
        return get_alignment[this]();
    }
    void SetAlignment(TextAnchor alignment){
        Method<TextAnchor> set_alignment = GetClass().GetMethod("set_alignment");
        set_alignment[this](alignment);
    }
    Font* GetFont(){
        Method<Font*> get_font = GetClass().GetMethod("get_font");
        return get_font[this]();
    }
    void SetFont(Font* font){
        Method<void> set_font = GetClass().GetMethod("set_font");
        return set_font[this](font);
    }
    int GetFontSize(){
        Method<int> get_fontSize = GetClass().GetMethod("get_fontSize");
        return get_fontSize[this]();
    }
    void SetFontSize(int size){
        Method<void> set_fontSize = GetClass().GetMethod("set_fontSize");
        set_fontSize[this](size);
    }
    std::string GetText(){
        Method<String*> get_text = GetClass().GetMethod("get_text");
        auto text = get_text[this]();
        return text->str();
    }
    void SetText(std::string text){
        Method<void> set_text = GetClass().GetMethod("set_text");
        set_text[this](CreateMonoString(text));
    }
};
struct LineRenderer : Renderer{
    static MonoType* GetType(){
        return Class("UnityEngine", "LineRenderer").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "LineRenderer");
    }

    void SetUseWorldScape(bool val){
        auto set_useWorldSpace = (void (*)(void*, bool))GetExternMethod("UnityEngine.LineRenderer::set_useWorldSpace");
        set_useWorldSpace(this, val);
    }
    bool GetUseWorldScape(){
        auto get_useWorldSpace = (bool (*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_useWorldSpace");
        return get_useWorldSpace(this);
    }
    void SetStartWidth(float val){
        auto set_startWidth = (void (*)(void*, float))GetExternMethod("UnityEngine.LineRenderer::set_startWidth");
        set_startWidth(this, val);
    }
    float GetStartWidth(){
        auto get_startWidth = (float (*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_startWidth");
        return get_startWidth(this);
    }
    void SetEndWidth(float val){
        auto set_endWidth = (void (*)(void*, float))GetExternMethod("UnityEngine.LineRenderer::set_endWidth");
        set_endWidth(this, val);
    }
    void SetStartColor(Color val){
        Method<void> set_startColor = GetClass().GetMethod("set_startColor");
        set_startColor[this](val);
    }
    Color GetStartColor(){
        Method<Color> get_startColor = GetClass().GetMethod("get_startColor");
        get_startColor[this]();
    }
    void SetEndColor(Color val){
        Method<void> set_startColor = GetClass().GetMethod("set_startColor");
        set_startColor[this](val);
    }
    Color GetEndColor(){
        Method<Color> get_endColor = GetClass().GetMethod("get_endColor");
        get_endColor[this]();
    }
    void SetPosition(int index, Vector3 position){
        Method<void> SetPosition = GetClass().GetMethod("SetPosition");
        SetPosition[this](index, position);
    }
};

struct Rigidbody : Component{
    static MonoType* GetType(){
        return Class("UnityEngine", "Rigidbody").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Rigidbody");
    }
    void SetUseGravity(bool useGravity){
        auto set_useGravity = (void(*)(void*, bool))GetExternMethod("UnityEngine.Rigidbody::set_useGravity");
        set_useGravity(this, useGravity);
    }
    bool GetUseGravity(){
        auto get_useGravity = (bool(*)(void*))GetExternMethod("UnityEngine.Rigidbody::get_useGravity");
        return get_useGravity(this);
    }
    void SetVelocity(Vector3 velocity){
        Method<void> set_velocity = GetClass().GetMethod("set_velocity");
        set_velocity[this](velocity);
    }
    Vector3 GetVelocity(){
        Method<Vector3> get_velocity = GetClass().GetMethod("get_velocity");
        return get_velocity[this]();
    }

};
struct Time{
    static MonoType* GetType(){
        return Class("UnityEngine", "Time").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Time");
    }
    static float GetDeltaTime(){
        auto get_deltaTime = (float(*)())GetExternMethod("UnityEngine.Time::get_deltaTime");
        return get_deltaTime();
    }
    static float GetTimeScale(){
        auto get_timeScale = (float(*)())GetExternMethod("UnityEngine.Time::get_timeScale");
        return get_timeScale();
    }
    static void SetTimeScale(float scale){
        auto set_timeScale = (void(*)(float))GetExternMethod("UnityEngine.Time::set_timeScale");
        set_timeScale(scale);
    }
    static int GetFrameCount(){
        auto get_frameCount = (int(*)())GetExternMethod("UnityEngine.Time::get_frameCount");
        return get_frameCount();
    }

};
