#pragma once
#include "../Utils/includes.h" // Add your bnm includes here

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
struct UnityWebRequest;
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
struct LightmapData;
struct LightmapSettings;
struct Texture2D;
struct GradientColorKey;
struct GradientAlphaKey;
struct Gradient;
struct Skybox;
struct Sprite;
struct QualitySettings;
struct ParticleSystem;
struct EmissionModule;
struct Light;
struct AudioClip;
struct AudioSource;
struct LODGroup;
struct Matrix4x4;
struct Animator;
struct MonoBehaviour;
struct Application;
struct SkinnedMeshRenderer;
struct DownloadHandlerTexture;
struct GL;
struct TextMeshPro;
struct TMP_Text;

enum GradientMode
{
    Blend,
    Fixed,
    PerceptualBlend
};
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

enum TextAlignmentOptions
{
    TopLeft = 257,
    Top = 258,
    TopRight = 260,
    TopJustified = 264,
    TopFlush = 272,
    TopGeoAligned = 288,
    LLeft = 513,
    Center = 514,
    RRight = 516,
    Justified = 520,
    Flush = 528,
    CenterGeoAligned = 544,
    BottomLeft = 1025,
    Bottom = 1026,
    BottomRight = 1028,
    BottomJustified = 1032,
    BottomFlush = 1040,
    BottomGeoAligned = 1056,
    BaselineLeft = 2049,
    Baseline = 2050,
    BaselineRight = 2052,
    BaselineJustified = 2056,
    BaselineFlush = 2064,
    BaselineGeoAligned = 2080,
    MidlineLeft = 4097,
    Midline = 4098,
    MidlineRight = 4100,
    MidlineJustified = 4104,
    MidlineFlush = 4112,
    MidlineGeoAligned = 4128,
    CaplineLeft = 8193,
    Capline = 8194,
    CaplineRight = 8196,
    CaplineJustified = 8200,
    CaplineFlush = 8208,
    CaplineGeoAligned = 8224,
    Converted = 65535
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

enum SpriteMeshType
{
    FullRect,
    Tight
};

enum TextureFormat
{
    Alpha8 = 1,
    ARGB4444 = 2,
    RGB24 = 3,
    RGBA32 = 4,
    ARGB32 = 5,
    RGB565 = 7,
    R16 = 9,
    DXT1 = 10,
    DXT5 = 12,
    RGBA4444 = 13,
    BGRA32 = 14,
    RHalf = 15,
    RGHalf = 16,
    RGBAHalf = 17,
    RFloat = 18,
    RGFloat = 19,
    RGBAFloat = 20,
    YUY2 = 21,
    RGB9e5Float = 22,
    BC4 = 26,
    BC5 = 27,
    BC6H = 24,
    BC7 = 25,
    DXT1Crunched = 28,
    DXT5Crunched = 29,
    PVRTC_RGB2 = 30,
    PVRTC_RGBA2 = 31,
    PVRTC_RGB4 = 32,
    PVRTC_RGBA4 = 33,
    ETC_RGB4 = 34,
    ATC_RGB4 = 35,
    ATC_RGBA8 = 36,
    EAC_R = 41,
    EAC_R_SIGNED = 42,
    EAC_RG = 43,
    EAC_RG_SIGNED = 44,
    ETC2_RGB4 = 45,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA = 46,
    ETC2_RGBA8 = 47,
    ASTC_4x4 = 48,
    ASTC_5x5 = 49,
    ASTC_6x6 = 50,
    ASTC_8x8 = 51,
    ASTC_10x10 = 52,
    ASTC_12x12 = 53,
    ETC_RGB4_3DS = 60,
    ETC_RGBA8_3DS = 61,
    RG16 = 62,
    R8 = 63,
    ETC_RGB4Crunched = 64,
    ETC2_RGBA8Crunched = 65,
    ASTC_HDR_4x4 = 66,
    ASTC_HDR_5x5 = 67,
    ASTC_HDR_6x6 = 68,
    ASTC_HDR_8x8 = 69,
    ASTC_HDR_10x10 = 70,
    ASTC_HDR_12x12 = 71,
    EAC_R_UNSIGNED = 72,
    EAC_RG_UNSIGNED = 74,
    ETC2_RGB4_UNSIGNED = 76,
    ETC2_RGB4_SIGNED = 77,
    ETC2_RGBA8_UNSIGNED = 78,
    ETC2_RGBA8_SIGNED = 79,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA_UNSIGNED = 80,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA_SIGNED = 81,
    ETC2_RGBA8_PUNCHTHROUGH_ALPHA_UNSIGNED = 82,
    ETC2_RGBA8_PUNCHTHROUGH_ALPHA_SIGNED = 83,
    PBGRA32 = 84,
    PVRTC_2BPP_RGB = 96,
    PVRTC_2BPP_RGBA = 97,
    PVRTC_4BPP_RGB = 98,
    PVRTC_4BPP_RGBA = 99,
    ATC_RGB4_3DS = 100,
    ATC_RGBA8_3DS = 101,
    ETC_RGB4Crunched_3DS = 102,
    ETC_RGBA8Crunched_3DS = 103,
    ETC2_RGB4_3DS = 104,
    ETC2_RGBA8_3DS = 105,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA_3DS = 106,
    ETC2_RGBA8_PUNCHTHROUGH_ALPHA_3DS = 107,
    EAC_R_3DS = 108,
    EAC_R_SIGNED_3DS = 109,
    EAC_RG_3DS = 110,
    EAC_RG_SIGNED_3DS = 111,
    ETC2_RGB4_UNSIGNED_3DS = 112,
    ETC2_RGB4_SIGNED_3DS = 113,
    ETC2_RGBA8_UNSIGNED_3DS = 114,
    ETC2_RGBA8_SIGNED_3DS = 115,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA_UNSIGNED_3DS = 116,
    ETC2_RGB4_PUNCHTHROUGH_ALPHA_SIGNED_3DS = 117,
    ETC2_RGBA8_PUNCHTHROUGH_ALPHA_UNSIGNED_3DS = 118,
    ETC2_RGBA8_PUNCHTHROUGH_ALPHA_SIGNED_3DS = 119,
    RGBA5551 = 123,
};

struct GradientColorKey {
    Color color;
    float time;
};

struct GradientAlphaKey {
    float alpha;
    float time;
};
struct Gradient : BNM::IL2CPP::Il2CppObject {
    static Class GetClass() {
        static Class gradient = Class("UnityEngine", "Gradient");
        return gradient;
    }
    static MonoType* GetType() {
        static MonoType* type = GetClass().GetMonoType();
        return type;
    }

    void SetColorKeys(std::vector<GradientColorKey> keys) {
        static auto set_colorKeys = (void(*)(void*, Array<GradientColorKey>*))GetExternMethod("UnityEngine.Gradient::set_colorKeys");
        Array<GradientColorKey>* keyArr = Array<GradientColorKey>::Create(keys);
        if (set_colorKeys) {
            set_colorKeys(this, keyArr);
        } else {
            static Method<void> set_colorKeysM = GetClass().GetMethod("set_colorKeys");
            set_colorKeysM[this](keyArr);
        }
    }

    void SetAlphaKeys(std::vector<GradientAlphaKey> keys) {
        static auto set_alphaKeys = (void(*)(void*, Array<GradientAlphaKey>*))GetExternMethod("UnityEngine.Gradient::set_alphaKeys");
        Array<GradientAlphaKey>* keyArr = Array<GradientAlphaKey>::Create(keys);
        if (set_alphaKeys) {
            set_alphaKeys(this, keyArr);
        } else {
            static Method<void> set_alphaKeysM = GetClass().GetMethod("set_alphaKeys");
            set_alphaKeysM[this](keyArr);
        }
    }

    void SetKeys(std::vector<GradientColorKey> colorKeys, std::vector<GradientAlphaKey> alphaKeys) {
        static auto SetKeysMethod = (void(*)(void*, Array<GradientColorKey>*, Array<GradientAlphaKey>*))GetExternMethod("UnityEngine.Gradient::SetKeys");
        Array<GradientColorKey>* colorKeyArray = Array<GradientColorKey>::Create(colorKeys);
        Array<GradientAlphaKey>* alphaKeyArray = Array<GradientAlphaKey>::Create(alphaKeys);
        if (SetKeysMethod) {
            SetKeysMethod(this, colorKeyArray, alphaKeyArray);
        } else {
            static Method<void> SetKeysM = GetClass().GetMethod("SetKeys", 2);
            SetKeysM[this](colorKeyArray, alphaKeyArray);
        }
    }

    Array<GradientColorKey>* GetColorKeys() {
        static auto get_colorKeys = (Array<GradientColorKey>*(*)(void*))GetExternMethod("UnityEngine.Gradient::get_colorKeys");
        if (get_colorKeys) {
            return get_colorKeys(this);
        } else {
            static Method<Array<GradientColorKey>*> get_colorKeysM = GetClass().GetMethod("get_colorKeys");
            return get_colorKeysM[this]();
        }
    }

    Array<GradientAlphaKey>* GetAlphaKeys() {
        static auto get_alphaKeys = (Array<GradientAlphaKey>*(*)(void*))GetExternMethod("UnityEngine.Gradient::get_alphaKeys");
        if (get_alphaKeys) {
            return get_alphaKeys(this);
        } else {
            static Method<Array<GradientAlphaKey>*> get_alphaKeysM = GetClass().GetMethod("get_alphaKeys");
            return get_alphaKeysM[this]();
        }
    }

    Color Evaluate(float time) {
        static auto evaluate = (Color(*)(void*, float))GetExternMethod("UnityEngine.Gradient::Evaluate");
        if (evaluate) {
            return evaluate(this, time);
        } else {
            static Method<Color> evaluateM = GetClass().GetMethod("Evaluate");
            return evaluateM[this](time);
        }
    }

    void SetMode(GradientMode mode) {
        static auto set_mode = (void(*)(void*, int))GetExternMethod("UnityEngine.Gradient::set_mode");
        if (set_mode) {
            set_mode(this, (int)mode);
        } else {
            static Method<void> set_modeM = GetClass().GetMethod("set_mode");
            set_modeM[this]((int)mode);
        }
    }

    GradientMode GetMode() {
        static auto get_mode = (int(*)(void*))GetExternMethod("UnityEngine.Gradient::get_mode");
        if (get_mode) {
            return (GradientMode)get_mode(this);
        } else {
            static Method<int> get_modeM = GetClass().GetMethod("get_mode");
            return (GradientMode)get_modeM[this]();
        }
    }
};

struct NamedObject : Object{
    static Class GetClass() {
        static Class mclass = Class("UnityEngine", "Object");
        return mclass;
    }
    static MonoType* GetType() {
        static MonoType* type = GetClass().GetMonoType();
        return type;
    }

    std::string GetName() {
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }
    void SetName(std::string name) {
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name", 1);
            set_name_m[this](CreateMonoString(name));
        }
    }
};

