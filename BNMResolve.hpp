#pragma once
#include "../Utils/includes.h"

using namespace BNM;
using namespace Structures::Unity;
using namespace Structures::Mono;
using namespace UnityEngine;

struct NamedObject;
struct Component;
struct GameObject;
struct Transform;
struct Behaviour;
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
struct Collider;
struct SphereCollider;
struct BoxCollider;
struct MeshRenderer;
struct Resources;
struct AssetBundle;
struct Physics;


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

enum ForceMode
{
    Force = 0,
    Acceleration = 5,
    Impulse = 1,
    VelocityChange = 2
};

enum FontStyle
{
    Normal,
    Bold,
    Italic,
    BoldAndItalic
};

//structs
struct NamedObject : Object{ // pretty much Object but for some reason BNMDev didn't add .name for it
    static Class GetClass() {
        return Class("UnityEngine", "Object");
    }

    String* GetName() {
        Method<String*> get_name = GetClass().GetMethod("get_name");
        return get_name[this]();
    }
    void SetName(String* name) {
        Method<void> set_name = GetClass().GetMethod("set_name", 1);
        set_name[this](name);
    }
};

struct Component : NamedObject{
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
struct GameObject : NamedObject{
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
    static void Destroy(Object* obj, float t) {
        Method<void> Destroy = Class("UnityEngine", "Object").GetMethod("Destroy", 2);
        Destroy(obj, t);
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
    static Object* FindObjectOfType(MonoType* type){
        Method<Object*> FindObjectOfType = GetClass().GetMethod("FindObjectOfType", {"type"});
        return FindObjectOfType(type);
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
    void SetParent(Transform* parent, bool worldPositionStays){
        Method<void*> set_parent = GetClass().GetMethod("SetParent", 2);
        set_parent[this](parent, worldPositionStays);
    }
    Vector3 GetForward(){
        Method<Vector3> get_forward = GetClass().GetMethod("get_forward");
        return get_forward[this]();
    }
    void SetForward(Vector3 forward){
        Method<void> set_forward = GetClass().GetMethod("set_forward");
        set_forward[this](forward);
    }
    Vector3 GetRight(){
        Method<Vector3> get_right = GetClass().GetMethod("get_right");
        return get_right[this]();
    }
    Vector3 GetUp() {
        Method<Vector3> get_up = GetClass().GetMethod("get_up");
        return get_up[this]();
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
    Vector3 GetLocalEulerAngles() {
        Method<Vector3> get_localEulerAngles = GetClass().GetMethod("get_localEulerAngles");
        return get_localEulerAngles[this]();
    }
    void SetLocalEulerAngles(Vector3 val) {
        Method<void> set_localEulerAngles = GetClass().GetMethod("set_localEulerAngles");
        set_localEulerAngles[this](val);
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
    void SetDynamicPixelsPerUnit(float canvasScaleFloat){
        Method<void> set_dynamicPixelsPerUnit = GetClass().GetMethod("set_dynamicPixelsPerUnit");
        set_dynamicPixelsPerUnit[this](canvasScaleFloat);
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
struct Shader : NamedObject{
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
struct Material : NamedObject{
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
    Color GetColor(){
        Method<Color> get_color = GetClass().GetMethod("get_color");
        return get_color[this]();
    }
    void SetColor(Color color){
        Method<void> set_color = GetClass().GetMethod("set_color");
        set_color[this](color);
    }
    Canvas* GetCanvas(){
        Method<Canvas*> get_canvas = GetClass().GetMethod("get_canvas");
        return get_canvas[this]();
    }
    Material* GetMaterial(){
        Method<Material*> get_material = GetClass().GetMethod("get_material");
        return get_material[this]();
    }
    void SetMaterial(Material* material){
        Method<void> set_material = GetClass().GetMethod("set_material");
        set_material[this](material);
    }
    RectTransform* GetRectTransform() {
        Method<RectTransform*> get_rectTransform = GetClass().GetMethod("get_rectTransform");
        return get_rectTransform[this]();
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
struct Font : NamedObject{
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
    bool GetTextResizeForBestFit(){
        Method<bool> get_resizeTextForBestFit = GetClass().GetMethod("get_resizeTextForBestFit");
        return get_resizeTextForBestFit[this]();
    }
    void SetTextResizeForBestFit(bool val){
        Method<void> set_resizeTextForBestFit = GetClass().GetMethod("set_resizeTextForBestFit");
        set_resizeTextForBestFit[this](val);
    }

    int GetResizeTextMaxSize(){
        Method<int> get_resizeTextMaxSize = GetClass().GetMethod("get_resizeTextMaxSize");
        return get_resizeTextMaxSize[this]();
    }
    void SetResizeTextMaxSize(int val){
        Method<void> set_resizeTextMaxSize = GetClass().GetMethod("set_resizeTextMaxSize");
        set_resizeTextMaxSize[this](val);
    }
    int GetResizeTextMinSize(){
        Method<int> get_resizeTextMinSize = GetClass().GetMethod("get_resizeTextMinSize");
        return get_resizeTextMinSize[this]();
    }
    void SetResizeTextMinSize(int val){
        Method<void> set_resizeTextMinSize = GetClass().GetMethod("set_resizeTextMinSize");
        set_resizeTextMinSize[this](val);
    }
    bool GetSupportRichText() {
        Method<bool> get_supportRichText = GetClass().GetMethod("get_supportRichText");
        return get_supportRichText[this]();
    }
    void SetSupportRichText(bool val) {
        Method<void> set_supportRichText = GetClass().GetMethod("set_supportRichText");
        set_supportRichText[this](val);
    }

    FontStyle GetFontStyle() {
        Method<FontStyle> get_fontStyle = GetClass().GetMethod("get_fontStyle");
        return get_fontStyle[this]();
    }
    void SetFontStyle(FontStyle val) {
        Method<void> set_fontStyle = GetClass().GetMethod("set_fontStyle");
        set_fontStyle[this](val);
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
    void AddForce(Vector3 force, ForceMode mode){
        Method<void> AddForce = GetClass().GetMethod("AddForce", {"force", "mode"});
        AddForce[this](force, mode);
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
    static float GetTime() {
        auto get_time = (float(*)())GetExternMethod("UnityEngine.Time::get_time");
        return get_time();
    }
};
struct Collider : Component{
    static MonoType* GetType(){
        return Class("UnityEngine", "Collider").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Collider");
    }

    bool GetIsTrigger(){
        auto get_isTrigger = (bool(*)(void*))GetExternMethod("UnityEngine.Collider::get_isTrigger");
        return get_isTrigger(this);
    }
    void SetIsTrigger(bool val){
        auto set_isTrigger = (void(*)(void*, bool))GetExternMethod("UnityEngine.Collider::set_isTrigger");
        set_isTrigger(this, val);
    }
    Rigidbody* GetAttachedRigibody(){
        auto get_attachedRigidbody = (Rigidbody*(*)(void*))GetExternMethod("UnityEngine.Collider::get_attachedRigidbody");
        return get_attachedRigidbody(this);
    }
    void SetEnabled(bool val){
        auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Collider::set_enabled");
        set_enabled(this, val);
    }
    bool GetEnabled(){
        auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Collider::get_enabled");
        return get_enabled(this);
    }
};
struct SphereCollider : Collider{
    static MonoType* GetType(){
        return Class("UnityEngine", "SphereCollider").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "SphereCollider");
    }
    Vector3 GetCenter(){
        Method<Vector3> get_center = GetClass().GetMethod("get_center");
        return get_center[this]();
    }
    float GetRadius(){
        auto get_radius = (float(*)(void*)) GetExternMethod("UnityEngine.SphereCollider::get_radius");
        return get_radius(this);
    }
    void SetRadius(float val){
        auto set_radius = (void(*)(void*, float)) GetExternMethod("UnityEngine.SphereCollider::set_radius");
        set_radius(this, val);
    }
};
struct BoxCollider : Collider{
    static MonoType* GetType(){
        return Class("UnityEngine", "BoxCollider").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "BoxCollider");
    }
    Vector3 GetCenter(){
        Method<Vector3> get_center = GetClass().GetMethod("get_center");
        return get_center[this]();
    }
    Vector3 GetSize(){
        Method<Vector3> get_size = GetClass().GetMethod("get_size");
        return get_size[this]();
    }
    void SetSize(Vector3 val){
        Method<void> set_size = GetClass().GetMethod("set_size");
        return set_size[this](val);
    }
};
struct MeshRenderer : Renderer{
    static MonoType* GetType(){
        return Class("UnityEngine", "MeshRenderer").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "MeshRenderer");
    }
};
struct Resources{
    static MonoType* GetType(){
        return Class("UnityEngine", "Resources").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Resources");
    }
    static Object* Load(std::string path){
        Method<Object*> Load = GetClass().GetMethod("Load", 1);
        return Load(path);
    }
    static Object* Load(std::string path, MonoType* systemTypeInstance){
        Method<Object*> Load = GetClass().GetMethod("Load", 2);
        return Load(CreateMonoString(path), systemTypeInstance);
    }
    static Array<Object*>* LoadAll(std::string path, MonoType* systemTypeInstance){
        Method<Array<Object*>*> LoadAll = GetClass().GetMethod("LoadAll", 2);
        return LoadAll(CreateMonoString(path), systemTypeInstance);
    }
        static Array<Object*>* FindObjectsOfTypeAll(MonoType* type) {
            Method<Array<Object*>*> FindObjectsOfTypeAll = GetClass().GetMethod("FindObjectsOfTypeAll", 1);
            return FindObjectsOfTypeAll(type);
        }
    static Object* GetBuiltinResource(MonoType* type, std::string path){
        auto GetBuiltinResource = (Object *(*)(MonoType*, String*))GetExternMethod("UnityEngine.Resources::GetBuiltinResource");
        return GetBuiltinResource(type, CreateMonoString(path));
    }
};
struct AssetBundle : NamedObject{
    static MonoType* GetType(){
        return Class("UnityEngine", "AssetBundle").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "AssetBundle");
    }
    static AssetBundle* LoadFromFile(std::string path){
        Method<AssetBundle*> LoadFromFile = GetClass().GetMethod("LoadFromFile", 1);
        return LoadFromFile(CreateMonoString(path));
    }
    void Unload(bool unloadAllLoadedObjects){
        auto Unload = (void (*)(AssetBundle *, bool))GetExternMethod("UnityEngine.AssetBundle::Unload");
        Unload(this, unloadAllLoadedObjects);
    }
    Object* LoadAsset(std::string name){
        Method<Object*> LoadAsset = GetClass().GetMethod("LoadAsset", 1);
        return LoadAsset[this](CreateMonoString(name));
    }
    Object* LoadAsset(std::string name, MonoType* type){
        Method<Object*> LoadAsset = GetClass().GetMethod("LoadAsset", 2);
        return LoadAsset[this](CreateMonoString(name), type);
    }
};
struct Physics{
    static MonoType* GetType(){
        return Class("UnityEngine", "Physics").GetMonoType();
    }
    static Class GetClass(){
        return Class("UnityEngine", "Physics");
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo){
        Method<bool> Raycast = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo"});
        return Raycast(origin, direction, hitInfo);
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo, float maxDistance){
        Method<bool> Raycast = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo", "maxDistance"});
        return Raycast(origin, direction, hitInfo, maxDistance);
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo, float maxDistance, int layerMask){
        Method<bool> Raycast = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo", "maxDistance", "layerMask"});
        return Raycast(origin, direction, hitInfo, maxDistance, layerMask);
    }

    static void SetGravity(Vector3 gravity){
        Method<void> set_gravity = GetClass().GetMethod("set_gravity");
        set_gravity(gravity);
    }
    static Vector3 GetGravity(){
        Method<Vector3> get_gravity = GetClass().GetMethod("get_gravity");
        return get_gravity();
    }
};


// Structs
struct LayerMask{
    int m_Mask;
    int GetValue() {
        return m_Mask;
    };
    static String* LayerToName(int layer){
        auto layerToName = (String*(*)(int))GetExternMethod("UnityEngine.LayerMask::LayerToName");
        return layerToName(layer);
    };
    static int NameToLayer(BNM::Structures::Mono::String * name) {
        auto nameToLayer = (int(*)(String*))GetExternMethod("UnityEngine.LayerMask::NameToLayer");
        return nameToLayer(name);
    }
};

