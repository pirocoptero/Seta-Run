template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_Wind();
	RegisterModule_Wind();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; 
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterClass<PolygonCollider2D>();
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; 
class GUILayer; template <> void RegisterClass<GUILayer>();
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; 
class NavMeshObstacle; 
class NetworkView; 
class OffMeshLink; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; 
class Skybox; 
class SortingGroup; 
class Terrain; 
class VideoPlayer; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; 
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; 
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; 
class OcclusionPortal; 
class ParticleAnimator; 
class ParticleEmitter; 
class EllipsoidParticleEmitter; 
class MeshParticleEmitter; 
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; 
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteMask; 
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TilemapRenderer; 
class TrailRenderer; 
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; 
class WorldAnchor; 
class WorldParticleCollider; 
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; 
class AssetBundleManifest; 
class ScriptedImporter; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; 
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class GameObjectRecorder; 
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; 
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterClass<Sprite>();
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; 
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; 
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; 
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; 
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; 
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAnalyticsManager; 
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class RenderPassAttachment; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 86 non stripped classes
	//0. Behaviour
	RegisterClass<Behaviour>();
	//1. Unity::Component
	RegisterClass<Unity::Component>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. Camera
	RegisterClass<Camera>();
	//4. GameObject
	RegisterClass<GameObject>();
	//5. QualitySettings
	RegisterClass<QualitySettings>();
	//6. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//7. GameManager
	RegisterClass<GameManager>();
	//8. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//9. Renderer
	RegisterClass<Renderer>();
	//10. GUIElement
	RegisterClass<GUIElement>();
	//11. GUILayer
	RegisterClass<GUILayer>();
	//12. Light
	RegisterClass<Light>();
	//13. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//14. Shader
	RegisterClass<Shader>();
	//15. NamedObject
	RegisterClass<NamedObject>();
	//16. Material
	RegisterClass<Material>();
	//17. Sprite
	RegisterClass<Sprite>();
	//18. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//19. Texture
	RegisterClass<Texture>();
	//20. Texture2D
	RegisterClass<Texture2D>();
	//21. RenderTexture
	RegisterClass<RenderTexture>();
	//22. Transform
	RegisterClass<Transform>();
	//23. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//24. MeshFilter
	RegisterClass<MeshFilter>();
	//25. Mesh
	RegisterClass<Mesh>();
	//26. Animation
	RegisterClass<Animation>();
	//27. Animator
	RegisterClass<Animator>();
	//28. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//29. Collider2D
	RegisterClass<Collider2D>();
	//30. ParticleSystem
	RegisterClass<ParticleSystem>();
	//31. Rigidbody
	RegisterClass<Rigidbody>();
	//32. Unity::Joint
	RegisterClass<Unity::Joint>();
	//33. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//34. Collider
	RegisterClass<Collider>();
	//35. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//36. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//37. UI::Canvas
	RegisterClass<UI::Canvas>();
	//38. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//39. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//40. AudioClip
	RegisterClass<AudioClip>();
	//41. SampleClip
	RegisterClass<SampleClip>();
	//42. AudioListener
	RegisterClass<AudioListener>();
	//43. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//44. AudioSource
	RegisterClass<AudioSource>();
	//45. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//46. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//47. PreloadData
	RegisterClass<PreloadData>();
	//48. Cubemap
	RegisterClass<Cubemap>();
	//49. Texture3D
	RegisterClass<Texture3D>();
	//50. Texture2DArray
	RegisterClass<Texture2DArray>();
	//51. MeshRenderer
	RegisterClass<MeshRenderer>();
	//52. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//53. BuildSettings
	RegisterClass<BuildSettings>();
	//54. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//55. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//56. InputManager
	RegisterClass<InputManager>();
	//57. PlayerSettings
	RegisterClass<PlayerSettings>();
	//58. ResourceManager
	RegisterClass<ResourceManager>();
	//59. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//60. ScriptMapper
	RegisterClass<ScriptMapper>();
	//61. TagManager
	RegisterClass<TagManager>();
	//62. TimeManager
	RegisterClass<TimeManager>();
	//63. MonoManager
	RegisterClass<MonoManager>();
	//64. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//65. NetworkManager
	RegisterClass<NetworkManager>();
	//66. MonoScript
	RegisterClass<MonoScript>();
	//67. TextAsset
	RegisterClass<TextAsset>();
	//68. PhysicsManager
	RegisterClass<PhysicsManager>();
	//69. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//70. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//71. AudioManager
	RegisterClass<AudioManager>();
	//72. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//73. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//74. AnimatorController
	RegisterClass<AnimatorController>();
	//75. FlareLayer
	RegisterClass<FlareLayer>();
	//76. RenderSettings
	RegisterClass<RenderSettings>();
	//77. LevelGameManager
	RegisterClass<LevelGameManager>();
	//78. LightmapSettings
	RegisterClass<LightmapSettings>();
	//79. AnimationClip
	RegisterClass<AnimationClip>();
	//80. Motion
	RegisterClass<Motion>();
	//81. SphereCollider
	RegisterClass<SphereCollider>();
	//82. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//83. PolygonCollider2D
	RegisterClass<PolygonCollider2D>();
	//84. LightProbes
	RegisterClass<LightProbes>();
	//85. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();

}