struct Component : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Component").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Component");
        return mclass;
    }

    Transform* GetTransform(){
        static auto get_transform = (Transform*(*)(void*))GetExternMethod("UnityEngine.Component::get_transform");
        if (get_transform) return get_transform(this);
        static Method<Transform*> get_transform_m = GetClass().GetMethod("get_transform");
        return get_transform_m[this]();
    }
    GameObject* GetGameObject(){
        static auto get_gameObject = (GameObject*(*)(void*))GetExternMethod("UnityEngine.Component::get_gameObject");
        if (get_gameObject) return get_gameObject(this);
        static Method<GameObject*> get_gameObject_m = GetClass().GetMethod("get_gameObject");
        return get_gameObject_m[this]();
    }
    std::string GetTag(){
        static auto get_tag = (String*(*)(void*))GetExternMethod("UnityEngine.Component::get_tag");
        if (get_tag) return get_tag(this)->str();
        static Method<String*> get_tag_m = GetClass().GetMethod("get_tag");
        return get_tag_m[this]()->str();
    }
    void SetTag(std::string tag){
        static auto set_tag = (void(*)(void*, String*))GetExternMethod("UnityEngine.Component::set_tag");
        if (set_tag) {
            set_tag(this, CreateMonoString(tag));
        } else {
            static Method<void> set_tag_m = GetClass().GetMethod("set_tag");
            set_tag_m[this](CreateMonoString(tag));
        }
    }
    Transform* Find(std::string n) {
        static auto Find = (Transform*(*)(void*, String*))GetExternMethod("UnityEngine.Transform::Find");
        if (Find) return Find(this, CreateMonoString(n));
        static Method<Transform*> FindM = GetClass().GetMethod("Find", { "n" });
        return FindM[this](CreateMonoString(n));
    }
    Transform* FindChild(int index) {
        static auto FindChild = (Transform*(*)(void*, int))GetExternMethod("UnityEngine.Transform::FindChild");
        if (FindChild) return FindChild(this, index);
        static Method<Transform*> FindChildM = GetClass().GetMethod("FindChild", 1);
        return FindChildM[this](index);
    }
    std::string GetName(){
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }
    void SetName(std::string tag){
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(tag));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(tag));
        }
    }

    Component* GetComponent(MonoType* type) {
        static auto GetComponent = (Component*(*)(void*, MonoType*))GetExternMethod("UnityEngine.Component::GetComponent");
        if (GetComponent) return GetComponent(this, type);
        static Method<Component*> GetComponentM = GetClass().GetMethod("GetComponent", 1);
        return GetComponentM[this](type);
    }
    Component* GetComponentInChildren(MonoType* type, bool includeInactive) {
        static auto GetComponentInChildren = (Component*(*)(void*, MonoType*, bool))GetExternMethod("UnityEngine.Component::GetComponentInChildren");
        if (GetComponentInChildren) return GetComponentInChildren(this, type, includeInactive);
        static Method<Component*> GetComponentInChildrenM = GetClass().GetMethod("GetComponentInChildren", 2);
        return GetComponentInChildrenM[this](type, includeInactive);
    }
    Component* GetComponentInParent(MonoType* type, bool includeInactive) {
        static auto GetComponentInParent = (Component*(*)(void*, MonoType*, bool))GetExternMethod("UnityEngine.Component::GetComponentInParent");
        if (GetComponentInParent) return GetComponentInParent(this, type, includeInactive);
        static Method<Component*> GetComponentInParentM = GetClass().GetMethod("GetComponentInParent", 2);
        return GetComponentInParentM[this](type, includeInactive);
    }
};
struct GameObject : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "GameObject").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "GameObject");
        return mclass;
    }
    static void Destroy(Object* obj){
        static auto Destroy = (void(*)(Object*))GetExternMethod("UnityEngine.Object::Destroy");
        if (Destroy) {
            Destroy(obj);
        } else {
            static Method<void> DestroyM = Class("UnityEngine", "Object").GetMethod("Destroy", 1);
            DestroyM(obj);
        }
    }
    static void Destroy(Object* obj, float t) {
        static Method<void> DestroyM = Class("UnityEngine", "Object").GetMethod("Destroy", 2);
        DestroyM(obj, t);
    }
    static GameObject *CreatePrimitive(PrimitiveType primitiveType){
        static auto CreatePrimitive = (GameObject*(*)(PrimitiveType))GetExternMethod("UnityEngine.GameObject::CreatePrimitive");
        if (CreatePrimitive) return CreatePrimitive(primitiveType);
        static Method<GameObject*> CreatePrimitiveM = GetClass().GetMethod("CreatePrimitive");
        return CreatePrimitiveM(primitiveType);
    }

    static Object *Instantiate(Object* original, Vector3 position, Quaternion rotation) {
        static Method<Object*> InstantiateM = GetClass().GetMethod("Instantiate", { "original", "position", "rotation" });
        return InstantiateM(original, position, rotation);
    }
    static Object* Instantiate(Object* original) {
        static auto Instantiate = (Object*(*)(Object*))GetExternMethod("UnityEngine.Object::Instantiate");
        if (Instantiate) return Instantiate(original);
        static Method<Object*> InstantiateM = GetClass().GetMethod("Instantiate", { "original" });
        return InstantiateM(original);
    }
    static Object* Instantiate(Object* original, Transform* parent, bool instantiateInWorldSpace) {
        static Method<Object*> InstantiateM = GetClass().GetMethod("Instantiate", { "original", "parent", "instantiateInWorldSpace" });
        return InstantiateM(original, parent, instantiateInWorldSpace);
    }

    static void DontDestroyOnLoad(Object* object){
        static auto DontDestroyOnLoad = (void(*)(Object*))GetExternMethod("UnityEngine.Object::DontDestroyOnLoad");
        if (DontDestroyOnLoad) {
            DontDestroyOnLoad(object);
        } else {
            static Method<void> DontDestroyOnLoadM = GetClass().GetMethod("DontDestroyOnLoad");
            DontDestroyOnLoadM(object);
        }
    }

    Array<Component*>* GetComponentsInChildren(MonoType* type){
        static auto GetComponentsInChildren = (Array<Component*>*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::GetComponentsInChildren");
        if (GetComponentsInChildren) return GetComponentsInChildren(this, type);
        static Method<Array<Component*>*> GetComponentsInChildrenM = GetClass().GetMethod("GetComponentsInChildren");
        return GetComponentsInChildrenM[this](type);
    }

    Array<Component*>* GetComponentsInParent(MonoType* type){
        static auto GetComponentsInParent = (Array<Component*>*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::GetComponentsInParent");
        if (GetComponentsInParent) return GetComponentsInParent(this, type);
        static Method<Array<Component*>*> GetComponentsInParentM = GetClass().GetMethod("GetComponentsInParent");
        return GetComponentsInParentM[this](type);
    }
    Array<Component*>* GetComponents(MonoType* type){
        static auto GetComponents = (Array<Component*>*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::GetComponents");
        if (GetComponents) return GetComponents(this, type);
        static Method<Array<Component*>*> GetComponentsM = GetClass().GetMethod("GetComponents");
        return GetComponentsM[this](type);
    }
    Component* GetComponentInParent(MonoType* type, bool includeInactive){
        static auto GetComponentInParent = (Component*(*)(void*, MonoType*, bool))GetExternMethod("UnityEngine.GameObject::GetComponentInParent");
        if (GetComponentInParent) return GetComponentInParent(this, type, includeInactive);
        static Method<Component*> GetComponentInParentM = GetClass().GetMethod("GetComponentInParent", 2);
        return GetComponentInParentM[this](type, includeInactive);
    }
    static Array<Object*>* FindObjectsOfType(MonoType * type){
        static auto FindObjectsOfType = (Array<Object*>*(*)(MonoType*))GetExternMethod("UnityEngine.Object::FindObjectsOfType");
        if (FindObjectsOfType) return FindObjectsOfType(type);
        static Method<Array<Object*>*> FindObjectsOfTypeM = GetClass().GetMethod("FindObjectsOfType", {"type"});
        return FindObjectsOfTypeM(type);
    }
    static Object* FindObjectOfType(MonoType* type){
        static auto FindObjectOfType = (Object*(*)(MonoType*))GetExternMethod("UnityEngine.Object::FindObjectOfType");
        if (FindObjectOfType) return FindObjectOfType(type);
        static Method<Object*> FindObjectOfTypeM = GetClass().GetMethod("FindObjectOfType", {"type"});
        return FindObjectOfTypeM(type);
    }
    Component* GetComponent(MonoType* type){
        static auto GetComponent = (Component*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::GetComponent");
        if (GetComponent) return GetComponent(this, type);
        static Method<Component*> GetComponentM = GetClass().GetMethod("GetComponent", 1);
        return GetComponentM[this](type);
    }
    Component* AddComponent(MonoType* type){
        static auto AddComponent = (Component*(*)(void*, MonoType*))GetExternMethod("UnityEngine.GameObject::AddComponent");
        if (AddComponent) return AddComponent(this, type);
        static Method<Component*> AddComponentM = GetClass().GetMethod("AddComponent");
        return AddComponentM[this](type);
    }
    Transform* GetTransform(){
        static auto get_transform = (Transform*(*)(void*))GetExternMethod("UnityEngine.GameObject::get_transform");
        if (get_transform) return get_transform(this);
        static Method<Transform*> get_transform_m = GetClass().GetMethod("get_transform");
        return get_transform_m[this]();
    }
    std::string GetTag(){
        static auto get_tag = (String*(*)(void*))GetExternMethod("UnityEngine.GameObject::get_tag");
        if (get_tag) return get_tag(this)->str();
        static Method<String*> get_tag_m = GetClass().GetMethod("get_tag");
        return get_tag_m[this]()->str();
    }
    void SetTag(std::string str){
        static auto set_tag = (void (*)(void*, String*))GetExternMethod("UnityEngine.GameObject::set_tag");
        if (set_tag) {
            set_tag(this, CreateMonoString(str));
        } else {
            static Method<void> set_tag_m = GetClass().GetMethod("set_tag");
            set_tag_m[this](CreateMonoString(str));
        }
    }
    static GameObject* Find(std::string str){
        static auto Find = (GameObject*(*)(String*)) GetExternMethod("UnityEngine.GameObject::Find");
        if (Find) return Find(CreateMonoString(str));
        static Method<GameObject*> FindM = GetClass().GetMethod("Find");
        return FindM(CreateMonoString(str));
    }
    void SetActive(bool active){
        static auto SetActive = (void (*)(void*, bool))GetExternMethod("UnityEngine.GameObject::SetActive");
        if (SetActive) {
            SetActive(this, active);
        } else {
            static Method<void> SetActiveM = GetClass().GetMethod("SetActive");
            SetActiveM[this](active);
        }
    }
    bool GetActiveSelf(){
        static auto get_activeSelf = (bool (*)(void*))GetExternMethod("UnityEngine.GameObject::get_activeSelf");
        if (get_activeSelf) return get_activeSelf(this);
        static Method<bool> get_activeSelf_m = GetClass().GetMethod("get_activeSelf");
        return get_activeSelf_m[this]();
    }
    void SetLayer(int layer) {
        static auto set_layer = (void (*)(void*, int))GetExternMethod("UnityEngine.GameObject::set_layer");
        if (set_layer) {
            set_layer(this, layer);
        } else {
            static Method<void> set_layer_m = GetClass().GetMethod("set_layer");
            set_layer_m[this](layer);
        }
    }
    int GetLayer() {
        static auto get_layer = (int (*)(void*))GetExternMethod("UnityEngine.GameObject::get_layer");
        if (get_layer) return get_layer(this);
        static Method<int> get_layer_m = GetClass().GetMethod("get_layer");
        return get_layer_m[this]();
    }

    std::string GetName(){
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }
    void SetName(std::string name){
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(name));
        }
    }
};
struct Transform : Component{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Transform").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Transform");
        return mclass;
    }

    Vector3 GetPosition(){
        static auto get_position = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_position");
        if (get_position) return get_position(this);
        static Method<Vector3> get_position_m = GetClass().GetMethod("get_position");
        return get_position_m[this]();
    }
    void SetPosition(Vector3 position){
        static auto set_position = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_position");
        if (set_position) {
            set_position(this, position);
        } else {
            static Method<void> set_position_m = GetClass().GetMethod("set_position");
            set_position_m[this](position);
        }
    }
    Vector3 GetLocalPosition(){
        static auto get_localPosition = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_localPosition");
        if (get_localPosition) return get_localPosition(this);
        static Method<Vector3> get_localPosition_m = GetClass().GetMethod("get_localPosition");
        return get_localPosition_m[this]();
    }
    void SetLocalPosition(Vector3 position){
        static auto set_localPosition = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_localPosition");
        if (set_localPosition) {
            set_localPosition(this, position);
        } else {
            static Method<void> set_localPosition_m = GetClass().GetMethod("set_localPosition");
            set_localPosition_m[this](position);
        }
    }
    void LookAt(Transform* target){
        static auto LookAt = (void(*)(void*, Transform*))GetExternMethod("UnityEngine.Transform::LookAt");
        if (LookAt) {
            LookAt(this, target);
        } else {
            static Method<void> LookAtM = GetClass().GetMethod("LookAt", {"target"});
            LookAtM[this](target);
        }
    }
    void LookAt(Vector3 worldPosition){
        static auto LookAt = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::LookAt");
        if (LookAt) {
            LookAt(this, worldPosition);
        } else {
            static Method<void> LookAtM = GetClass().GetMethod("LookAt", {"worldPosition"});
            LookAtM[this](worldPosition);
        }
    }
    void* GetParent(){
        static auto get_parent = (void*(*)(void*))GetExternMethod("UnityEngine.Transform::get_parent");
        if (get_parent) return get_parent(this);
        static Method<void*> get_parent_m = GetClass().GetMethod("get_parent");
        return get_parent_m[this]();
    }
    void SetParent(Transform* parent){
        static auto set_parent = (void(*)(void*, Transform*))GetExternMethod("UnityEngine.Transform::set_parent");
        if (set_parent) {
            set_parent(this, parent);
        } else {
            static Method<void> set_parent_m = GetClass().GetMethod("set_parent");
            set_parent_m[this](parent);
        }
    }
    void SetParent(Transform* parent, bool worldPositionStays){
        static auto SetParent = (void(*)(void*, Transform*, bool))GetExternMethod("UnityEngine.Transform::SetParent");
        if (SetParent) {
            SetParent(this, parent, worldPositionStays);
        } else {
            static Method<void> SetParentM = GetClass().GetMethod("SetParent", 2);
            SetParentM[this](parent, worldPositionStays);
        }
    }
    Vector3 GetForward(){
        static auto get_forward = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_forward");
        if (get_forward) return get_forward(this);
        static Method<Vector3> get_forward_m = GetClass().GetMethod("get_forward");
        return get_forward_m[this]();
    }
    void SetForward(Vector3 forward){
        static auto set_forward = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_forward");
        if (set_forward) {
            set_forward(this, forward);
        } else {
            static Method<void> set_forward_m = GetClass().GetMethod("set_forward");
            set_forward_m[this](forward);
        }
    }
    Vector3 GetRight(){
        static auto get_right = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_right");
        if (get_right) return get_right(this);
        static Method<Vector3> get_right_m = GetClass().GetMethod("get_right");
        return get_right_m[this]();
    }
    Vector3 GetUp() {
        static auto get_up = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_up");
        if (get_up) return get_up(this);
        static Method<Vector3> get_up_m = GetClass().GetMethod("get_up");
        return get_up_m[this]();
    }
    Vector3 GetLocalScale(){
        static auto get_localScale = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_localScale");
        if (get_localScale) return get_localScale(this);
        static Method<Vector3> get_localScale_m = GetClass().GetMethod("get_localScale");
        return get_localScale_m[this]();
    }
    void SetLocalScale(Vector3 scale){
        static auto set_localScale = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_localScale");
        if (set_localScale) {
            set_localScale(this, scale);
        } else {
            static Method<void> set_localScale_m = GetClass().GetMethod("set_localScale");
            set_localScale_m[this](scale);
        }
    }
    Quaternion GetRotation(){
        static auto get_rotation = (Quaternion(*)(void*))GetExternMethod("UnityEngine.Transform::get_rotation");
        if (get_rotation) return get_rotation(this);
        static Method<Quaternion> get_rotation_m = GetClass().GetMethod("get_rotation");
        return get_rotation_m[this]();
    }
    void SetRotation(Quaternion rotation){
        static auto set_rotation = (void(*)(void*, Quaternion))GetExternMethod("UnityEngine.Transform::set_rotation");
        if (set_rotation) {
            set_rotation(this, rotation);
        } else {
            static Method<void> set_rotation_m = GetClass().GetMethod("set_rotation");
            set_rotation_m[this](rotation);
        }
    }
    Quaternion GetLocalRotation(){
        static auto get_localRotation = (Quaternion(*)(void*))GetExternMethod("UnityEngine.Transform::get_localRotation");
        if (get_localRotation) return get_localRotation(this);
        static Method<Quaternion> get_localRotation_m = GetClass().GetMethod("get_localRotation");
        return get_localRotation_m[this]();
    }
    void SetLocalRotation(Quaternion rotation){
        static auto set_localRotation = (void(*)(void*, Quaternion))GetExternMethod("UnityEngine.Transform::set_localRotation");
        if (set_localRotation) {
            set_localRotation(this, rotation);
        } else {
            static Method<void> set_localRotation_m = GetClass().GetMethod("set_localRotation");
            set_localRotation_m[this](rotation);
        }
    }
    Vector3 GetLocalEulerAngles() {
        static auto get_localEulerAngles = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_localEulerAngles");
        if (get_localEulerAngles) return get_localEulerAngles(this);
        static Method<Vector3> get_localEulerAngles_m = GetClass().GetMethod("get_localEulerAngles");
        return get_localEulerAngles_m[this]();
    }
    void SetLocalEulerAngles(Vector3 val) {
        static auto set_localEulerAngles = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_localEulerAngles");
        if (set_localEulerAngles) {
            set_localEulerAngles(this, val);
        } else {
            static Method<void> set_localEulerAngles_m = GetClass().GetMethod("set_localEulerAngles");
            set_localEulerAngles_m[this](val);
        }
    }
    Vector3 GetEulerAngles() {
        static auto get_eulerAngles = (Vector3(*)(void*))GetExternMethod("UnityEngine.Transform::get_eulerAngles");
        if (get_eulerAngles) return get_eulerAngles(this);
        static Method<Vector3> get_eulerAngles_m = GetClass().GetMethod("get_eulerAngles");
        return get_eulerAngles_m[this]();
    }
    void SetEulerAngles(Vector3 val) {
        static auto set_eulerAngles = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Transform::set_eulerAngles");
        if (set_eulerAngles) {
            set_eulerAngles(this, val);
        } else {
            static Method<void> set_eulerAngles_m = GetClass().GetMethod("set_eulerAngles");
            set_eulerAngles_m[this](val);
        }
    }
};
struct Behaviour : Component{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Behaviour").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Behaviour");
        return mclass;
    }
    void SetEnabled(bool enabled){
        static auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Behaviour::set_enabled");
        if (set_enabled) {
            set_enabled(this, enabled);
        } else {
            static Method<void> set_enabled_m = GetClass().GetMethod("set_enabled");
            set_enabled_m[this](enabled);
        }
    }
    bool GetEnabled(){
        static auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Behaviour::get_enabled");
        if (get_enabled) return get_enabled(this);
        static Method<bool> get_enabled_m = GetClass().GetMethod("get_enabled");
        return get_enabled_m[this]();
    }
};
struct Camera : Behaviour{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Camera").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Camera");
        return mclass;
    }

    static Camera* GetMain(){
        static auto get_main = (Camera*(*)())GetExternMethod("UnityEngine.Camera::get_main");
        if (get_main) return get_main();
        static Method<Camera*> get_main_m = GetClass().GetMethod("get_main");
        return get_main_m();
    }

    float GetFarClipPlane() {
        static auto get_farClipPlane = (float(*)(void*))GetExternMethod("UnityEngine.Camera::get_farClipPlane");
        if (get_farClipPlane) return get_farClipPlane(this);
        static Method<float> get_farClipPlane_m = GetClass().GetMethod("get_farClipPlane");
        return get_farClipPlane_m[this]();
    }

    void SetFarClipPlane(float value) {
        static auto set_farClipPlane = (void(*)(void*, float))GetExternMethod("UnityEngine.Camera::set_farClipPlane");
        if (set_farClipPlane) {
            set_farClipPlane(this, value);
        } else {
            static Method<void> set_farClipPlane_m = GetClass().GetMethod("set_farClipPlane");
            set_farClipPlane_m[this](value);
        }
    }
};
struct Canvas : Behaviour{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Canvas").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Canvas");
        return mclass;
    }
    void SetRenderMode(RenderMode mode){
        static auto set_renderMode = (void(*)(void*, RenderMode))GetExternMethod("UnityEngine.Canvas::set_renderMode");
        if (set_renderMode) {
            set_renderMode(this, mode);
        } else {
            static Method<void> set_renderMode_m = GetClass().GetMethod("set_renderMode");
            set_renderMode_m[this](mode);
        }
    }
    RenderMode GetRenderMode(){
        static auto get_renderMode = (RenderMode(*)(void*))GetExternMethod("UnityEngine.Canvas::get_renderMode");
        if (get_renderMode) return get_renderMode(this);
        static Method<RenderMode> get_renderMode_m = GetClass().GetMethod("get_renderMode");
        return get_renderMode_m[this]();
    }
    void SetWorldCamera(Camera* camera){
        static auto set_worldCamera = (void(*)(void*, Camera*))GetExternMethod("UnityEngine.Canvas::set_worldCamera");
        if (set_worldCamera) {
            set_worldCamera(this, camera);
        } else {
            static Method<void> set_worldCamera_m = GetClass().GetMethod("set_worldCamera");
            set_worldCamera_m[this](camera);
        }
    }
    Camera GetWorldCamera(){
        static auto get_worldCamera = (Camera(*)(void*))GetExternMethod("UnityEngine.Canvas::get_worldCamera");
        if (get_worldCamera) return get_worldCamera(this);
        static Method<Camera> get_worldCamera_m = GetClass().GetMethod("get_worldCamera");
        return get_worldCamera_m[this]();
    }
};
struct UIBehavior : Behaviour{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.EventSystems", "UIBehavior").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.EventSystems", "UIBehavior");
        return mclass;
    }
};
struct CanvasScaler : UIBehavior{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.UI", "CanvasScaler").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.UI", "CanvasScaler");
        return mclass;
    }
    float GetDynamicPixelsPerUnit() {
        static auto get_dynamicPixelsPerUnit = (float(*)(void*))GetExternMethod("UnityEngine.UI.CanvasScaler::get_dynamicPixelsPerUnit");
        if (get_dynamicPixelsPerUnit) return get_dynamicPixelsPerUnit(this);
        static Method<float> get_dynamicPixelsPerUnit_m = GetClass().GetMethod("get_dynamicPixelsPerUnit");
        return get_dynamicPixelsPerUnit_m[this]();
    }
    void SetDynamicPixelsPerUnit(float canvasScaleFloat){
        static auto set_dynamicPixelsPerUnit = (void(*)(void*, float))GetExternMethod("UnityEngine.UI.CanvasScaler::set_dynamicPixelsPerUnit");
        if (set_dynamicPixelsPerUnit) {
            set_dynamicPixelsPerUnit(this, canvasScaleFloat);
        } else {
            static Method<void> set_dynamicPixelsPerUnit_m = GetClass().GetMethod("set_dynamicPixelsPerUnit");
            set_dynamicPixelsPerUnit_m[this](canvasScaleFloat);
        }
    }
    float GetReferencePixelsPerUnit() {
        static auto get_referencePixelsPerUnit = (float(*)(void*))GetExternMethod("UnityEngine.UI.CanvasScaler::get_referencePixelsPerUnit");
        if (get_referencePixelsPerUnit) return get_referencePixelsPerUnit(this);
        static Method<float> get_referencePixelsPerUnit_m = GetClass().GetMethod("get_referencePixelsPerUnit");
        return get_referencePixelsPerUnit_m[this]();
    }
    void SetReferencePixelsPerUnit(float canvasScaleFloat){
        static auto set_referencePixelsPerUnit = (void(*)(void*, float))GetExternMethod("UnityEngine.UI.CanvasScaler::set_referencePixelsPerUnit");
        if (set_referencePixelsPerUnit) {
            set_referencePixelsPerUnit(this, canvasScaleFloat);
        } else {
            static Method<void> set_referencePixelsPerUnit_m = GetClass().GetMethod("set_referencePixelsPerUnit");
            set_referencePixelsPerUnit_m[this](canvasScaleFloat);
        }
    }
};
struct BaseRaycaster : UIBehavior{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.EventSystems", "BaseRaycaster").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.EventSystems", "BaseRaycaster");
        return mclass;
    }
};
struct GraphicRaycaster : BaseRaycaster{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.UI", "GraphicRaycaster").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.UI", "GraphicRaycaster");
        return mclass;
    }
};
struct Shader : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Shader").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Shader");
        return mclass;
    }
    static Shader* Find(std::string shaderName){
        static auto Find = (Shader*(*)(String*))GetExternMethod("UnityEngine.Shader::Find");
        if (Find) return Find(CreateMonoString(shaderName));
        static Method<Shader*> FindM = GetClass().GetMethod("Find");
        return FindM(CreateMonoString(shaderName));
    }
    std::string GetName(){
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }
    void SetName(std::string name){
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(name));
        }
    }

};
struct Material : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Material").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Material");
        return mclass;
    }
    void SetFloat(std::string name, float value) {
        static auto SetFloat = (void(*)(void*, String*, float))GetExternMethod("UnityEngine.Material::SetFloat");
        if (SetFloat) {
            SetFloat(this, CreateMonoString(name), value);
        } else {
            static Method<void> SetFloatM = GetClass().GetMethod("SetFloat", 2);
            SetFloatM[this](CreateMonoString(name), value);
        }
    }
    Shader* GetShader(){
        static auto get_shader = (Shader*(*)(void*)) GetExternMethod("UnityEngine.Material::get_shader");
        if (get_shader) return get_shader(this);
        static Method<Shader*> get_shader_m = GetClass().GetMethod("get_shader");
        return get_shader_m[this]();
    }
    void SetShader(Shader* shader){
        static auto set_shader = (void(*)(void*, Shader*)) GetExternMethod("UnityEngine.Material::set_shader");
        if (set_shader) {
            set_shader(this, shader);
        } else {
            static Method<void> set_shader_m = GetClass().GetMethod("set_shader");
            set_shader_m[this](shader);
        }
    }
    Color GetColor(){
        static auto get_color = (Color(*)(void*))GetExternMethod("UnityEngine.Material::get_color");
        if (get_color) return get_color(this);
        static Method<Color> get_color_m = GetClass().GetMethod("get_color");
        return get_color_m[this]();
    }
    void SetColor(Color color){
        static auto set_color = (void(*)(void*, Color))GetExternMethod("UnityEngine.Material::set_color");
        if (set_color) {
            set_color(this, color);
        } else {
            static Method<void> set_color_m = GetClass().GetMethod("set_color");
            set_color_m[this](color);
        }
    }
};
struct Renderer : Component{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Renderer").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Renderer");
        return mclass;
    }

    void SetEnabled(bool value) {
        static auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Renderer::set_enabled");
        if (set_enabled) {
            set_enabled(this, value);
        } else {
            static Method<void> set_enabled_m = GetClass().GetMethod("set_enabled");
            set_enabled_m[this](value);
        }
    }
    bool GetEnabled() {
        static auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Renderer::get_enabled");
        if (get_enabled) return get_enabled(this);
        static Method<bool> get_enabled_m = GetClass().GetMethod("get_enabled");
        return get_enabled_m[this]();
    }

    Material* GetMaterial(){
        static auto GetMaterial = (Material*(*)(void*)) GetExternMethod("UnityEngine.Renderer::get_material");
        if (GetMaterial) return GetMaterial(this);
        static Method<Material*> GetMaterialM = GetClass().GetMethod("get_material");
        return GetMaterialM[this]();
    }
    void SetMaterial(Material* material){
        static auto SetMaterial = (void(*)(void*, Material*)) GetExternMethod("UnityEngine.Renderer::set_material");
        if (SetMaterial) {
            SetMaterial(this, material);
        } else {
            static Method<void> SetMaterialM = GetClass().GetMethod("set_material");
            SetMaterialM[this](material);
        }
    }
    Array<Material*>* GetMaterialArray() {
        static auto GetMaterialArray = (Array<Material*>*(*)(void*))GetExternMethod("UnityEngine.Renderer::GetMaterialArray");
        if (GetMaterialArray) return GetMaterialArray(this);
        static Method<Array<Material*>*> GetMaterialArrayM = GetClass().GetMethod("GetMaterialArray");
        return GetMaterialArrayM[this]();
    }

};
struct SkinnedMeshRenderer : Renderer {
    static Class GetClass() {
        static Class mclass = Class("UnityEngine", "SkinnedMeshRenderer");
        return mclass;
    }
    static MonoType* GetMonoType() {
        return GetClass().GetMonoType();
    }

    Array<Transform*>* GetBones() {
        static auto get_bones = (Array<Transform*>*(*)(void*))GetExternMethod("UnityEngine.SkinnedMeshRenderer::get_bones");
        if (get_bones) return get_bones(this);
        static Method<Array<Transform*>*> get_bones_m = GetClass().GetMethod("get_bones");
        return get_bones_m[this]();
    }
    void SetBones(Array<Transform*>* bones) {
        static auto set_bones = (void(*)(void*, Array<Transform*>*))GetExternMethod("UnityEngine.SkinnedMeshRenderer::set_bones");
        if (set_bones) {
            set_bones(this, bones);
        } else {
            static Method<void> set_bones_m = GetClass().GetMethod("set_bones");
            set_bones_m[this](bones);
        }
    }
    Transform* GetRootBone() {
        static auto get_rootBone = (Transform*(*)(void*))GetExternMethod("UnityEngine.SkinnedMeshRenderer::get_rootBone");
        if (get_rootBone) return get_rootBone(this);
        static Method<Transform*> get_rootBone_m = GetClass().GetMethod("get_rootBone");
        return get_rootBone_m[this]();
    }
    bool GetUpdateWhenOffscreen() {
        static auto get_updateWhenOffscreen = (bool(*)(void*))GetExternMethod("UnityEngine.SkinnedMeshRenderer::get_updateWhenOffscreen");
        if (get_updateWhenOffscreen) return get_updateWhenOffscreen(this);
        static Method<bool> get_updateWhenOffscreen_m = GetClass().GetMethod("get_updateWhenOffscreen");
        return get_updateWhenOffscreen_m[this]();
    }
    void SetUpdateWhenOffscreen(bool value) {
        static auto set_updateWhenOffscreen = (void(*)(void*, bool))GetExternMethod("UnityEngine.SkinnedMeshRenderer::set_updateWhenOffscreen");
        if (set_updateWhenOffscreen) {
            set_updateWhenOffscreen(this, value);
        } else {
            static Method<void> set_updateWhenOffscreen_m = GetClass().GetMethod("set_updateWhenOffscreen");
            set_updateWhenOffscreen_m[this](value);
        }
    }
};
struct RectTransform : Transform{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "RectTransform").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "RectTransform");
        return mclass;
    }

    void SetSizeDelta(Vector2 sizeDelta){
        static auto set_sizeDelta = (void(*)(void*, Vector2))GetExternMethod("UnityEngine.RectTransform::set_sizeDelta");
        if (set_sizeDelta) {
            set_sizeDelta(this, sizeDelta);
        } else {
            static Method<void> set_sizeDelta_m = GetClass().GetMethod("set_sizeDelta");
            set_sizeDelta_m[this](sizeDelta);
        }
    }
    Vector2 GetSizeDelta(){
        static auto get_sizeDelta = (Vector2(*)(void*))GetExternMethod("UnityEngine.RectTransform::get_sizeDelta");
        if (get_sizeDelta) return get_sizeDelta(this);
        static Method<Vector2> get_sizeDelta_m = GetClass().GetMethod("get_sizeDelta");
        return get_sizeDelta_m[this]();
    }
};
struct Graphic : UIBehavior{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.UI", "Graphic").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.UI", "Graphic");
        return mclass;
    }
    Color GetColor(){
        static auto get_color = (Color(*)(void*))GetExternMethod("UnityEngine.UI.Graphic::get_color");
        if (get_color) return get_color(this);
        static Method<Color> get_color_m = GetClass().GetMethod("get_color");
        return get_color_m[this]();
    }
    void SetColor(Color color){
        static auto set_color = (void(*)(void*, Color))GetExternMethod("UnityEngine.UI.Graphic::set_color");
        if (set_color) {
            set_color(this, color);
        } else {
            static Method<void> set_color_m = GetClass().GetMethod("set_color");
            set_color_m[this](color);
        }
    }
    Canvas* GetCanvas(){
        static auto get_canvas = (Canvas*(*)(void*))GetExternMethod("UnityEngine.UI.Graphic::get_canvas");
        if (get_canvas) return get_canvas(this);
        static Method<Canvas*> get_canvas_m = GetClass().GetMethod("get_canvas");
        return get_canvas_m[this]();
    }
    Material* GetMaterial(){
        static auto get_material = (Material*(*)(void*))GetExternMethod("UnityEngine.UI.Graphic::get_material");
        if (get_material) return get_material(this);
        static Method<Material*> get_material_m = GetClass().GetMethod("get_material");
        return get_material_m[this]();
    }
    void SetMaterial(Material* material){
        static auto set_material = (void(*)(void*, Material*))GetExternMethod("UnityEngine.UI.Graphic::set_material");
        if (set_material) {
            set_material(this, material);
        } else {
            static Method<void> set_material_m = GetClass().GetMethod("set_material");
            set_material_m[this](material);
        }
    }
    RectTransform* GetRectTransform() {
        static auto get_rectTransform = (RectTransform*(*)(void*))GetExternMethod("UnityEngine.UI.Graphic::get_rectTransform");
        if (get_rectTransform) return get_rectTransform(this);
        static Method<RectTransform*> get_rectTransform_m = GetClass().GetMethod("get_rectTransform");
        return get_rectTransform_m[this]();
    }
};
struct MaskableGraphic : Graphic{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.UI", "MaskableGraphic").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.UI", "MaskableGraphic");
        return mclass;
    }
};
struct Font : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Font").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Font");
        return mclass;
    }
};
struct Text : MaskableGraphic{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.UI", "Text").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.UI", "Text");
        return mclass;
    }
    TextAnchor GetAlignment(){
        static auto get_alignment = (TextAnchor(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_alignment");
        if (get_alignment) return get_alignment(this);
        static Method<TextAnchor> get_alignment_m = GetClass().GetMethod("get_alignment");
        return get_alignment_m[this]();
    }
    void SetAlignment(TextAnchor alignment){
        static auto set_alignment = (void(*)(void*, TextAnchor))GetExternMethod("UnityEngine.UI.Text::set_alignment");
        if (set_alignment) {
            set_alignment(this, alignment);
        } else {
            static Method<TextAnchor> set_alignment_m = GetClass().GetMethod("set_alignment");
            set_alignment_m[this](alignment);
        }
    }
    Font* GetFont(){
        static auto get_font = (Font*(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_font");
        if (get_font) return get_font(this);
        static Method<Font*> get_font_m = GetClass().GetMethod("get_font");
        return get_font_m[this]();
    }
    void SetFont(Font* font){
        static auto set_font = (void(*)(void*, Font*))GetExternMethod("UnityEngine.UI.Text::set_font");
        if (set_font) {
            set_font(this, font);
        } else {
            static Method<void> set_font_m = GetClass().GetMethod("set_font");
            set_font_m[this](font);
        }
    }
    int GetFontSize(){
        static auto get_fontSize = (int(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_fontSize");
        if (get_fontSize) return get_fontSize(this);
        static Method<int> get_fontSize_m = GetClass().GetMethod("get_fontSize");
        return get_fontSize_m[this]();
    }
    void SetFontSize(int size){
        static auto set_fontSize = (void(*)(void*, int))GetExternMethod("UnityEngine.UI.Text::set_fontSize");
        if (set_fontSize) {
            set_fontSize(this, size);
        } else {
            static Method<void> set_fontSize_m = GetClass().GetMethod("set_fontSize");
            set_fontSize_m[this](size);
        }
    }
    std::string GetText(){
        static auto get_text = (String*(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_text");
        if (get_text) return get_text(this)->str();
        static Method<String*> get_text_m = GetClass().GetMethod("get_text");
        return get_text_m[this]()->str();
    }
    void SetText(std::string text){
        static auto set_text = (void(*)(void*, String*))GetExternMethod("UnityEngine.UI.Text::set_text");
        if (set_text) {
            set_text(this, CreateMonoString(text));
        } else {
            static Method<void> set_text_m = GetClass().GetMethod("set_text");
            set_text_m[this](CreateMonoString(text));
        }
    }
    bool GetTextResizeForBestFit(){
        static auto get_resizeTextForBestFit = (bool(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_resizeTextForBestFit");
        if (get_resizeTextForBestFit) return get_resizeTextForBestFit(this);
        static Method<bool> get_resizeTextForBestFit_m = GetClass().GetMethod("get_resizeTextForBestFit");
        return get_resizeTextForBestFit_m[this]();
    }
    void SetTextResizeForBestFit(bool val){
        static auto set_resizeTextForBestFit = (void(*)(void*, bool))GetExternMethod("UnityEngine.UI.Text::set_resizeTextForBestFit");
        if (set_resizeTextForBestFit) {
            set_resizeTextForBestFit(this, val);
        } else {
            static Method<void> set_resizeTextForBestFit_m = GetClass().GetMethod("set_resizeTextForBestFit");
            set_resizeTextForBestFit_m[this](val);
        }
    }

    int GetResizeTextMaxSize(){
        static auto get_resizeTextMaxSize = (int(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_resizeTextMaxSize");
        if (get_resizeTextMaxSize) return get_resizeTextMaxSize(this);
        static Method<int> get_resizeTextMaxSize_m = GetClass().GetMethod("get_resizeTextMaxSize");
        return get_resizeTextMaxSize_m[this]();
    }
    void SetResizeTextMaxSize(int val){
        static auto set_resizeTextMaxSize = (void(*)(void*, int))GetExternMethod("UnityEngine.UI.Text::set_resizeTextMaxSize");
        if (set_resizeTextMaxSize) {
            set_resizeTextMaxSize(this, val);
        } else {
            static Method<void> set_resizeTextMaxSize_m = GetClass().GetMethod("set_resizeTextMaxSize");
            set_resizeTextMaxSize_m[this](val);
        }
    }
    int GetResizeTextMinSize(){
        static auto get_resizeTextMinSize = (int(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_resizeTextMinSize");
        if (get_resizeTextMinSize) return get_resizeTextMinSize(this);
        static Method<int> get_resizeTextMinSize_m = GetClass().GetMethod("get_resizeTextMinSize");
        return get_resizeTextMinSize_m[this]();
    }
    void SetResizeTextMinSize(int val){
        static auto set_resizeTextMinSize = (void(*)(void*, int))GetExternMethod("UnityEngine.UI.Text::set_resizeTextMinSize");
        if (set_resizeTextMinSize) {
            set_resizeTextMinSize(this, val);
        } else {
            static Method<void> set_resizeTextMinSize_m = GetClass().GetMethod("set_resizeTextMinSize");
            set_resizeTextMinSize_m[this](val);
        }
    }
    bool GetSupportRichText() {
        static auto get_supportRichText = (bool(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_supportRichText");
        if (get_supportRichText) return get_supportRichText(this);
        static Method<bool> get_supportRichText_m = GetClass().GetMethod("get_supportRichText");
        return get_supportRichText_m[this]();
    }
    void SetSupportRichText(bool val) {
        static auto set_supportRichText = (void(*)(void*, bool))GetExternMethod("UnityEngine.UI.Text::set_supportRichText");
        if (set_supportRichText) {
            set_supportRichText(this, val);
        } else {
            static Method<void> set_supportRichText_m = GetClass().GetMethod("set_supportRichText");
            set_supportRichText_m[this](val);
        }
    }

    FontStyle GetFontStyle() {
        static auto get_fontStyle = (FontStyle(*)(void*))GetExternMethod("UnityEngine.UI.Text::get_fontStyle");
        if (get_fontStyle) return get_fontStyle(this);
        static Method<FontStyle> get_fontStyle_m = GetClass().GetMethod("get_fontStyle");
        return get_fontStyle_m[this]();
    }
    void SetFontStyle(FontStyle val) {
        static auto set_fontStyle = (void(*)(void*, FontStyle))GetExternMethod("UnityEngine.UI.Text::set_fontStyle");
        if (set_fontStyle) {
            set_fontStyle(this, val);
        } else {
            static Method<void> set_fontStyle_m = GetClass().GetMethod("set_fontStyle");
            set_fontStyle_m[this](val);
        }
    }
};
struct LineRenderer : Renderer{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "LineRenderer").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "LineRenderer");
        return mclass;
    }

    void SetUseWorldScape(bool val){
        static auto set_useWorldSpace = (void (*)(void*, bool))GetExternMethod("UnityEngine.LineRenderer::set_useWorldSpace");
        if (set_useWorldSpace) {
            set_useWorldSpace(this, val);
        } else {
            static Method<void> set_useWorldSpace_m = GetClass().GetMethod("set_useWorldSpace");
            set_useWorldSpace_m[this](val);
        }
    }
    bool GetUseWorldScape(){
        static auto get_useWorldSpace = (bool (*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_useWorldSpace");
        if (get_useWorldSpace) return get_useWorldSpace(this);
        static Method<bool> get_useWorldSpace_m = GetClass().GetMethod("get_useWorldSpace");
        return get_useWorldSpace_m[this]();
    }
    void SetStartWidth(float val){
        static auto set_startWidth = (void (*)(void*, float))GetExternMethod("UnityEngine.LineRenderer::set_startWidth");
        if (set_startWidth) {
            set_startWidth(this, val);
        } else {
            static Method<void> set_startWidth_m = GetClass().GetMethod("set_startWidth");
            set_startWidth_m[this](val);
        }
    }
    float GetStartWidth(){
        static auto get_startWidth = (float (*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_startWidth");
        if (get_startWidth) return get_startWidth(this);
        static Method<float> get_startWidth_m = GetClass().GetMethod("get_startWidth");
        return get_startWidth_m[this]();
    }
    void SetEndWidth(float val){
        static auto set_endWidth = (void (*)(void*, float))GetExternMethod("UnityEngine.LineRenderer::set_endWidth");
        if (set_endWidth) {
            set_endWidth(this, val);
        } else {
            static Method<void> set_endWidth_m = GetClass().GetMethod("set_endWidth");
            set_endWidth_m[this](val);
        }
    }
    void SetStartColor(Color val){
        static auto set_startColor = (void(*)(void*, Color))GetExternMethod("UnityEngine.LineRenderer::set_startColor");
        if (set_startColor) {
            set_startColor(this, val);
        } else {
            static Method<void> set_startColor_m = GetClass().GetMethod("set_startColor");
            set_startColor_m[this](val);
        }
    }
    Color GetStartColor(){
        static auto get_startColor = (Color(*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_startColor");
        if (get_startColor) return get_startColor(this);
        static Method<Color> get_startColor_m = GetClass().GetMethod("get_startColor");
        return get_startColor_m[this]();
    }
    void SetEndColor(Color val){
        static auto set_endColor = (void(*)(void*, Color))GetExternMethod("UnityEngine.LineRenderer::set_endColor");
        if (set_endColor) {
            set_endColor(this, val);
        } else {
            static Method<void> set_endColor_m = GetClass().GetMethod("set_endColor");
            set_endColor_m[this](val);
        }
    }
    Color GetEndColor(){
        static auto get_endColor = (Color(*)(void*))GetExternMethod("UnityEngine.LineRenderer::get_endColor");
        if (get_endColor) return get_endColor(this);
        static Method<Color> get_endColor_m = GetClass().GetMethod("get_endColor");
        return get_endColor_m[this]();
    }
    void SetPosition(int index, Vector3 position){
        static auto SetPosition = (void(*)(void*, int, Vector3))GetExternMethod("UnityEngine.LineRenderer::SetPosition");
        if (SetPosition) {
            SetPosition(this, index, position);
        } else {
            static Method<void> SetPositionM = GetClass().GetMethod("SetPosition");
            SetPositionM[this](index, position);
        }
    }
    void SetColorGradient(Gradient* gradient) {
        static auto setColorGradient = (void(*)(void*, Gradient*))GetExternMethod("UnityEngine.LineRenderer::SetColorGradient");
        if (setColorGradient) {
            setColorGradient(this, gradient);
        } else {
            static Method<void> SetColorGradientM = GetClass().GetMethod("SetColorGradient");
            SetColorGradientM[this](gradient);
        }
    }
    void SetPositionCount(int positionCount) {
        static auto set_positionCount = (void(*)(void*, int))GetExternMethod("UnityEngine.LineRenderer::set_positionCount");
        if (set_positionCount) {
            set_positionCount(this, positionCount);
        } else {
            static Method<void> set_positionCount_m = GetClass().GetMethod("set_positionCount");
            set_positionCount_m[this](positionCount);
        }
    }
};

struct Rigidbody : Component{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Rigidbody").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Rigidbody");
        return mclass;
    }
    void SetUseGravity(bool useGravity){
        static auto set_useGravity = (void(*)(void*, bool))GetExternMethod("UnityEngine.Rigidbody::set_useGravity");
        if (set_useGravity) {
            set_useGravity(this, useGravity);
        } else {
            static Method<void> set_useGravity_m = GetClass().GetMethod("set_useGravity");
            set_useGravity_m[this](useGravity);
        }
    }
    bool GetUseGravity(){
        static auto get_useGravity = (bool(*)(void*))GetExternMethod("UnityEngine.Rigidbody::get_useGravity");
        if (get_useGravity) return get_useGravity(this);
        static Method<bool> get_useGravity_m = GetClass().GetMethod("get_useGravity");
        return get_useGravity_m[this]();
    }
    void SetVelocity(Vector3 velocity){
        static auto set_velocity = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.Rigidbody::set_velocity");
        if (set_velocity) {
            set_velocity(this, velocity);
        } else {
            static Method<void> set_velocity_m = GetClass().GetMethod("set_velocity");
            set_velocity_m[this](velocity);
        }
    }
    Vector3 GetVelocity(){
        static auto get_velocity = (Vector3(*)(void*))GetExternMethod("UnityEngine.Rigidbody::get_velocity");
        if (get_velocity) return get_velocity(this);
        static Method<Vector3> get_velocity_m = GetClass().GetMethod("get_velocity");
        return get_velocity_m[this]();
    }
    void AddForce(Vector3 force, ForceMode mode){
        static auto AddForce = (void(*)(void*, Vector3, ForceMode))GetExternMethod("UnityEngine.Rigidbody::AddForce");
        if (AddForce) {
            AddForce(this, force, mode);
        } else {
            static Method<void> AddForceM = GetClass().GetMethod("AddForce", {"force", "mode"});
            AddForceM[this](force, mode);
        }
    }
    void SetIsKinematic(bool kinematic) {
        static auto set_isKinematic = (void(*)(void*, bool))GetExternMethod("UnityEngine.Rigidbody::set_isKinematic");
        if (set_isKinematic) {
            set_isKinematic(this, kinematic);
        } else {
            static Method<void> set_isKinematic_m = GetClass().GetMethod("set_isKinematic");
            set_isKinematic_m[this](kinematic);
        }
    }
    bool GetIsKinematic() {
        static auto get_isKinematic = (bool(*)(void*))GetExternMethod("UnityEngine.Rigidbody::get_isKinematic");
        if (get_isKinematic) return get_isKinematic(this);
        static Method<bool> get_isKinematic_m = GetClass().GetMethod("get_isKinematic");
        return get_isKinematic_m[this]();
    }
};
struct Time{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Time").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Time");
        return mclass;
    }
    static float GetDeltaTime(){
        static auto get_deltaTime = (float(*)())GetExternMethod("UnityEngine.Time::get_deltaTime");
        if (get_deltaTime) return get_deltaTime();
        static Method<float> get_deltaTime_m = GetClass().GetMethod("get_deltaTime");
        return get_deltaTime_m();
    }
    static float GetTimeScale(){
        static auto get_timeScale = (float(*)())GetExternMethod("UnityEngine.Time::get_timeScale");
        if (get_timeScale) return get_timeScale();
        static Method<float> get_timeScale_m = GetClass().GetMethod("get_timeScale");
        return get_timeScale_m();
    }
    static void SetTimeScale(float scale){
        static auto set_timeScale = (void(*)(float))GetExternMethod("UnityEngine.Time::set_timeScale");
        if (set_timeScale) {
            set_timeScale(scale);
        } else {
            static Method<void> set_timeScale_m = GetClass().GetMethod("set_timeScale");
            set_timeScale_m(scale);
        }
    }
    static int GetFrameCount(){
        static auto get_frameCount = (int(*)())GetExternMethod("UnityEngine.Time::get_frameCount");
        if (get_frameCount) return get_frameCount();
        static Method<int> get_frameCount_m = GetClass().GetMethod("get_frameCount");
        return get_frameCount_m();
    }
    static float GetTime() {
        static auto get_time = (float(*)())GetExternMethod("UnityEngine.Time::get_time");
        if (get_time) return get_time();
        static Method<float> get_time_m = GetClass().GetMethod("get_time");
        return get_time_m();
    }
    static float GetUnscaledDeltaTime() {
        static auto get_time = (float(*)())GetExternMethod("UnityEngine.Time::get_unscaledDeltaTime");
        if (get_time) return get_time();
        static Method<float> get_time_m = GetClass().GetMethod("get_unscaledDeltaTime");
        return get_time_m();
    }

    static float GetFixedDeltaTime() {
        static auto get_fixedDeltaTime = (float(*)())GetExternMethod("UnityEngine.Time::get_fixedDeltaTime");
        if (get_fixedDeltaTime) return get_fixedDeltaTime();
        static Method<float> get_fixedDeltaTime_m = GetClass().GetMethod("get_fixedDeltaTime");
        return get_fixedDeltaTime_m();
    }

    static void SetFixedDeltaTime(float value) {
        static auto set_fixedDeltaTime = (void(*)(float))GetExternMethod("UnityEngine.Time::set_fixedDeltaTime");
        if (set_fixedDeltaTime) {
            set_fixedDeltaTime(value);
        } else {
            static Method<void> set_fixedDeltaTime_m = GetClass().GetMethod("set_fixedDeltaTime");
            set_fixedDeltaTime_m(value);
        }
    }
};
struct Collider : Component{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Collider").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Collider");
        return mclass;
    }

    bool GetIsTrigger(){
        static auto get_isTrigger = (bool(*)(void*))GetExternMethod("UnityEngine.Collider::get_isTrigger");
        if (get_isTrigger) return get_isTrigger(this);
        static Method<bool> get_isTrigger_m = GetClass().GetMethod("get_isTrigger");
        return get_isTrigger_m[this]();
    }
    void SetIsTrigger(bool val){
        static auto set_isTrigger = (void(*)(void*, bool))GetExternMethod("UnityEngine.Collider::set_isTrigger");
        if (set_isTrigger) {
            set_isTrigger(this, val);
        } else {
            static Method<void> set_isTrigger_m = GetClass().GetMethod("set_isTrigger");
            set_isTrigger_m[this](val);
        }
    }
    Rigidbody* GetAttachedRigidbody(){
        static auto get_attachedRigidbody = (Rigidbody*(*)(void*))GetExternMethod("UnityEngine.Collider::get_attachedRigidbody");
        if (get_attachedRigidbody) return get_attachedRigidbody(this);
        static Method<Rigidbody*> get_attachedRigidbody_m = GetClass().GetMethod("get_attachedRigidbody");
        return get_attachedRigidbody_m[this]();
    }
    void SetEnabled(bool val){
        static auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Collider::set_enabled");
        if (set_enabled) {
            set_enabled(this, val);
        } else {
            static Method<void> set_enabled_m = GetClass().GetMethod("set_enabled");
            set_enabled_m[this](val);
        }
    }
    bool GetEnabled(){
        static auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Collider::get_enabled");
        if (get_enabled) return get_enabled(this);
        static Method<bool> get_enabled_m = GetClass().GetMethod("get_enabled");
        return get_enabled_m[this]();
    }
};
struct SphereCollider : Collider{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "SphereCollider").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "SphereCollider");
        return mclass;
    }
    Vector3 GetCenter(){
        static auto get_center = (Vector3(*)(void*))GetExternMethod("UnityEngine.SphereCollider::get_center");
        if (get_center) return get_center(this);
        static Method<Vector3> get_center_m = GetClass().GetMethod("get_center");
        return get_center_m[this]();
    }
    float GetRadius(){
        static auto get_radius = (float(*)(void*)) GetExternMethod("UnityEngine.SphereCollider::get_radius");
        if (get_radius) return get_radius(this);
        static Method<float> get_radius_m = GetClass().GetMethod("get_radius");
        return get_radius_m[this]();
    }
    void SetRadius(float val){
        static auto set_radius = (void(*)(void*, float)) GetExternMethod("UnityEngine.SphereCollider::set_radius");
        if (set_radius) {
            set_radius(this, val);
        } else {
            static Method<void> set_radius_m = GetClass().GetMethod("set_radius");
            set_radius_m[this](val);
        }
    }
};
struct BoxCollider : Collider{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "BoxCollider").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "BoxCollider");
        return mclass;
    }
    Vector3 GetCenter(){
        static auto get_center = (Vector3(*)(void*))GetExternMethod("UnityEngine.BoxCollider::get_center");
        if (get_center) return get_center(this);
        static Method<Vector3> get_center_m = GetClass().GetMethod("get_center");
        return get_center_m[this]();
    }
    Vector3 GetSize(){
        static auto get_size = (Vector3(*)(void*))GetExternMethod("UnityEngine.BoxCollider::get_size");
        if (get_size) return get_size(this);
        static Method<Vector3> get_size_m = GetClass().GetMethod("get_size");
        return get_size_m[this]();
    }
    void SetSize(Vector3 val){
        static auto set_size = (void(*)(void*, Vector3))GetExternMethod("UnityEngine.BoxCollider::set_size");
        if (set_size) {
            set_size(this, val);
        } else {
            static Method<void> set_size_m = GetClass().GetMethod("set_size");
            set_size_m[this](val);
        }
    }
};
struct MeshCollider : Collider{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "MeshCollider").GetMonoType();
        return type;
    }
    static Class GetClass() {
        static Class mclass = Class("UnityEngine", "MeshCollider");
        return mclass;
    }
};
struct MeshRenderer : Renderer{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "MeshRenderer").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "MeshRenderer");
        return mclass;
    }
};
struct Resources{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Resources").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Resources");
        return mclass;
    }
    static Object* Load(std::string path){
        static auto Load = (Object*(*)(String*))GetExternMethod("UnityEngine.Resources::Load");
        if (Load) return Load(CreateMonoString(path));
        static Method<Object*> LoadM = GetClass().GetMethod("Load", 1);
        return LoadM(CreateMonoString(path));
    }
    static Object* Load(std::string path, MonoType* systemTypeInstance){
        static auto Load = (Object*(*)(String*, MonoType*))GetExternMethod("UnityEngine.Resources::Load");
        if (Load) return Load(CreateMonoString(path), systemTypeInstance);
        static Method<Object*> LoadM = GetClass().GetMethod("Load", 2);
        return LoadM(CreateMonoString(path), systemTypeInstance);
    }
    static Array<Object*>* LoadAll(std::string path, MonoType* systemTypeInstance){
        static auto LoadAll = (Array<Object*>*(*)(String*, MonoType*))GetExternMethod("UnityEngine.Resources::LoadAll");
        if (LoadAll) return LoadAll(CreateMonoString(path), systemTypeInstance);
        static Method<Array<Object*>*> LoadAllM = GetClass().GetMethod("LoadAll", 2);
        return LoadAllM(CreateMonoString(path), systemTypeInstance);
    }
    static Array<Object*>* FindObjectsOfTypeAll(MonoType* type) {
        static auto FindObjectsOfTypeAll = (Array<Object*>*(*)(MonoType*))GetExternMethod("UnityEngine.Resources::FindObjectsOfTypeAll");
        if (FindObjectsOfTypeAll) return FindObjectsOfTypeAll(type);
        static Method<Array<Object*>*> FindObjectsOfTypeAllM = GetClass().GetMethod("FindObjectsOfTypeAll", 1);
        return FindObjectsOfTypeAllM(type);
    }
    static Object* GetBuiltinResource(MonoType* type, std::string path){
        static auto GetBuiltinResource = (Object *(*)(MonoType*, String*))GetExternMethod("UnityEngine.Resources::GetBuiltinResource");
        if (GetBuiltinResource) return GetBuiltinResource(type, CreateMonoString(path));
        static Method<Object*> GetBuiltinResourceM = GetClass().GetMethod("GetBuiltinResource");
        return GetBuiltinResourceM(type, CreateMonoString(path));
    }
};
struct AssetBundle : NamedObject{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "AssetBundle").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "AssetBundle");
        return mclass;
    }
    static AssetBundle* LoadFromFile(std::string path){
        static auto LoadFromFile = (AssetBundle*(*)(String*))GetExternMethod("UnityEngine.AssetBundle::LoadFromFile");
        if (LoadFromFile) return LoadFromFile(CreateMonoString(path));
        static Method<AssetBundle*> LoadFromFileM = GetClass().GetMethod("LoadFromFile", 1);
        return LoadFromFileM(CreateMonoString(path));
    }

    static AssetBundle* LoadFromMemory(Array<uint8_t>* binary) {
        static auto LoadFromMemory = (AssetBundle*(*)(Array<uint8_t>*))GetExternMethod("UnityEngine.AssetBundle::LoadFromMemory");
        if (LoadFromMemory) return LoadFromMemory(binary);
        static Method<AssetBundle*> LoadFromMemoryM = GetClass().GetMethod("LoadFromMemory", 1);
        return LoadFromMemoryM(binary);
    }

    void Unload(bool unloadAllLoadedObjects){
        static auto Unload = (void (*)(AssetBundle *, bool))GetExternMethod("UnityEngine.AssetBundle::Unload");
        if (Unload) {
            Unload(this, unloadAllLoadedObjects);
        } else {
            static Method<void> UnloadM = GetClass().GetMethod("Unload");
            UnloadM[this](unloadAllLoadedObjects);
        }
    }

    Object* LoadAsset(std::string name){
        static auto LoadAsset = (Object*(*)(void*, String*))GetExternMethod("UnityEngine.AssetBundle::LoadAsset");
        if (LoadAsset) return LoadAsset(this, CreateMonoString(name));
        static Method<Object*> LoadAssetM = GetClass().GetMethod("LoadAsset", 1);
        return LoadAssetM[this](CreateMonoString(name));
    }

    Object* LoadAsset(std::string name, MonoType* type){
        static auto LoadAsset = (Object*(*)(void*, String*, MonoType*))GetExternMethod("UnityEngine.AssetBundle::LoadAsset");
        if (LoadAsset) return LoadAsset(this, CreateMonoString(name), type);
        static Method<Object*> LoadAssetM = GetClass().GetMethod("LoadAsset", 2);
        return LoadAssetM[this](CreateMonoString(name), type);
    }

    Array<Object*>* LoadAllAssets() {
        static auto LoadAllAssets = (Array<Object*>*(*)(void*))GetExternMethod("UnityEngine.AssetBundle::LoadAllAssets");
        if (LoadAllAssets) return LoadAllAssets(this);
        static Method<Array<Object*>*> LoadAllAssetsM = GetClass().GetMethod("LoadAllAssets");
        return LoadAllAssetsM[this]();
    }

    Array<Object*>* LoadAllAssets(MonoType* type) {
        static auto LoadAllAssets = (Array<Object*>*(*)(void*, MonoType*))GetExternMethod("UnityEngine.AssetBundle::LoadAllAssets");
        if (LoadAllAssets) return LoadAllAssets(this, type);
        static Method<Array<Object*>*> LoadAllAssetsM = GetClass().GetMethod("LoadAllAssets", 1);
        return LoadAllAssetsM[this](type);
    }

    Array<String*>* GetAllAssetNames() {
        static auto GetAllAssetNames = (Array<String*>*(*)(void*))GetExternMethod("UnityEngine.AssetBundle::GetAllAssetNames");
        if (GetAllAssetNames) return GetAllAssetNames(this);
        static Method<Array<String*>*> GetAllAssetNamesM = GetClass().GetMethod("GetAllAssetNames");
        return GetAllAssetNamesM[this]();
    }

    std::string GetName() {
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }

    void SetName(std::string name) {
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(name));
        }
    }

    bool GetIsStreamedSceneAssetBundle() {
        static auto get_isStreamedSceneAssetBundle = (bool(*)(void*))GetExternMethod("UnityEngine.AssetBundle::get_isStreamedSceneAssetBundle");
        if (get_isStreamedSceneAssetBundle) return get_isStreamedSceneAssetBundle(this);
        static Method<bool> get_isStreamedSceneAssetBundle_m = GetClass().GetMethod("get_isStreamedSceneAssetBundle");
        return get_isStreamedSceneAssetBundle_m[this]();
    }

    static void UnloadAllAssetBundles(bool unloadAllObjects) {
        static auto UnloadAllAssetBundles = (void(*)(bool))GetExternMethod("UnityEngine.AssetBundle::UnloadAllAssetBundles");
        if (UnloadAllAssetBundles) {
            UnloadAllAssetBundles(unloadAllObjects);
        } else {
            static Method<void> UnloadAllAssetBundlesM = GetClass().GetMethod("UnloadAllAssetBundles", 1);
            UnloadAllAssetBundlesM(unloadAllObjects);
        }
    }
};
struct Physics{
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Physics").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Physics");
        return mclass;
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo){
        static auto Raycast = (bool(*)(Vector3, Vector3, RaycastHit*))GetExternMethod("UnityEngine.Physics::Raycast");
        if (Raycast) return Raycast(origin, direction, &hitInfo);
        static Method<bool> RaycastM = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo"});
        return RaycastM(origin, direction, &hitInfo);
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo, float maxDistance){
        static auto Raycast = (bool(*)(Vector3, Vector3, RaycastHit*, float))GetExternMethod("UnityEngine.Physics::Raycast");
        if (Raycast) return Raycast(origin, direction, &hitInfo, maxDistance);
        static Method<bool> RaycastM = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo", "maxDistance"});
        return RaycastM(origin, direction, &hitInfo, maxDistance);
    }
    static bool Raycast(Vector3 origin, Vector3 direction, RaycastHit& hitInfo, float maxDistance, int layerMask){
        static auto Raycast = (bool(*)(Vector3, Vector3, RaycastHit*, float, int))GetExternMethod("UnityEngine.Physics::Raycast");
        if (Raycast) return Raycast(origin, direction, &hitInfo, maxDistance, layerMask);
        static Method<bool> RaycastM = GetClass().GetMethod("Raycast", {"origin","direction","hitInfo", "maxDistance", "layerMask"});
        return RaycastM(origin, direction, &hitInfo, maxDistance, layerMask);
    }

    static void SetGravity(Vector3 gravity){
        static auto set_gravity = (void(*)(Vector3))GetExternMethod("UnityEngine.Physics::set_gravity");
        if (set_gravity) {
            set_gravity(gravity);
        } else {
            static Method<void> set_gravity_m = GetClass().GetMethod("set_gravity");
            set_gravity_m(gravity);
        }
    }
    static Vector3 GetGravity(){
        static auto get_gravity = (Vector3(*)())GetExternMethod("UnityEngine.Physics::get_gravity");
        if (get_gravity) return get_gravity();
        static Method<Vector3> get_gravity_m = GetClass().GetMethod("get_gravity");
        return get_gravity_m();
    }
};

struct Texture2D : NamedObject {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Texture2D").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Texture2D");
        return mclass;
    }

    static Texture2D* Create(int width, int height) {
        static auto Create = (Texture2D*(*)(int, int))GetExternMethod("UnityEngine.Texture2D::Create");
        if (Create) return Create(width, height);
        static Method<Texture2D*> CreateM = GetClass().GetMethod("Create", 2);
        return CreateM(width, height);
    }

    static Texture2D* Create(int width, int height, TextureFormat format) {
        static auto Create = (Texture2D*(*)(int, int, TextureFormat))GetExternMethod("UnityEngine.Texture2D::Create");
        if (Create) return Create(width, height, format);
        static Method<Texture2D*> CreateM = GetClass().GetMethod("Create", 3);
        return CreateM(width, height, format);
    }
};

struct LightmapData : Object {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "LightmapData").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "LightmapData");
        return mclass;
    }

    Texture2D* GetLightmapColor() {
        static auto get_lightmapColor = (Texture2D*(*)(void*))GetExternMethod("UnityEngine.LightmapData::get_lightmapColor");
        if (get_lightmapColor) return get_lightmapColor(this);
        static Method<Texture2D*> get_lightmapColor_m = GetClass().GetMethod("get_lightmapColor");
        return get_lightmapColor_m[this]();
    }

    void SetLightmapColor(Texture2D* texture) {
        static auto set_lightmapColor = (void(*)(void*, Texture2D*))GetExternMethod("UnityEngine.LightmapData::set_lightmapColor");
        if (set_lightmapColor) {
            set_lightmapColor(this, texture);
        } else {
            static Method<void> set_lightmapColor_m = GetClass().GetMethod("set_lightmapColor");
            set_lightmapColor_m[this](texture);
        }
    }

    Texture2D* GetLightmapDir() {
        static auto get_lightmapDir = (Texture2D*(*)(void*))GetExternMethod("UnityEngine.LightmapData::get_lightmapDir");
        if (get_lightmapDir) return get_lightmapDir(this);
        static Method<Texture2D*> get_lightmapDir_m = GetClass().GetMethod("get_lightmapDir");
        return get_lightmapDir_m[this]();
    }

    void SetLightmapDir(Texture2D* texture) {
        static auto set_lightmapDir = (void(*)(void*, Texture2D*))GetExternMethod("UnityEngine.LightmapData::set_lightmapDir");
        if (set_lightmapDir) {
            set_lightmapDir(this, texture);
        } else {
            static Method<void> set_lightmapDir_m = GetClass().GetMethod("set_lightmapDir");
            set_lightmapDir_m[this](texture);
        }
    }

    Texture2D* GetShadowMask() {
        static auto get_shadowMask = (Texture2D*(*)(void*))GetExternMethod("UnityEngine.LightmapData::get_shadowMask");
        if (get_shadowMask) return get_shadowMask(this);
        static Method<Texture2D*> get_shadowMask_m = GetClass().GetMethod("get_shadowMask");
        return get_shadowMask_m[this]();
    }

    void SetShadowMask(Texture2D* texture) {
        static auto set_shadowMask = (void(*)(void*, Texture2D*))GetExternMethod("UnityEngine.LightmapData::set_shadowMask");
        if (set_shadowMask) {
            set_shadowMask(this, texture);
        } else {
            static Method<void> set_shadowMask_m = GetClass().GetMethod("set_shadowMask");
            set_shadowMask_m[this](texture);
        }
    }
};

struct LightmapSettings {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "LightmapSettings").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "LightmapSettings");
        return mclass;
    }

    static Array<LightmapData*>* GetLightmaps() {
        static auto get_lightmaps = (Array<LightmapData*>*(*)())GetExternMethod("UnityEngine.LightmapSettings::get_lightmaps");
        if (get_lightmaps) return get_lightmaps();
        static Method<Array<LightmapData*>*> get_lightmaps_m = GetClass().GetMethod("get_lightmaps");
        return get_lightmaps_m();
    }

    static void SetLightmaps(Array<LightmapData*>* lightmaps) {
        static auto set_lightmaps = (void(*)(Array<LightmapData*>*))GetExternMethod("UnityEngine.LightmapSettings::set_lightmaps");
        if (set_lightmaps) {
            set_lightmaps(lightmaps);
        } else {
            static Method<void> set_lightmaps_m = GetClass().GetMethod("set_lightmaps");
            set_lightmaps_m(lightmaps);
        }
    }
};

struct LayerMask{
    int m_Mask;

    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "LayerMask").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "LayerMask");
        return mclass;
    }

    int GetValue() {
        return m_Mask;
    };
    static String* LayerToName(int layer){
        static auto layerToName = (String*(*)(int))GetExternMethod("UnityEngine.LayerMask::LayerToName");
        if (layerToName) return layerToName(layer);
        static Method<String*> layerToNameM = GetClass().GetMethod("LayerToName");
        return layerToNameM(layer);
    };
    static int NameToLayer(BNM::Structures::Mono::String * name) {
        static auto nameToLayer = (int(*)(String*))GetExternMethod("UnityEngine.LayerMask::NameToLayer");
        if (nameToLayer) return nameToLayer(name);
        static Method<int> nameToLayerM = GetClass().GetMethod("NameToLayer");
        return nameToLayerM(name);
    }
};

struct Skybox : Behaviour {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Skybox").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Skybox");
        return mclass;
    }

    Material* GetMaterial() {
        static auto get_material = (Material*(*)(void*))GetExternMethod("UnityEngine.Skybox::get_material");
        if (get_material) return get_material(this);
        static Method<Material*> get_material_m = GetClass().GetMethod("get_material");
        return get_material_m[this]();
    }

    void SetMaterial(Material* material) {
        static auto set_material = (void(*)(void*, Material*))GetExternMethod("UnityEngine.Skybox::set_material");
        if (set_material) {
            set_material(this, material);
        } else {
            static Method<void> set_material_m = GetClass().GetMethod("set_material");
            set_material_m[this](material);
        }
    }
};

struct Sprite : NamedObject {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Sprite").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Sprite");
        return mclass;
    }

    static Sprite* Create(Texture2D* texture) {
        static auto Create = (Sprite*(*)(Texture2D*))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 1);
        return CreateM(texture);
    }

    static Sprite* Create(Texture2D* texture, Rect rect, Vector2 pivot) {
        static auto Create = (Sprite*(*)(Texture2D*, Rect, Vector2))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture, rect, pivot);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 3);
        return CreateM(texture, rect, pivot);
    }

    static Sprite* Create(Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit) {
        static auto Create = (Sprite*(*)(Texture2D*, Rect, Vector2, float))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture, rect, pivot, pixelsPerUnit);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 4);
        return CreateM(texture, rect, pivot, pixelsPerUnit);
    }

    static Sprite* Create(Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude) {
        static auto Create = (Sprite*(*)(Texture2D*, Rect, Vector2, float, uint))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture, rect, pivot, pixelsPerUnit, extrude);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 5);
        return CreateM(texture, rect, pivot, pixelsPerUnit, extrude);
    }

    static Sprite* Create(Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType) {
        static auto Create = (Sprite*(*)(Texture2D*, Rect, Vector2, float, uint, SpriteMeshType))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture, rect, pivot, pixelsPerUnit, extrude, meshType);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 6);
        return CreateM(texture, rect, pivot, pixelsPerUnit, extrude, meshType);
    }

    static Sprite* Create(Texture2D* texture, Rect rect, Vector2 pivot, float pixelsPerUnit, uint extrude, SpriteMeshType meshType, Vector4 border) {
        static auto Create = (Sprite*(*)(Texture2D*, Rect, Vector2, float, uint, SpriteMeshType, Vector4))GetExternMethod("UnityEngine.Sprite::Create");
        if (Create) return Create(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border);
        static Method<Sprite*> CreateM = GetClass().GetMethod("Create", 7);
        return CreateM(texture, rect, pivot, pixelsPerUnit, extrude, meshType, border);
    }

    Texture2D* GetTexture() {
        static auto get_texture = (Texture2D*(*)(void*))GetExternMethod("UnityEngine.Sprite::get_texture");
        if (get_texture) return get_texture(this);
        static Method<Texture2D*> get_texture_m = GetClass().GetMethod("get_texture");
        return get_texture_m[this]();
    }

    Rect GetRect() {
        static auto get_rect = (Rect(*)(void*))GetExternMethod("UnityEngine.Sprite::get_rect");
        if (get_rect) return get_rect(this);
        static Method<Rect> get_rect_m = GetClass().GetMethod("get_rect");
        return get_rect_m[this]();
    }

    Vector2 GetPivot() {
        static auto get_pivot = (Vector2(*)(void*))GetExternMethod("UnityEngine.Sprite::get_pivot");
        if (get_pivot) return get_pivot(this);
        static Method<Vector2> get_pivot_m = GetClass().GetMethod("get_pivot");
        return get_pivot_m[this]();
    }

    float GetPixelsPerUnit() {
        static auto get_pixelsPerUnit = (float(*)(void*))GetExternMethod("UnityEngine.Sprite::get_pixelsPerUnit");
        if (get_pixelsPerUnit) return get_pixelsPerUnit(this);
        static Method<float> get_pixelsPerUnit_m = GetClass().GetMethod("get_pixelsPerUnit");
        return get_pixelsPerUnit_m[this]();
    }

    Vector4 GetBorder() {
        static auto get_border = (Vector4(*)(void*))GetExternMethod("UnityEngine.Sprite::get_border");
        if (get_border) return get_border(this);
        static Method<Vector4> get_border_m = GetClass().GetMethod("get_border");
        return get_border_m[this]();
    }

    Vector2 GetBounds() {
        static auto get_bounds = (Vector2(*)(void*))GetExternMethod("UnityEngine.Sprite::get_bounds");
        if (get_bounds) return get_bounds(this);
        static Method<Vector2> get_bounds_m = GetClass().GetMethod("get_bounds");
        return get_bounds_m[this]();
    }

    std::string GetName() {
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }

    void SetName(std::string name) {
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(name));
        }
    }
};

struct Animator : Behaviour {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Animator").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Animator");
        return mclass;
    }

    void SetEnabled(bool enabled){
        static auto set_enabled = (void(*)(void*, bool))GetExternMethod("UnityEngine.Behaviour::set_enabled");
        if (set_enabled) {
            set_enabled(this, enabled);
        } else {
            static Method<void> set_enabled_m = GetClass().GetMethod("set_enabled");
            set_enabled_m[this](enabled);
        }
    }
    bool GetEnabled(){
        static auto get_enabled = (bool(*)(void*))GetExternMethod("UnityEngine.Behaviour::get_enabled");
        if (get_enabled) return get_enabled(this);
        static Method<bool> get_enabled_m = GetClass().GetMethod("get_enabled");
        return get_enabled_m[this]();
    }
    void Play(std::string stateName) {
        static auto Play = (void(*)(void*, String*))GetExternMethod("UnityEngine.Animator::Play");
        if (Play) {
            Play(this, CreateMonoString(stateName));
        } else {
            static Method<void> PlayM = GetClass().GetMethod("Play", 1);
            PlayM[this](CreateMonoString(stateName));
        }
    }

    void Stop() {
        static auto Stop = (void(*)(void*))GetExternMethod("UnityEngine.Animator::Stop");
        if (Stop) {
            Stop(this);
        } else {
            static Method<void> StopM = GetClass().GetMethod("Stop");
            StopM[this]();
        }
    }
};

struct Matrix4x4 {
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;

    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Matrix4x4").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Matrix4x4");
        return mclass;
    }

    static Matrix4x4 identity() {
        static auto identity = (Matrix4x4(*)())GetExternMethod("UnityEngine.Matrix4x4::get_identity");
        if (identity) return identity();
        static Method<Matrix4x4> identityM = GetClass().GetMethod("get_identity");
        return identityM();
    }

    static Matrix4x4 zero() {
        static auto zero = (Matrix4x4(*)())GetExternMethod("UnityEngine.Matrix4x4::get_zero");
        if (zero) return zero();
        static Method<Matrix4x4> zeroM = GetClass().GetMethod("get_zero");
        return zeroM();
    }
};

struct LODGroup : Component {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "LODGroup").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "LODGroup");
        return mclass;
    }
};

struct MonoBehaviour : Behaviour {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "MonoBehaviour").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "MonoBehaviour");
        return mclass;
    }

    void* StartCoroutine(String* methodName) {
        static auto StartCoroutine = (void*(*)(void*, String*))GetExternMethod("UnityEngine.MonoBehaviour::StartCoroutine");
        if (StartCoroutine) return StartCoroutine(this, methodName);
        static Method<void*> StartCoroutineM = GetClass().GetMethod("StartCoroutine", 1);
        return StartCoroutineM[this](methodName);
    }

    void* StartCoroutine(String* methodName, Object* value) {
        static auto StartCoroutine = (void*(*)(void*, String*, Object*))GetExternMethod("UnityEngine.MonoBehaviour::StartCoroutine");
        if (StartCoroutine) return StartCoroutine(this, methodName, value);
        static Method<void*> StartCoroutineM = GetClass().GetMethod("StartCoroutine", 2);
        return StartCoroutineM[this](methodName, value);
    }

    void StopCoroutine(String* methodName) {
        static auto StopCoroutine = (void(*)(void*, String*))GetExternMethod("UnityEngine.MonoBehaviour::StopCoroutine");
        if (StopCoroutine) {
            StopCoroutine(this, methodName);
        } else {
            static Method<void> StopCoroutineM = GetClass().GetMethod("StopCoroutine", 1);
            StopCoroutineM[this](methodName);
        }
    }

    void StopCoroutine(void* routine) {
        static auto StopCoroutine = (void(*)(void*, void*))GetExternMethod("UnityEngine.MonoBehaviour::StopCoroutine");
        if (StopCoroutine) {
            StopCoroutine(this, routine);
        } else {
            static Method<void> StopCoroutineM = GetClass().GetMethod("StopCoroutine", 1);
            StopCoroutineM[this](routine);
        }
    }

    void StopCoroutine(MonoType* routineType) {
        static auto StopCoroutine = (void(*)(void*, MonoType*))GetExternMethod("UnityEngine.MonoBehaviour::StopCoroutine");
        if (StopCoroutine) {
            StopCoroutine(this, routineType);
        } else {
            static Method<void> StopCoroutineM = GetClass().GetMethod("StopCoroutine", 1);
            StopCoroutineM[this](routineType);
        }
    }

    void StopAllCoroutines() {
        static auto StopAllCoroutines = (void(*)(void*))GetExternMethod("UnityEngine.MonoBehaviour::StopAllCoroutines");
        if (StopAllCoroutines) {
            StopAllCoroutines(this);
        } else {
            static Method<void> StopAllCoroutinesM = GetClass().GetMethod("StopAllCoroutines");
            StopAllCoroutinesM[this]();
        }
    }

    void Invoke(String* methodName, float time) {
        static auto Invoke = (void(*)(void*, String*, float))GetExternMethod("UnityEngine.MonoBehaviour::Invoke");
        if (Invoke) {
            Invoke(this, methodName, time);
        } else {
            static Method<void> InvokeM = GetClass().GetMethod("Invoke", 2);
            InvokeM[this](methodName, time);
        }
    }

    void CancelInvoke() {
        static auto CancelInvoke = (void(*)(void*))GetExternMethod("UnityEngine.MonoBehaviour::CancelInvoke");
        if (CancelInvoke) {
            CancelInvoke(this);
        } else {
            static Method<void> CancelInvokeM = GetClass().GetMethod("CancelInvoke");
            CancelInvokeM[this]();
        }
    }

    void CancelInvoke(String* methodName) {
        static auto CancelInvoke = (void(*)(void*, String*))GetExternMethod("UnityEngine.MonoBehaviour::CancelInvoke");
        if (CancelInvoke) {
            CancelInvoke(this, methodName);
        } else {
            static Method<void> CancelInvokeM = GetClass().GetMethod("CancelInvoke", 1);
            CancelInvokeM[this](methodName);
        }
    }

    bool IsInvoking(String* methodName) {
        static auto IsInvoking = (bool(*)(void*, String*))GetExternMethod("UnityEngine.MonoBehaviour::IsInvoking");
        if (IsInvoking) return IsInvoking(this, methodName);
        static Method<bool> IsInvokingM = GetClass().GetMethod("IsInvoking", 1);
        return IsInvokingM[this](methodName);
    }

    bool IsInvoking() {
        static auto IsInvoking = (bool(*)(void*))GetExternMethod("UnityEngine.MonoBehaviour::IsInvoking");
        if (IsInvoking) return IsInvoking(this);
        static Method<bool> IsInvokingM = GetClass().GetMethod("IsInvoking");
        return IsInvokingM[this]();
    }
};

struct QualitySettings {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "QualitySettings").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "QualitySettings");
        return mclass;
    }

    static bool GetRealtimeReflectionProbes() {
        static auto get_realtimeReflectionProbes = (bool(*)())GetExternMethod("UnityEngine.QualitySettings::get_realtimeReflectionProbes");
        if (get_realtimeReflectionProbes) return get_realtimeReflectionProbes();
        static Method<bool> get_realtimeReflectionProbes_m = GetClass().GetMethod("get_realtimeReflectionProbes");
        return get_realtimeReflectionProbes_m();
    }

    static void SetRealtimeReflectionProbes(bool value) {
        static auto set_realtimeReflectionProbes = (void(*)(bool))GetExternMethod("UnityEngine.QualitySettings::set_realtimeReflectionProbes");
        if (set_realtimeReflectionProbes) {
            set_realtimeReflectionProbes(value);
        } else {
            static Method<void> set_realtimeReflectionProbes_m = GetClass().GetMethod("set_realtimeReflectionProbes");
            set_realtimeReflectionProbes_m(value);
        }
    }

    static int GetAnisotropicFiltering() {
        static auto get_anisotropicFiltering = (int(*)())GetExternMethod("UnityEngine.QualitySettings::get_anisotropicFiltering");
        if (get_anisotropicFiltering) return get_anisotropicFiltering();
        static Method<int> get_anisotropicFiltering_m = GetClass().GetMethod("get_anisotropicFiltering");
        return get_anisotropicFiltering_m();
    }

    static void SetAnisotropicFiltering(int value) {
        static auto set_anisotropicFiltering = (void(*)(int))GetExternMethod("UnityEngine.QualitySettings::set_anisotropicFiltering");
        if (set_anisotropicFiltering) {
            set_anisotropicFiltering(value);
        } else {
            static Method<void> set_anisotropicFiltering_m = GetClass().GetMethod("set_anisotropicFiltering");
            set_anisotropicFiltering_m(value);
        }
    }

    static int GetVSyncCount() {
        static auto get_vSyncCount = (int(*)())GetExternMethod("UnityEngine.QualitySettings::get_vSyncCount");
        if (get_vSyncCount) return get_vSyncCount();
        static Method<int> get_vSyncCount_m = GetClass().GetMethod("get_vSyncCount");
        return get_vSyncCount_m();
    }

    static void SetVSyncCount(int value) {
        static auto set_vSyncCount = (void(*)(int))GetExternMethod("UnityEngine.QualitySettings::set_vSyncCount");
        if (set_vSyncCount) {
            set_vSyncCount(value);
        } else {
            static Method<void> set_vSyncCount_m = GetClass().GetMethod("set_vSyncCount");
            set_vSyncCount_m(value);
        }
    }

    static int GetMasterTextureLimit() {
        static auto get_masterTextureLimit = (int(*)())GetExternMethod("UnityEngine.QualitySettings::get_masterTextureLimit");
        if (get_masterTextureLimit) return get_masterTextureLimit();
        static Method<int> get_masterTextureLimit_m = GetClass().GetMethod("get_masterTextureLimit");
        return get_masterTextureLimit_m();
    }

    static void SetMasterTextureLimit(int value) {
        static auto set_masterTextureLimit = (void(*)(int))GetExternMethod("UnityEngine.QualitySettings::set_masterTextureLimit");
        if (set_masterTextureLimit) {
            set_masterTextureLimit(value);
        } else {
            static Method<void> set_masterTextureLimit_m = GetClass().GetMethod("set_masterTextureLimit");
            set_masterTextureLimit_m(value);
        }
    }

    static float GetShadowDistance() {
        static auto get_shadowDistance = (float(*)())GetExternMethod("UnityEngine.QualitySettings::get_shadowDistance");
        if (get_shadowDistance) return get_shadowDistance();
        static Method<float> get_shadowDistance_m = GetClass().GetMethod("get_shadowDistance");
        return get_shadowDistance_m();
    }

    static void SetShadowDistance(float value) {
        static auto set_shadowDistance = (void(*)(float))GetExternMethod("UnityEngine.QualitySettings::set_shadowDistance");
        if (set_shadowDistance) {
            set_shadowDistance(value);
        } else {
            static Method<void> set_shadowDistance_m = GetClass().GetMethod("set_shadowDistance");
            set_shadowDistance_m(value);
        }
    }

    static float GetLodBias() {
        static auto get_lodBias = (float(*)())GetExternMethod("UnityEngine.QualitySettings::get_lodBias");
        if (get_lodBias) return get_lodBias();
        static Method<float> get_lodBias_m = GetClass().GetMethod("get_lodBias");
        return get_lodBias_m();
    }

    static void SetLodBias(float value) {
        static auto set_lodBias = (void(*)(float))GetExternMethod("UnityEngine.QualitySettings::set_lodBias");
        if (set_lodBias) {
            set_lodBias(value);
        } else {
            static Method<void> set_lodBias_m = GetClass().GetMethod("set_lodBias");
            set_lodBias_m(value);
        }
    }

    static int GetAntiAliasing() {
        static auto get_antiAliasing = (int(*)())GetExternMethod("UnityEngine.QualitySettings::get_antiAliasing");
        if (get_antiAliasing) return get_antiAliasing();
        static Method<int> get_antiAliasing_m = GetClass().GetMethod("get_antiAliasing");
        return get_antiAliasing_m();
    }

    static void SetAntiAliasing(int value) {
        static auto set_antiAliasing = (void(*)(int))GetExternMethod("UnityEngine.QualitySettings::set_antiAliasing");
        if (set_antiAliasing) {
            set_antiAliasing(value);
        } else {
            static Method<void> set_antiAliasing_m = GetClass().GetMethod("set_antiAliasing");
            set_antiAliasing_m(value);
        }
    }
};

struct AudioSource : Behaviour {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "AudioSource").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "AudioSource");
        return mclass;
    }

    void Play() {
        static auto Play = (void(*)(void*))GetExternMethod("UnityEngine.AudioSource::Play");
        if (Play) {
            Play(this);
        } else {
            static Method<void> PlayM = GetClass().GetMethod("Play");
            PlayM[this]();
        }
    }

    void Play(float delay) {
        static auto Play = (void(*)(void*, float))GetExternMethod("UnityEngine.AudioSource::Play");
        if (Play) {
            Play(this, delay);
        } else {
            static Method<void> PlayM = GetClass().GetMethod("Play", 1);
            PlayM[this](delay);
        }
    }

    void Stop() {
        static auto Stop = (void(*)(void*))GetExternMethod("UnityEngine.AudioSource::Stop");
        if (Stop) {
            Stop(this);
        } else {
            static Method<void> StopM = GetClass().GetMethod("Stop");
            StopM[this]();
        }
    }

    void Pause() {
        static auto Pause = (void(*)(void*))GetExternMethod("UnityEngine.AudioSource::Pause");
        if (Pause) {
            Pause(this);
        } else {
            static Method<void> PauseM = GetClass().GetMethod("Pause");
            PauseM[this]();
        }
    }

    void UnPause() {
        static auto UnPause = (void(*)(void*))GetExternMethod("UnityEngine.AudioSource::UnPause");
        if (UnPause) {
            UnPause(this);
        } else {
            static Method<void> UnPauseM = GetClass().GetMethod("UnPause");
            UnPauseM[this]();
        }
    }

    float GetVolume() {
        static auto get_volume = (float(*)(void*))GetExternMethod("UnityEngine.AudioSource::get_volume");
        if (get_volume) return get_volume(this);
        static Method<float> get_volume_m = GetClass().GetMethod("get_volume");
        return get_volume_m[this]();
    }

    void SetVolume(float volume) {
        static auto set_volume = (void(*)(void*, float))GetExternMethod("UnityEngine.AudioSource::set_volume");
        if (set_volume) {
            set_volume(this, volume);
        } else {
            static Method<void> set_volume_m = GetClass().GetMethod("set_volume");
            set_volume_m[this](volume);
        }
    }

    AudioClip* GetClip() {
        static auto get_clip = (AudioClip*(*)(void*))GetExternMethod("UnityEngine.AudioSource::get_clip");
        if (get_clip) return get_clip(this);
        static Method<AudioClip*> get_clip_m = GetClass().GetMethod("get_clip");
        return get_clip_m[this]();
    }

    void SetClip(AudioClip* clip) {
        static auto set_clip = (void(*)(void*, AudioClip*))GetExternMethod("UnityEngine.AudioSource::set_clip");
        if (set_clip) {
            set_clip(this, clip);
        } else {
            static Method<void> set_clip_m = GetClass().GetMethod("set_clip");
            set_clip_m[this](clip);
        }
    }

    bool GetIsPlaying() {
        static auto get_isPlaying = (bool(*)(void*))GetExternMethod("UnityEngine.AudioSource::get_isPlaying");
        if (get_isPlaying) return get_isPlaying(this);
        static Method<bool> get_isPlaying_m = GetClass().GetMethod("get_isPlaying");
        return get_isPlaying_m[this]();
    }

    bool GetLoop() {
        static auto get_loop = (bool(*)(void*))GetExternMethod("UnityEngine.AudioSource::get_loop");
        if (get_loop) return get_loop(this);
        static Method<bool> get_loop_m = GetClass().GetMethod("get_loop");
        return get_loop_m[this]();
    }

    void SetLoop(bool loop) {
        static auto set_loop = (void(*)(void*, bool))GetExternMethod("UnityEngine.AudioSource::set_loop");
        if (set_loop) {
            set_loop(this, loop);
        } else {
            static Method<void> set_loop_m = GetClass().GetMethod("set_loop");
            set_loop_m[this](loop);
        }
    }
};

struct AudioClip : NamedObject {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "AudioClip").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "AudioClip");
        return mclass;
    }

    std::string GetName() {
        static auto get_name = (String*(*)(void*))GetExternMethod("UnityEngine.Object::get_name");
        if (get_name) return get_name(this)->str();
        static Method<String*> get_name_m = GetClass().GetMethod("get_name");
        return get_name_m[this]()->str();
    }

    void SetName(std::string name) {
        static auto set_name = (void(*)(void*, String*))GetExternMethod("UnityEngine.Object::set_name");
        if (set_name) {
            set_name(this, CreateMonoString(name));
        } else {
            static Method<void> set_name_m = GetClass().GetMethod("set_name");
            set_name_m[this](CreateMonoString(name));
        }
    }

    void SetData(Array<float>* data, int offsetSamples) {
        static auto SetData = (void(*)(void*, Array<float>*, int))GetExternMethod("UnityEngine.AudioClip::SetData");
        if (SetData) {
            SetData(this, data, offsetSamples);
        } else {
            static Method<void> SetDataM = GetClass().GetMethod("SetData", 2);
            SetDataM[this](data, offsetSamples);
        }
    }

    void SetData(Array<float>* data, int offsetSamples, int channel) {
        static auto SetData = (void(*)(void*, Array<float>*, int, int))GetExternMethod("UnityEngine.AudioClip::SetData");
        if (SetData) {
            SetData(this, data, offsetSamples, channel);
        } else {
            static Method<void> SetDataM = GetClass().GetMethod("SetData", 3);
            SetDataM[this](data, offsetSamples, channel);
        }
    }

    bool GetData(Array<float>* data, int offsetSamples) {
        static auto GetData = (bool(*)(void*, Array<float>*, int))GetExternMethod("UnityEngine.AudioClip::GetData");
        if (GetData) return GetData(this, data, offsetSamples);
        static Method<bool> GetDataM = GetClass().GetMethod("GetData", 2);
        return GetDataM[this](data, offsetSamples);
    }

    bool GetData(Array<float>* data, int offsetSamples, int channel) {
        static auto GetData = (bool(*)(void*, Array<float>*, int, int))GetExternMethod("UnityEngine.AudioClip::GetData");
        if (GetData) return GetData(this, data, offsetSamples, channel);
        static Method<bool> GetDataM = GetClass().GetMethod("GetData", 3);
        return GetDataM[this](data, offsetSamples, channel);
    }

    int GetSamples() {
        static auto get_samples = (int(*)(void*))GetExternMethod("UnityEngine.AudioClip::get_samples");
        if (get_samples) return get_samples(this);
        static Method<int> get_samples_m = GetClass().GetMethod("get_samples");
        return get_samples_m[this]();
    }

    int GetChannels() {
        static auto get_channels = (int(*)(void*))GetExternMethod("UnityEngine.AudioClip::get_channels");
        if (get_channels) return get_channels(this);
        static Method<int> get_channels_m = GetClass().GetMethod("get_channels");
        return get_channels_m[this]();
    }

    int GetFrequency() {
        static auto get_frequency = (int(*)(void*))GetExternMethod("UnityEngine.AudioClip::get_frequency");
        if (get_frequency) return get_frequency(this);
        static Method<int> get_frequency_m = GetClass().GetMethod("get_frequency");
        return get_frequency_m[this]();
    }

    float GetLength() {
        static auto get_length = (float(*)(void*))GetExternMethod("UnityEngine.AudioClip::get_length");
        if (get_length) return get_length(this);
        static Method<float> get_length_m = GetClass().GetMethod("get_length");
        return get_length_m[this]();
    }
};

struct PlayerPrefs {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "PlayerPrefs").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "PlayerPrefs");
        return mclass;
    }

    static void SetInt(std::string key, int value) {
        static auto SetInt = (void(*)(String*, int))GetExternMethod("UnityEngine.PlayerPrefs::SetInt");
        if (SetInt) {
            SetInt(CreateMonoString(key), value);
        } else {
            static Method<void> SetIntM = GetClass().GetMethod("SetInt", 2);
            SetIntM(CreateMonoString(key), value);
        }
    }

    static int GetInt(std::string key, int defaultValue = 0) {
        static auto GetInt = (int(*)(String*, int))GetExternMethod("UnityEngine.PlayerPrefs::GetInt");
        if (GetInt) return GetInt(CreateMonoString(key), defaultValue);
        static Method<int> GetIntM = GetClass().GetMethod("GetInt", 2);
        return GetIntM(CreateMonoString(key), defaultValue);
    }

    static int GetInt(std::string key) {
        static auto GetInt = (int(*)(String*))GetExternMethod("UnityEngine.PlayerPrefs::GetInt");
        if (GetInt) return GetInt(CreateMonoString(key));
        static Method<int> GetIntM = GetClass().GetMethod("GetInt", 1);
        return GetIntM(CreateMonoString(key));
    }

    static void SetString(std::string key, std::string value) {
        static auto SetString = (void(*)(String*, String*))GetExternMethod("UnityEngine.PlayerPrefs::SetString");
        if (SetString) {
            SetString(CreateMonoString(key), CreateMonoString(value));
        } else {
            static Method<void> SetStringM = GetClass().GetMethod("SetString", 2);
            SetStringM(CreateMonoString(key), CreateMonoString(value));
        }
    }

    static std::string GetString(std::string key, std::string defaultValue = "") {
        static auto GetString = (String*(*)(String*, String*))GetExternMethod("UnityEngine.PlayerPrefs::GetString");
        if (GetString) return GetString(CreateMonoString(key), CreateMonoString(defaultValue))->str();
        static Method<String*> GetStringM = GetClass().GetMethod("GetString", 2);
        String* result = GetStringM(CreateMonoString(key), CreateMonoString(defaultValue));
        return result->str();
    }

    static std::string GetString(std::string key) {
        static auto GetString = (String*(*)(String*))GetExternMethod("UnityEngine.PlayerPrefs::GetString");
        if (GetString) return GetString(CreateMonoString(key))->str();
        static Method<String*> GetStringM = GetClass().GetMethod("GetString", 1);
        String* result = GetStringM(CreateMonoString(key));
        return result->str();
    }

    static void SetFloat(std::string key, float value) {
        static auto SetFloat = (void(*)(String*, float))GetExternMethod("UnityEngine.PlayerPrefs::SetFloat");
        if (SetFloat) {
            SetFloat(CreateMonoString(key), value);
        } else {
            static Method<void> SetFloatM = GetClass().GetMethod("SetFloat", 2);
            SetFloatM(CreateMonoString(key), value);
        }
    }

    static float GetFloat(std::string key, float defaultValue = 0.0f) {
        static auto GetFloat = (float(*)(String*, float))GetExternMethod("UnityEngine.PlayerPrefs::GetFloat");
        if (GetFloat) return GetFloat(CreateMonoString(key), defaultValue);
        static Method<float> GetFloatM = GetClass().GetMethod("GetFloat", 2);
        return GetFloatM(CreateMonoString(key), defaultValue);
    }

    static float GetFloat(std::string key) {
        static auto GetFloat = (float(*)(String*))GetExternMethod("UnityEngine.PlayerPrefs::GetFloat");
        if (GetFloat) return GetFloat(CreateMonoString(key));
        static Method<float> GetFloatM = GetClass().GetMethod("GetFloat", 1);
        return GetFloatM(CreateMonoString(key));
    }

    static bool HasKey(std::string key) {
        static auto HasKey = (bool(*)(String*))GetExternMethod("UnityEngine.PlayerPrefs::HasKey");
        if (HasKey) return HasKey(CreateMonoString(key));
        static Method<bool> HasKeyM = GetClass().GetMethod("HasKey", 1);
        return HasKeyM(CreateMonoString(key));
    }

    static void DeleteKey(std::string key) {
        static auto DeleteKey = (void(*)(String*))GetExternMethod("UnityEngine.PlayerPrefs::DeleteKey");
        if (DeleteKey) {
            DeleteKey(CreateMonoString(key));
        } else {
            static Method<void> DeleteKeyM = GetClass().GetMethod("DeleteKey", 1);
            DeleteKeyM(CreateMonoString(key));
        }
    }

    static void DeleteAll() {
        static auto DeleteAll = (void(*)())GetExternMethod("UnityEngine.PlayerPrefs::DeleteAll");
        if (DeleteAll) {
            DeleteAll();
        } else {
            static Method<void> DeleteAllM = GetClass().GetMethod("DeleteAll");
            DeleteAllM();
        }
    }

    static void Save() {
        static auto Save = (void(*)())GetExternMethod("UnityEngine.PlayerPrefs::Save");
        if (Save) {
            Save();
        } else {
            static Method<void> SaveM = GetClass().GetMethod("Save");
            SaveM();
        }
    }
};

struct Light : Behaviour {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Light").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Light");
        return mclass;
    }

    int GetShadows() {
        static auto get_shadows = (int(*)(void*))GetExternMethod("UnityEngine.Light::get_shadows");
        if (get_shadows) return get_shadows(this);
        static Method<int> get_shadows_m = GetClass().GetMethod("get_shadows");
        return get_shadows_m[this]();
    }

    void SetShadows(int value) {
        static auto set_shadows = (void(*)(void*, int))GetExternMethod("UnityEngine.Light::set_shadows");
        if (set_shadows) {
            set_shadows(this, value);
        } else {
            static Method<void> set_shadows_m = GetClass().GetMethod("set_shadows");
            set_shadows_m[this](value);
        }
    }
};

struct ParticleSystem : Component {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "ParticleSystem").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "ParticleSystem");
        return mclass;
    }

    struct EmissionModule {
        static Class GetClass() {
            static Class mclass = Class("UnityEngine", "ParticleSystem+EmissionModule");
            return mclass;
        }

        float GetRateOverTimeMultiplier() {
            static auto get_rateOverTimeMultiplier = (float(*)(void*))GetExternMethod("UnityEngine.ParticleSystem.EmissionModule::get_rateOverTimeMultiplier");
            if (get_rateOverTimeMultiplier) return get_rateOverTimeMultiplier(this);
            static Method<float> get_rateOverTimeMultiplier_m = GetClass().GetMethod("get_rateOverTimeMultiplier");
            return get_rateOverTimeMultiplier_m[this]();
        }

        void SetRateOverTimeMultiplier(float value) {
            static auto set_rateOverTimeMultiplier = (void(*)(void*, float))GetExternMethod("UnityEngine.ParticleSystem.EmissionModule::set_rateOverTimeMultiplier");
            if (set_rateOverTimeMultiplier) {
                set_rateOverTimeMultiplier(this, value);
            } else {
                static Method<void> set_rateOverTimeMultiplier_m = GetClass().GetMethod("set_rateOverTimeMultiplier");
                set_rateOverTimeMultiplier_m[this](value);
            }
        }
    };

    EmissionModule GetEmission() {
        static auto get_emission = (EmissionModule(*)(void*))GetExternMethod("UnityEngine.ParticleSystem::get_emission");
        if (get_emission) return get_emission(this);
        static Method<EmissionModule> get_emission_m = GetClass().GetMethod("get_emission");
        return get_emission_m[this]();
    }
};

struct Application {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine", "Application").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine", "Application");
        return mclass;
    }


    static std::string GetIdentifier() {
        static auto get_idientifier = (String*(*)())GetExternMethod("UnityEngine.Application::get_identifier");
        if (get_idientifier) return get_idientifier()->str();
        static Method<String*> get_idientifier_m = GetClass().GetMethod("get_identifier");
        String* id = get_idientifier_m();
        return id->str();
    }
    static int GetTargetFrameRate() {
        static auto get_targetFrameRate = (int(*)())GetExternMethod("UnityEngine.Application::get_targetFrameRate");
        if (get_targetFrameRate) return get_targetFrameRate();
        static Method<int> get_targetFrameRate_m = GetClass().GetMethod("get_targetFrameRate");
        return get_targetFrameRate_m();
    }
    static void SetTargetFrameRate(int targetFrameRate) {
        static auto set_targetFrameRate = (void(*)(int))GetExternMethod("UnityEngine.Application::set_targetFrameRate");
        if (set_targetFrameRate) {
            set_targetFrameRate(targetFrameRate);
        } else {
            static Method<void> set_targetFrameRate_m = GetClass().GetMethod("set_targetFrameRate");
            set_targetFrameRate_m(targetFrameRate);
        }
    }
    static void OpenUrl(std::string url) {
        static auto openurl = (void(*)(String*))GetExternMethod("UnityEngine.Application::OpenURL");
        if (openurl) {
            openurl(CreateMonoString(url));
        } else {
            static Method<void> OpenURLM = GetClass().GetMethod("OpenURL", 1);
            OpenURLM(CreateMonoString(url));
        }
    }
    static void Quit() {
        static auto Quit = (void(*)())GetExternMethod("UnityEngine.Application::Quit");
        if (Quit) {
            Quit();
        } else {
            static Method<void> QuitM = GetClass().GetMethod("Quit");
            QuitM();
        }
    }
};

struct DownloadHandler : Object {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.Networking", "DownloadHandler").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.Networking", "DownloadHandler");
        return mclass;
    }

    bool GetIsDone() {
        static auto get_isDone = (bool(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::get_isDone");
        if (get_isDone) return get_isDone(this);
        static Method<bool> get_isDone_m = GetClass().GetMethod("get_isDone");
        return get_isDone_m[this]();
    }

    Array<uint8_t>* GetData() {
        static auto get_data = (Array<uint8_t>*(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::get_data");
        if (get_data) return get_data(this);
        static Method<Array<uint8_t>*> get_data_m = GetClass().GetMethod("get_data");
        return get_data_m[this]();
    }

    std::string GetText() {
        static auto get_text = (String*(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::get_text");
        if (get_text) return get_text(this)->str();
        static Method<String*> get_text_m = GetClass().GetMethod("get_text");
        String* text = get_text_m[this]();
        return text->str();
    }

    bool GetHasError() {
        static auto get_hasError = (bool(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::get_hasError");
        if (get_hasError) return get_hasError(this);
        static Method<bool> get_hasError_m = GetClass().GetMethod("get_hasError");
        return get_hasError_m[this]();
    }

    std::string GetError() {
        static auto get_error = (String*(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::get_error");
        if (get_error) return get_error(this)->str();
        static Method<String*> get_error_m = GetClass().GetMethod("get_error");
        String* error = get_error_m[this]();
        return error->str();
    }

    void Dispose() {
        static auto Dispose = (void(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandler::Dispose");
        if (Dispose) {
            Dispose(this);
        } else {
            static Method<void> DisposeM = GetClass().GetMethod("Dispose");
            DisposeM[this]();
        }
    }
};

struct DownloadHandlerTexture : DownloadHandler {
    static Class GetClass() {
        static Class mclass = Class("UnityEngine.Networking", "DownloadHandlerTexture");
        return mclass;
    }

    Texture2D* GetTexture() {
        static auto getTexture = (Texture2D*(*)(void*))GetExternMethod("UnityEngine.Networking.DownloadHandlerTexture::get_texture");
        if (getTexture) return getTexture(this);
        static Method<Texture2D*> getTextureM = GetClass().GetMethod("get_texture", 0);
        return getTextureM(this);
    }

    static Texture2D* GetContent(UnityWebRequest* www) {
        static auto getContent = (Texture2D*(*)(UnityWebRequest*))GetExternMethod("UnityEngine.Networking.DownloadHandlerTexture::GetContent");
        if (getContent) return getContent(www);
        static Method<Texture2D*> getContentM = GetClass().GetMethod("GetContent", 1);
        return getContentM(www);
    }
};

struct UnityWebRequest : Object {
    static MonoType* GetType(){
        static MonoType* type = Class("UnityEngine.Networking", "UnityWebRequest").GetMonoType();
        return type;
    }
    static Class GetClass(){
        static Class mclass = Class("UnityEngine.Networking", "UnityWebRequest");
        return mclass;
    }

    static UnityWebRequest* Get(std::string uri) {
        static auto Get = (UnityWebRequest*(*)(String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Get");
        if (Get) return Get(CreateMonoString(uri));
        static Method<UnityWebRequest*> GetM = GetClass().GetMethod("Get", 1);
        return GetM(CreateMonoString(uri));
    }

    static UnityWebRequest* Post(std::string uri, std::string postData) {
        static auto Post = (UnityWebRequest*(*)(String*, String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Post");
        if (Post) return Post(CreateMonoString(uri), CreateMonoString(postData));
        static Method<UnityWebRequest*> PostM = GetClass().GetMethod("Post", 2);
        return PostM(CreateMonoString(uri), CreateMonoString(postData));
    }

    static UnityWebRequest* Put(std::string uri, Array<uint8_t>* bodyData) {
        static auto Put = (UnityWebRequest*(*)(String*, Array<uint8_t>*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Put");
        if (Put) return Put(CreateMonoString(uri), bodyData);
        static Method<UnityWebRequest*> PutM = GetClass().GetMethod("Put", 2);
        return PutM(CreateMonoString(uri), bodyData);
    }

    static UnityWebRequest* Delete(std::string uri) {
        static auto Delete = (UnityWebRequest*(*)(String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Delete");
        if (Delete) return Delete(CreateMonoString(uri));
        static Method<UnityWebRequest*> DeleteM = GetClass().GetMethod("Delete", 1);
        return DeleteM(CreateMonoString(uri));
    }

    void SetDownloadHandler(DownloadHandler* downloadHandler) {
        static auto set_downloadHandler = (void(*)(void*, DownloadHandler*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::set_downloadHandler");
        if (set_downloadHandler) {
            set_downloadHandler(this, downloadHandler);
        } else {
            static Method<void> set_downloadHandler_m = GetClass().GetMethod("set_downloadHandler");
            set_downloadHandler_m[this](downloadHandler);
        }
    }

    DownloadHandler* GetDownloadHandler() {
        static auto get_downloadHandler = (DownloadHandler*(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_downloadHandler");
        if (get_downloadHandler) return get_downloadHandler(this);
        static Method<DownloadHandler*> get_downloadHandler_m = GetClass().GetMethod("get_downloadHandler");
        return get_downloadHandler_m[this]();
    }

    void SetUrl(std::string url) {
        static auto set_url = (void(*)(void*, String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::set_url");
        if (set_url) {
            set_url(this, CreateMonoString(url));
        } else {
            static Method<void> set_url_m = GetClass().GetMethod("set_url");
            set_url_m[this](CreateMonoString(url));
        }
    }

    std::string GetUrl() {
        static auto get_url = (String*(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_url");
        if (get_url) return get_url(this)->str();
        static Method<String*> get_url_m = GetClass().GetMethod("get_url");
        return get_url_m[this]()->str();
    }

    void SetMethod(std::string method) {
        static auto set_method = (void(*)(void*, String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::set_method");
        if (set_method) {
            set_method(this, CreateMonoString(method));
        } else {
            static Method<void> set_method_m = GetClass().GetMethod("set_method");
            set_method_m[this](CreateMonoString(method));
        }
    }

    static UnityWebRequest* GetTexture(std::string url, bool nonReadable = false) {
        static auto GetTexture = (UnityWebRequest*(*)(String*, bool))GetExternMethod("UnityEngine.Networking.UnityWebRequestTexture::GetTexture");
        if (GetTexture) return GetTexture(CreateMonoString(url), nonReadable);
        static Class uwrt = Class("UnityEngine.Networking", "UnityWebRequestTexture");
        static Method<UnityWebRequest*> getTexM = uwrt.GetMethod("GetTexture", 2);
        return getTexM(CreateMonoString(url), nonReadable);
    }

    static UnityWebRequest* GetTexture(std::string url) {
        return GetTexture(url, false);
    }

    std::string GetMethod() {
        static auto get_method = (String*(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_method");
        if (get_method) return get_method(this)->str();
        static Method<String*> get_method_m = GetClass().GetMethod("get_method");
        return get_method_m[this]()->str();
    }

    bool GetIsDone() {
        static auto get_isDone = (bool(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_isDone");
        if (get_isDone) return get_isDone(this);
        static Method<bool> get_isDone_m = GetClass().GetMethod("get_isDone");
        return get_isDone_m[this]();
    }

    bool GetHasError() {
        static auto get_hasError = (bool(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_hasError");
        if (get_hasError) return get_hasError(this);
        static Method<bool> get_hasError_m = GetClass().GetMethod("get_hasError");
        return get_hasError_m[this]();
    }

    std::string GetError() {
        static auto get_error = (String*(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_error");
        if (get_error) return get_error(this)->str();
        static Method<String*> get_error_m = GetClass().GetMethod("get_error");
        return get_error_m[this]()->str();
    }

    long GetResponseCode() {
        static auto get_responseCode = (long(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::get_responseCode");
        if (get_responseCode) return get_responseCode(this);
        static Method<long> get_responseCode_m = GetClass().GetMethod("get_responseCode");
        return get_responseCode_m[this]();
    }

    void SetRequestHeader(std::string name, std::string value) {
        static auto SetRequestHeader = (void(*)(void*, String*, String*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::SetRequestHeader");
        if (SetRequestHeader) {
            SetRequestHeader(this, CreateMonoString(name), CreateMonoString(value));
        } else {
            static Method<void> SetRequestHeaderM = GetClass().GetMethod("SetRequestHeader", 2);
            SetRequestHeaderM[this](CreateMonoString(name), CreateMonoString(value));
        }
    }

    void SendWebRequest() {
        static auto SendWebRequest = (void(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::SendWebRequest");
        if (SendWebRequest) {
            SendWebRequest(this);
        } else {
            static Method<void> SendWebRequestM = GetClass().GetMethod("SendWebRequest");
            SendWebRequestM[this]();
        }
    }

    void Abort() {
        static auto Abort = (void(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Abort");
        if (Abort) {
            Abort(this);
        } else {
            static Method<void> AbortM = GetClass().GetMethod("Abort");
            AbortM[this]();
        }
    }

    void Dispose() {
        static auto Dispose = (void(*)(void*))GetExternMethod("UnityEngine.Networking.UnityWebRequest::Dispose");
        if (Dispose) {
            Dispose(this);
        } else {
            static Method<void> DisposeM = GetClass().GetMethod("Dispose");
            DisposeM[this]();
        }
    }
};

struct GL{
    static MonoType* GetType(){
        return Class("UnityEngine", "GL").GetMonoType();
    }
    static Class GetClass() {
        return Class("UnityEngine", "GL");
    }

    static void Begin(int mode){
        static auto Begin = (void(*)(int))GetExternMethod("UnityEngine.GL::Begin");
        if (Begin) {
            Begin(mode);
        } else {
            static Method<void> BeginM = GetClass().GetMethod("Begin");
            BeginM(mode);
        }
    }
    static void End(){
        static auto End = (void(*)())GetExternMethod("UnityEngine.GL::End");
        if (End) {
            End();
        } else {
            static Method<void> EndM = GetClass().GetMethod("End");
            EndM();
        }
    }
    static void Color(Color color){
        static auto Color = (void(*)(BNM::Structures::Unity::Color))GetExternMethod("UnityEngine.GL::Color");
        if (Color) {
            Color(color);
        } else {
            static Method<void> ColorM = GetClass().GetMethod("Color");
            ColorM(color);
        }
    }
    static void Vertex3(float x, float y, float z){
        static auto Vertex3 = (void(*)(float, float, float))GetExternMethod("UnityEngine.GL::Vertex3");
        if (Vertex3) {
            Vertex3(x, y, z);
        } else {
            static Method<void> Vertex3M = GetClass().GetMethod("Vertex3");
            Vertex3M(x,y,z);
        }
    }
    static void Vertex(Vector3 vector3){
        Vertex3(vector3.x, vector3.y, vector3.z);
    }
    static void PushMatrix(){
        static auto PushMatrix = (void(*)())GetExternMethod("UnityEngine.GL::PushMatrix");
        if (PushMatrix) {
            PushMatrix();
        } else {
            static Method<void> PushMatrixM = GetClass().GetMethod("PushMatrix");
            PushMatrixM();
        }
    }
    static void PopMatrix(){
        static auto PopMatrix = (void(*)())GetExternMethod("UnityEngine.GL::PopMatrix");
        if (PopMatrix) {
            PopMatrix();
        } else {
            static Method<void> PopMatrixM = GetClass().GetMethod("PopMatrix");
            PopMatrixM();
        }
    }

};
struct TMP_Text : MaskableGraphic{
    static MonoType* GetType(){
        return Class("TMPro", "TMP_Text").GetMonoType();
    }
    static Class GetClass(){
        return Class("TMPro", "TMP_Text");
    }
    std::string GetText(){
        static auto get_text = (String*(*)(void*))GetExternMethod("TMPro.TMP_Text::get_text");
        if (get_text) return get_text(this)->str();
        static Method<String*> get_text_m = GetClass().GetMethod("get_text");
        auto str = get_text_m[this]();
        return str->str();
    }
    void SetText(std::string text){
        static auto set_text = (void(*)(void*, String*))GetExternMethod("TMPro.TMP_Text::set_text");
        if (set_text) {
            set_text(this, CreateMonoString(text));
        } else {
            static Method<void> set_text_m = GetClass().GetMethod("set_text");
            set_text_m[this](CreateMonoString(text));
        }
    }
    float GetFontSize(){
        static auto get_fontSize = (float(*)(void*))GetExternMethod("TMPro.TMP_Text::get_fontSize");
        if (get_fontSize) return get_fontSize(this);
        static Method<float> get_fontSize_m = GetClass().GetMethod("get_fontSize");
        return get_fontSize_m[this]();
    }
    void SetFontSize(float size){
        static auto set_fontSize = (void(*)(void*, float))GetExternMethod("TMPro.TMP_Text::set_fontSize");
        if (set_fontSize) {
            set_fontSize(this, size);
        } else {
            static Method<void> set_fontSize_m = GetClass().GetMethod("set_fontSize");
            set_fontSize_m[this](size);
        }
    }
    TextAlignmentOptions GetAlignment(){
        static auto get_alignment = (TextAlignmentOptions(*)(void*))GetExternMethod("TMPro.TMP_Text::get_alignment");
        if (get_alignment) return get_alignment(this);
        static Method<TextAlignmentOptions> get_alignment_m = GetClass().GetMethod("get_alignment");
        return get_alignment_m[this]();
    }
    void SetAlignment(TextAlignmentOptions alignment){
        static auto set_alignment = (void(*)(void*, TextAlignmentOptions))GetExternMethod("TMPro.TMP_Text::set_alignment");
        if (set_alignment) {
            set_alignment(this, alignment);
        } else {
            static Method<void> set_alignment_m = GetClass().GetMethod("set_alignment");
            set_alignment_m[this](alignment);
        }
    }
    void SetEnableAutoSizing(bool value){
        static auto set_enableAutoSizing = (void(*)(void*, bool))GetExternMethod("TMPro.TMP_Text::set_enableAutoSizing");
        if (set_enableAutoSizing) {
            set_enableAutoSizing(this, value);
        } else {
            static Method<void> set_enableAutoSizing_m = GetClass().GetMethod("set_enableAutoSizing");
            set_enableAutoSizing_m[this](value);
        }
    }
};
struct TextMeshPro : TMP_Text{
    static MonoType* GetType(){
        return Class("TMPro", "TextMeshPro").GetMonoType();
    }
    static Class GetClass(){
        return Class("TMPro", "TextMeshPro");
    }
};
struct TrailRenderer : Renderer {
    static MonoType* GetType() {
        static MonoType* type = Class("UnityEngine", "TrailRenderer").GetMonoType();
        return type;
    }
    static Class GetClass() {
        static Class mclass = Class("UnityEngine", "TrailRenderer");
        return mclass;
    }

    int GetNumPositions() {
        static auto get_numPositions = (int(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_numPositions");
        if (get_numPositions) return get_numPositions(this);
        static Method<int> m = GetClass().GetMethod("get_numPositions");
        return m[this]();
    }

    float GetTime() {
        static auto get_time = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_time");
        if (get_time) return get_time(this);
        static Method<float> m = GetClass().GetMethod("get_time");
        return m[this]();
    }
    void SetTime(float value) {
        static auto set_time = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_time");
        if (set_time) {
            set_time(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_time");
            m[this](value);
        }
    }

    float GetStartWidth() {
        static auto get_startWidth = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_startWidth");
        if (get_startWidth) return get_startWidth(this);
        static Method<float> m = GetClass().GetMethod("get_startWidth");
        return m[this]();
    }
    void SetStartWidth(float value) {
        static auto set_startWidth = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_startWidth");
        if (set_startWidth) {
            set_startWidth(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_startWidth");
            m[this](value);
        }
    }

    float GetEndWidth() {
        static auto get_endWidth = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_endWidth");
        if (get_endWidth) return get_endWidth(this);
        static Method<float> m = GetClass().GetMethod("get_endWidth");
        return m[this]();
    }
    void SetEndWidth(float value) {
        static auto set_endWidth = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_endWidth");
        if (set_endWidth) {
            set_endWidth(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_endWidth");
            m[this](value);
        }
    }

    float GetWidthMultiplier() {
        static auto get_widthMultiplier = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_widthMultiplier");
        if (get_widthMultiplier) return get_widthMultiplier(this);
        static Method<float> m = GetClass().GetMethod("get_widthMultiplier");
        return m[this]();
    }
    void SetWidthMultiplier(float value) {
        static auto set_widthMultiplier = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_widthMultiplier");
        if (set_widthMultiplier) {
            set_widthMultiplier(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_widthMultiplier");
            m[this](value);
        }
    }

    bool GetAutodestruct() {
        static auto get_autodestruct = (bool(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_autodestruct");
        if (get_autodestruct) return get_autodestruct(this);
        static Method<bool> m = GetClass().GetMethod("get_autodestruct");
        return m[this]();
    }
    void SetAutodestruct(bool value) {
        static auto set_autodestruct = (void(*)(void*, bool))GetExternMethod("UnityEngine.TrailRenderer::set_autodestruct");
        if (set_autodestruct) {
            set_autodestruct(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_autodestruct");
            m[this](value);
        }
    }

    bool GetEmitting() {
        static auto get_emitting = (bool(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_emitting");
        if (get_emitting) return get_emitting(this);
        static Method<bool> m = GetClass().GetMethod("get_emitting");
        return m[this]();
    }
    void SetEmitting(bool value) {
        static auto set_emitting = (void(*)(void*, bool))GetExternMethod("UnityEngine.TrailRenderer::set_emitting");
        if (set_emitting) {
            set_emitting(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_emitting");
            m[this](value);
        }
    }

    int GetNumCornerVertices() {
        static auto get_numCornerVertices = (int(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_numCornerVertices");
        if (get_numCornerVertices) return get_numCornerVertices(this);
        static Method<int> m = GetClass().GetMethod("get_numCornerVertices");
        return m[this]();
    }
    void SetNumCornerVertices(int value) {
        static auto set_numCornerVertices = (void(*)(void*, int))GetExternMethod("UnityEngine.TrailRenderer::set_numCornerVertices");
        if (set_numCornerVertices) {
            set_numCornerVertices(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_numCornerVertices");
            m[this](value);
        }
    }

    int GetNumCapVertices() {
        static auto get_numCapVertices = (int(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_numCapVertices");
        if (get_numCapVertices) return get_numCapVertices(this);
        static Method<int> m = GetClass().GetMethod("get_numCapVertices");
        return m[this]();
    }
    void SetNumCapVertices(int value) {
        static auto set_numCapVertices = (void(*)(void*, int))GetExternMethod("UnityEngine.TrailRenderer::set_numCapVertices");
        if (set_numCapVertices) {
            set_numCapVertices(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_numCapVertices");
            m[this](value);
        }
    }

    float GetMinVertexDistance() {
        static auto get_minVertexDistance = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_minVertexDistance");
        if (get_minVertexDistance) return get_minVertexDistance(this);
        static Method<float> m = GetClass().GetMethod("get_minVertexDistance");
        return m[this]();
    }
    void SetMinVertexDistance(float value) {
        static auto set_minVertexDistance = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_minVertexDistance");
        if (set_minVertexDistance) {
            set_minVertexDistance(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_minVertexDistance");
            m[this](value);
        }
    }

    Color GetStartColor() {
        static auto get_startColor = (Color(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_startColor");
        if (get_startColor) return get_startColor(this);
        static Method<Color> m = GetClass().GetMethod("get_startColor");
        return m[this]();
    }
    void SetStartColor(Color value) {
        static auto set_startColor = (void(*)(void*, Color))GetExternMethod("UnityEngine.TrailRenderer::set_startColor");
        if (set_startColor) {
            set_startColor(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_startColor");
            m[this](value);
        }
    }

    Color GetEndColor() {
        static auto get_endColor = (Color(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_endColor");
        if (get_endColor) return get_endColor(this);
        static Method<Color> m = GetClass().GetMethod("get_endColor");
        return m[this]();
    }
    void SetEndColor(Color value) {
        static auto set_endColor = (void(*)(void*, Color))GetExternMethod("UnityEngine.TrailRenderer::set_endColor");
        if (set_endColor) {
            set_endColor(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_endColor");
            m[this](value);
        }
    }

    int GetPositionCount() {
        static auto get_positionCount = (int(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_positionCount");
        if (get_positionCount) return get_positionCount(this);
        static Method<int> m = GetClass().GetMethod("get_positionCount");
        return m[this]();
    }

    void SetPosition(int index, Vector3 position) {
        static auto SetPosition = (void(*)(void*, int, Vector3))GetExternMethod("UnityEngine.TrailRenderer::SetPosition");
        if (SetPosition) {
            SetPosition(this, index, position);
        } else {
            static Method<void> m = GetClass().GetMethod("SetPosition");
            m[this](index, position);
        }
    }

    Vector3 GetPosition(int index) {
        static auto GetPosition = (Vector3(*)(void*, int))GetExternMethod("UnityEngine.TrailRenderer::GetPosition");
        if (GetPosition) return GetPosition(this, index);
        static Method<Vector3> m = GetClass().GetMethod("GetPosition");
        return m[this](index);
    }

    Vector2 GetTextureScale() {
        static auto get_textureScale = (Vector2(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_textureScale");
        if (get_textureScale) return get_textureScale(this);
        static Method<Vector2> m = GetClass().GetMethod("get_textureScale");
        return m[this]();
    }
    void SetTextureScale(Vector2 value) {
        static auto set_textureScale = (void(*)(void*, Vector2))GetExternMethod("UnityEngine.TrailRenderer::set_textureScale");
        if (set_textureScale) {
            set_textureScale(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_textureScale");
            m[this](value);
        }
    }

    float GetShadowBias() {
        static auto get_shadowBias = (float(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_shadowBias");
        if (get_shadowBias) return get_shadowBias(this);
        static Method<float> m = GetClass().GetMethod("get_shadowBias");
        return m[this]();
    }
    void SetShadowBias(float value) {
        static auto set_shadowBias = (void(*)(void*, float))GetExternMethod("UnityEngine.TrailRenderer::set_shadowBias");
        if (set_shadowBias) {
            set_shadowBias(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_shadowBias");
            m[this](value);
        }
    }

    bool GetGenerateLightingData() {
        static auto get_generateLightingData = (bool(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_generateLightingData");
        if (get_generateLightingData) return get_generateLightingData(this);
        static Method<bool> m = GetClass().GetMethod("get_generateLightingData");
        return m[this]();
    }
    void SetGenerateLightingData(bool value) {
        static auto set_generateLightingData = (void(*)(void*, bool))GetExternMethod("UnityEngine.TrailRenderer::set_generateLightingData");
        if (set_generateLightingData) {
            set_generateLightingData(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_generateLightingData");
            m[this](value);
        }
    }

    bool GetApplyActiveColorSpace() {
        static auto get_applyActiveColorSpace = (bool(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_applyActiveColorSpace");
        if (get_applyActiveColorSpace) return get_applyActiveColorSpace(this);
        static Method<bool> m = GetClass().GetMethod("get_applyActiveColorSpace");
        return m[this]();
    }
    void SetApplyActiveColorSpace(bool value) {
        static auto set_applyActiveColorSpace = (void(*)(void*, bool))GetExternMethod("UnityEngine.TrailRenderer::set_applyActiveColorSpace");
        if (set_applyActiveColorSpace) {
            set_applyActiveColorSpace(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_applyActiveColorSpace");
            m[this](value);
        }
    }

    void Clear() {
        static auto Clear = (void(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::Clear");
        if (Clear) {
            Clear(this);
        } else {
            static Method<void> m = GetClass().GetMethod("Clear");
            m[this]();
        }
    }

    Gradient* GetColorGradient() {
        static auto get_colorGradient = (Gradient*(*)(void*))GetExternMethod("UnityEngine.TrailRenderer::get_colorGradient");
        if (get_colorGradient) return get_colorGradient(this);
        static Method<Gradient*> m = GetClass().GetMethod("get_colorGradient");
        return m[this]();
    }
    void SetColorGradient(Gradient* value) {
        static auto set_colorGradient = (void(*)(void*, Gradient*))GetExternMethod("UnityEngine.TrailRenderer::set_colorGradient");
        if (set_colorGradient) {
            set_colorGradient(this, value);
        } else {
            static Method<void> m = GetClass().GetMethod("set_colorGradient");
            m[this](value);
        }
    }

};
