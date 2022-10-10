#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Anima2D.Bone2D
struct Bone2D_t3065299646;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Anima2D.Ik2D
struct Ik2D_t2093579821;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// Anima2D.Control
struct Control_t3801119829;
// Anima2D.IkSolver2D
struct IkSolver2D_t3375840577;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>
struct List_1_t3354082258;
// Anima2D.IkSolver2D/SolverPose
struct SolverPose_t1882007516;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Anima2D.IkCCD2D
struct IkCCD2D_t149469636;
// Anima2D.IkSolver2DCCD
struct IkSolver2DCCD_t3651796268;
// Anima2D.IkGroup
struct IkGroup_t3191562885;
// System.Collections.Generic.List`1<Anima2D.Ik2D>
struct List_1_t3565654563;
// Anima2D.IkLimb2D
struct IkLimb2D_t1103101996;
// Anima2D.IkSolver2DLimb
struct IkSolver2DLimb_t33506378;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t2302988098;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// Anima2D.Pose
struct Pose_t3511490975;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// Anima2D.Pose/PoseEntry
struct PoseEntry_t139858374;
// Anima2D.PoseManager
struct PoseManager_t4097669563;
// Anima2D.SpriteMesh
struct SpriteMesh_t4133440749;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642;
// UnityEngine.Material
struct Material_t340375123;
// Anima2D.SpriteMeshAnimation
struct SpriteMeshAnimation_t3515039005;
// Anima2D.SpriteMesh[]
struct SpriteMeshU5BU5D_t497469632;
// Anima2D.SpriteMeshInstance
struct SpriteMeshInstance_t871590551;
// System.Collections.Generic.List`1<Anima2D.Bone2D>
struct List_1_t242407092;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// System.Collections.Generic.IEnumerable`1<Anima2D.Bone2D>
struct IEnumerable_1_t2045152535;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t245602842;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3213117958;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t1776052410;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Texture
struct Texture_t3661962703;
// CharacterMotion
struct CharacterMotion_t2600360077;
// UnityEngine.Animator
struct Animator_t434523843;
// CoinController
struct CoinController_t4170731786;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1800779281;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// CustomCamera.FollowCamera2D
struct FollowCamera2D_t4192405139;
// UnityEngine.Camera
struct Camera_t4157153871;
// Follow
struct Follow_t1013500665;
// Personagem
struct Personagem_t2484933062;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Collision2D
struct Collision2D_t2842956331;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t662546754;
// Personagem/<dyingAnimation>c__Iterator0
struct U3CdyingAnimationU3Ec__Iterator0_t276251559;
// Personagem/<continueGame>c__Iterator1
struct U3CcontinueGameU3Ec__Iterator1_t1070021004;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// PlayerInput
struct PlayerInput_t2642816418;
// PlayerMovement
struct PlayerMovement_t2731566919;
// SceneController
struct SceneController_t2849316448;
// ScrollingBackground
struct ScrollingBackground_t4272380809;
// ShipTrigger
struct ShipTrigger_t3587195811;
// SkinnedMeshCombiner
struct SkinnedMeshCombiner_t3660097279;
// Anima2D.SpriteMeshInstance[]
struct SpriteMeshInstanceU5BU5D_t371572014;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct List_1_t3427862769;
// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct List_1_t2460578222;
// System.Collections.Generic.List`1<UnityEngine.Matrix4x4>
struct List_1_t3289976585;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_t4267154537;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// SlidePlayer
struct SlidePlayer_t280460050;
// SpriteCycle
struct SpriteCycle_t1418532713;
// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t412733603;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// SpriteCycleParallax
struct SpriteCycleParallax_t2394620404;
// UnityChan.SpringBone
struct SpringBone_t3999458348;
// UnityChan.SpringManager
struct SpringManager_t418696745;
// UnityChan.SpringCollider
struct SpringCollider_t2692606160;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366;
// UnityStandardAssets.Utility.WaypointProgressTracker
struct WaypointProgressTracker_t1841386251;
// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t445075330;
// Anima2D.Ik2D[]
struct Ik2DU5BU5D_t1713990272;
// Anima2D.IkSolver2D/SolverPose[]
struct SolverPoseU5BU5D_t2259833141;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// Anima2D.Bone2D[]
struct Bone2DU5BU5D_t2775241867;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t96683501;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// System.Collections.Generic.List`1<Anima2D.Pose/PoseEntry>
struct List_1_t1611933116;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t636815781;
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t338282993;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t2584574554;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.Collections.Generic.List`1<Anima2D.Pose>
struct List_1_t688598421;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var;
extern const uint32_t Bone2D_get_child_m427147334_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t Bone2D_get_localEndPosition_m569969392_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t Bone2D_get_localLength_m3704420802_MetadataUsageId;
extern const uint32_t Bone2D_set_localLength_m2697920108_MetadataUsageId;
extern const uint32_t Bone2D_get_parentBone_m1149155992_MetadataUsageId;
extern const uint32_t Bone2D_get_linkedParentBone_m4065394967_MetadataUsageId;
extern const uint32_t Bone2D_get_root_m715267024_MetadataUsageId;
extern const uint32_t Bone2D_get_chainRoot_m739570076_MetadataUsageId;
extern const uint32_t Bone2D_get_chainLength_m2780646894_MetadataUsageId;
extern const uint32_t Bone2D_GetChainBoneByIndex_m1027494730_MetadataUsageId;
extern const uint32_t Control_get_color_m2594479494_MetadataUsageId;
extern const uint32_t Control_get_bone_m886963234_MetadataUsageId;
extern const uint32_t Control_LateUpdate_m3643433739_MetadataUsageId;
extern const uint32_t Ik2D_get_target_m22966063_MetadataUsageId;
extern const uint32_t Ik2D_set_target_m937116090_MetadataUsageId;
extern String_t* _stringLiteral117428549;
extern String_t* _stringLiteral1005994495;
extern const uint32_t Ik2D_OnDrawGizmos_m3329124976_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m2802291936_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4291941635_RuntimeMethod_var;
extern const uint32_t Ik2D_SetAttachedIK_m3904731071_MetadataUsageId;
extern const uint32_t Ik2D_UpdateIK_m1470206832_MetadataUsageId;
extern RuntimeClass* IkSolver2DCCD_t3651796268_il2cpp_TypeInfo_var;
extern const uint32_t IkCCD2D__ctor_m770641484_MetadataUsageId;
extern RuntimeClass* List_1_t3565654563_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m483261293_RuntimeMethod_var;
extern const uint32_t IkGroup__ctor_m529924850_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3415608264_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1848702612_RuntimeMethod_var;
extern const uint32_t IkGroup_UpdateGroup_m1084264278_MetadataUsageId;
extern RuntimeClass* IkSolver2DLimb_t33506378_il2cpp_TypeInfo_var;
extern const uint32_t IkLimb2D__ctor_m3164195266_MetadataUsageId;
extern RuntimeClass* List_1_t3354082258_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3957462430_RuntimeMethod_var;
extern const uint32_t IkSolver2D__ctor_m2521528584_MetadataUsageId;
extern const uint32_t IkSolver2D_get_rootBone_m1270924988_MetadataUsageId;
extern const uint32_t IkSolver2D_set_rootBone_m634875102_MetadataUsageId;
extern const uint32_t IkSolver2D_set_weight_m16666026_MetadataUsageId;
extern RuntimeClass* SolverPose_t1882007516_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1_Clear_m164135322_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m475487972_RuntimeMethod_var;
extern const uint32_t IkSolver2D_Initialize_m2968157143_MetadataUsageId;
extern const uint32_t IkSolver2D_StoreDefaultPoses_m3143471330_MetadataUsageId;
extern const uint32_t IkSolver2D_RestoreDefaultPoses_m1105316293_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t IkSolver2D_UpdateBones_m364885504_MetadataUsageId;
extern const uint32_t SolverPose__ctor_m1427540147_MetadataUsageId;
extern const uint32_t SolverPose_get_bone_m364338813_MetadataUsageId;
extern const uint32_t SolverPose_set_bone_m1300346228_MetadataUsageId;
extern const uint32_t SolverPose_RestoreDefaultPose_m973395117_MetadataUsageId;
extern const uint32_t IkSolver2DCCD_DoSolverUpdate_m3133273796_MetadataUsageId;
extern const uint32_t IkSolver2DCCD_RotatePositionFrom_m381530626_MetadataUsageId;
extern const uint32_t IkSolver2DLimb_DoSolverUpdate_m3568754372_MetadataUsageId;
extern const uint32_t MathUtils_SignedAngle_m3328907211_MetadataUsageId;
extern const uint32_t MathUtils_Fmod_m657427846_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t MathUtils_SegmentDistance_m2255683459_MetadataUsageId;
extern const uint32_t MathUtils_SegmentSqrtDistance_m2695621698_MetadataUsageId;
extern const uint32_t MathUtils_LineDistance_m1644840721_MetadataUsageId;
extern const uint32_t MathUtils_SqrtLineDistance_m2659604187_MetadataUsageId;
extern const uint32_t MathUtils_GetRotation_m2420503444_MetadataUsageId;
extern const uint32_t MathUtils_GetScale_m285242809_MetadataUsageId;
extern const uint32_t MathUtils_ClampRect_m1493228901_MetadataUsageId;
extern const uint32_t MathUtils_ClampPositionInRect_m1661806423_MetadataUsageId;
extern const uint32_t MathUtils_RoundToMultipleOf_m3820290264_MetadataUsageId;
extern const uint32_t MathUtils_GetClosestPowerOfTen_m1194299851_MetadataUsageId;
extern const uint32_t MathUtils_DiscardLeastSignificantDecimal_m1416504335_MetadataUsageId;
extern const uint32_t MathUtils_GetNumberOfDecimalsForMinimumDifference_m453584236_MetadataUsageId;
extern RuntimeClass* Matrix4x4_t1817901843_il2cpp_TypeInfo_var;
extern const uint32_t MathUtils_Unskin_m707256460_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteMeshInstance_t871590551_m2096025117_RuntimeMethod_var;
extern const uint32_t SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211_MetadataUsageId;
extern const uint32_t SpriteMeshAnimation_LateUpdate_m1610323722_MetadataUsageId;
extern RuntimeClass* List_1_t242407092_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m3411318880_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance__ctor_m535658594_MetadataUsageId;
extern RuntimeClass* MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var;
extern const uint32_t SpriteMeshInstance_set_sharedMaterial_m1463599232_MetadataUsageId;
extern String_t* _stringLiteral1948333211;
extern const uint32_t SpriteMeshInstance_get_sortingLayerName_m479530502_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_set_sortingLayerName_m1169334417_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Count_m2615777027_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3575663598_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3980914492_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m121867798_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m677199212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m1382492940_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance_get_bones_m419870594_MetadataUsageId;
extern RuntimeClass* TransformU5BU5D_t807237628_il2cpp_TypeInfo_var;
extern const uint32_t SpriteMeshInstance_set_bones_m2901801063_MetadataUsageId;
extern RuntimeClass* MaterialPropertyBlock_t3213117958_il2cpp_TypeInfo_var;
extern const uint32_t SpriteMeshInstance_get_materialPropertyBlock_m2070813736_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance_get_cachedRenderer_m2274103141_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance_get_cachedMeshFilter_m3379629522_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_get_spriteTexture_m1488351362_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_get_sharedMesh_m3404105658_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisMesh_t3648964284_m1392175164_RuntimeMethod_var;
extern const uint32_t SpriteMeshInstance_get_mesh_m4183687531_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_OnDestroy_m223902123_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_UpdateInitialMesh_m3583121261_MetadataUsageId;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var;
extern const uint32_t SpriteMeshInstance_UpdateCurrentMesh_m145774061_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_UpdateRenderers_m2089936899_MetadataUsageId;
extern const uint32_t SpriteMeshInstance_LateUpdate_m934550358_MetadataUsageId;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral3957048425;
extern const uint32_t SpriteMeshInstance_OnWillRenderObject_m587681222_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const uint32_t CharacterMotion_Start_m1593363961_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral922537089;
extern const uint32_t CharacterMotion_Update_m1870177380_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_t1800779281_m2109449193_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t CoinController_Awake_m1111392222_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m2517112845_RuntimeMethod_var;
extern const uint32_t CoinController_OnTriggerEnter2D_m2905873734_MetadataUsageId;
extern const uint32_t FollowCamera2D__ctor_m1049388504_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var;
extern const uint32_t FollowCamera2D_Start_m3962840092_MetadataUsageId;
extern const uint32_t FollowCamera2D_LateUpdate_m1034451288_MetadataUsageId;
extern const uint32_t Follow_LateUpdate_m215595299_MetadataUsageId;
extern const uint32_t Personagem__ctor_m1236315038_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var;
extern String_t* _stringLiteral1396832867;
extern const uint32_t Personagem_Awake_m1233854383_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3228161487;
extern String_t* _stringLiteral1169671306;
extern String_t* _stringLiteral3128803744;
extern String_t* _stringLiteral2154097237;
extern const uint32_t Personagem_FixedUpdate_m2796799114_MetadataUsageId;
extern String_t* _stringLiteral3556802456;
extern const uint32_t Personagem_Move_m1933571148_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1222920746;
extern String_t* _stringLiteral1514128375;
extern String_t* _stringLiteral4278381006;
extern String_t* _stringLiteral808263398;
extern const uint32_t Personagem_OnTriggerEnter2D_m4159617493_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992_RuntimeMethod_var;
extern String_t* _stringLiteral2368881920;
extern String_t* _stringLiteral1208260867;
extern const uint32_t Personagem_OnCollisionEnter2D_m2089781811_MetadataUsageId;
extern RuntimeClass* U3CdyingAnimationU3Ec__Iterator0_t276251559_il2cpp_TypeInfo_var;
extern const uint32_t Personagem_dyingAnimation_m2095675355_MetadataUsageId;
extern RuntimeClass* U3CcontinueGameU3Ec__Iterator1_t1070021004_il2cpp_TypeInfo_var;
extern const uint32_t Personagem_continueGame_m305075124_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CcontinueGameU3Ec__Iterator1_MoveNext_m1740114933_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CcontinueGameU3Ec__Iterator1_Reset_m3663176255_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var;
extern String_t* _stringLiteral1350712178;
extern const uint32_t U3CdyingAnimationU3Ec__Iterator0_MoveNext_m4174947813_MetadataUsageId;
extern const uint32_t U3CdyingAnimationU3Ec__Iterator0_Reset_m2503698900_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisPersonagem_t2484933062_m3028378119_RuntimeMethod_var;
extern const uint32_t PlayerInput_Awake_m3282777395_MetadataUsageId;
extern const uint32_t PlayerInput_Run_m1967769897_MetadataUsageId;
extern const uint32_t PlayerInput_Update_m3783425746_MetadataUsageId;
extern const uint32_t PlayerMovement_Awake_m4232364429_MetadataUsageId;
extern const uint32_t PlayerMovement_FixedUpdate_m2788581829_MetadataUsageId;
extern const uint32_t PlayerMovement_Move_m3300450923_MetadataUsageId;
extern const uint32_t ScrollingBackground_Start_m2940145547_MetadataUsageId;
extern const uint32_t ScrollingBackground_update_m3829282191_MetadataUsageId;
extern const uint32_t ScrollingBackground_ScrollLeft_m1688182640_MetadataUsageId;
extern const uint32_t ScrollingBackground_ScrollRight_m2373045031_MetadataUsageId;
extern const uint32_t ShipTrigger_Awake_m3156122597_MetadataUsageId;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral2366488617;
extern const uint32_t ShipTrigger_OnTriggerEnter2D_m4028286140_MetadataUsageId;
extern const uint32_t SkinnedMeshCombiner_get_materialPropertyBlock_m225435828_MetadataUsageId;
extern const uint32_t SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622_MetadataUsageId;
extern RuntimeClass* List_1_t777473367_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3427862769_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2460578222_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3289976585_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2885667311_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4265960327_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1616453381_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m286682117_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4073477735_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m173306783_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4110693992_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3022113929_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m885543020_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3787308655_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t245602842_m791335368_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3743205544_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2774846862_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m48270846_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m520311481_RuntimeMethod_var;
extern const uint32_t SkinnedMeshCombiner_Start_m2864758147_MetadataUsageId;
extern const uint32_t SkinnedMeshCombiner_OnWillRenderObject_m3058691989_MetadataUsageId;
extern const uint32_t SlidePlayer_Awake_m3338052965_MetadataUsageId;
extern RuntimeClass* List_1_t412733603_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m830205897_RuntimeMethod_var;
extern const uint32_t SpriteCycle__ctor_m819653663_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m4070698242_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m785256684_RuntimeMethod_var;
extern const uint32_t SpriteCycle_set_position_m3982230784_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteCycle_t1418532713_m2396289970_RuntimeMethod_var;
extern const uint32_t SpriteCycleParallax_Awake_m2826328948_MetadataUsageId;
extern const uint32_t SpriteCycleParallax_Start_m4168498358_MetadataUsageId;
extern const uint32_t SpriteCycleParallax_Update_m1428878624_MetadataUsageId;
extern const uint32_t SpringBone_Awake_m1302885438_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpringManager_t418696745_m3257063217_RuntimeMethod_var;
extern const uint32_t SpringBone_GetParentSpringManager_m374075626_MetadataUsageId;
extern const uint32_t SpringBone_Start_m349999897_MetadataUsageId;
extern const uint32_t SpringBone_UpdateSpring_m2224985026_MetadataUsageId;
extern const uint32_t SpringManager_LateUpdate_m309848293_MetadataUsageId;
extern String_t* _stringLiteral1394121689;
extern String_t* _stringLiteral3088203694;
extern const uint32_t SpringManager_UpdateParameters_m1005264700_MetadataUsageId;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4223137674;
extern const uint32_t WaypointProgressTracker_Start_m4115249106_MetadataUsageId;
extern const uint32_t WaypointProgressTracker_Update_m424770052_MetadataUsageId;
extern const uint32_t WaypointProgressTracker_OnDrawGizmos_m3598730726_MetadataUsageId;
struct ContactPoint2D_t3390240644 ;

struct Matrix4x4U5BU5D_t2302988098;
struct TransformU5BU5D_t807237628;
struct MaterialU5BU5D_t561872642;
struct SpriteMeshU5BU5D_t497469632;
struct Bone2DU5BU5D_t2775241867;
struct Vector3U5BU5D_t1718750761;
struct BoneWeightU5BU5D_t1776052410;
struct Vector2U5BU5D_t1457185986;
struct ColorU5BU5D_t941916413;
struct Int32U5BU5D_t385246372;
struct Collider2DU5BU5D_t1693969295;
struct SpriteMeshInstanceU5BU5D_t371572014;
struct CombineInstanceU5BU5D_t4267154537;
struct SpringColliderU5BU5D_t338282993;
struct SpringBoneU5BU5D_t636815781;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MATHUTILS_T2400618902_H
#define MATHUTILS_T2400618902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.MathUtils
struct  MathUtils_t2400618902  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHUTILS_T2400618902_H
#ifndef LIST_1_T3565654563_H
#define LIST_1_T3565654563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Anima2D.Ik2D>
struct  List_1_t3565654563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Ik2DU5BU5D_t1713990272* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3565654563, ____items_1)); }
	inline Ik2DU5BU5D_t1713990272* get__items_1() const { return ____items_1; }
	inline Ik2DU5BU5D_t1713990272** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Ik2DU5BU5D_t1713990272* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3565654563, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3565654563, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3565654563_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Ik2DU5BU5D_t1713990272* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3565654563_StaticFields, ___EmptyArray_4)); }
	inline Ik2DU5BU5D_t1713990272* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Ik2DU5BU5D_t1713990272** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Ik2DU5BU5D_t1713990272* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3565654563_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef LIST_1_T3354082258_H
#define LIST_1_T3354082258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>
struct  List_1_t3354082258  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverPoseU5BU5D_t2259833141* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3354082258, ____items_1)); }
	inline SolverPoseU5BU5D_t2259833141* get__items_1() const { return ____items_1; }
	inline SolverPoseU5BU5D_t2259833141** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverPoseU5BU5D_t2259833141* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3354082258, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3354082258, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3354082258_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SolverPoseU5BU5D_t2259833141* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3354082258_StaticFields, ___EmptyArray_4)); }
	inline SolverPoseU5BU5D_t2259833141* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SolverPoseU5BU5D_t2259833141** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SolverPoseU5BU5D_t2259833141* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3354082258_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TransformU5BU5D_t807237628* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ___EmptyArray_4)); }
	inline TransformU5BU5D_t807237628* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TransformU5BU5D_t807237628** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TransformU5BU5D_t807237628* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef LIST_1_T3427862769_H
#define LIST_1_T3427862769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.BoneWeight>
struct  List_1_t3427862769  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneWeightU5BU5D_t1776052410* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3427862769, ____items_1)); }
	inline BoneWeightU5BU5D_t1776052410* get__items_1() const { return ____items_1; }
	inline BoneWeightU5BU5D_t1776052410** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneWeightU5BU5D_t1776052410* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3427862769, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3427862769, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3427862769_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	BoneWeightU5BU5D_t1776052410* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3427862769_StaticFields, ___EmptyArray_4)); }
	inline BoneWeightU5BU5D_t1776052410* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline BoneWeightU5BU5D_t1776052410** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(BoneWeightU5BU5D_t1776052410* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3427862769_H
#ifndef LIST_1_T2460578222_H
#define LIST_1_T2460578222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct  List_1_t2460578222  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CombineInstanceU5BU5D_t4267154537* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2460578222, ____items_1)); }
	inline CombineInstanceU5BU5D_t4267154537* get__items_1() const { return ____items_1; }
	inline CombineInstanceU5BU5D_t4267154537** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CombineInstanceU5BU5D_t4267154537* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2460578222, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2460578222, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2460578222_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	CombineInstanceU5BU5D_t4267154537* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2460578222_StaticFields, ___EmptyArray_4)); }
	inline CombineInstanceU5BU5D_t4267154537* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline CombineInstanceU5BU5D_t4267154537** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(CombineInstanceU5BU5D_t4267154537* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2460578222_H
#ifndef LIST_1_T3289976585_H
#define LIST_1_T3289976585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Matrix4x4>
struct  List_1_t3289976585  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Matrix4x4U5BU5D_t2302988098* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3289976585, ____items_1)); }
	inline Matrix4x4U5BU5D_t2302988098* get__items_1() const { return ____items_1; }
	inline Matrix4x4U5BU5D_t2302988098** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Matrix4x4U5BU5D_t2302988098* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3289976585, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3289976585, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3289976585_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Matrix4x4U5BU5D_t2302988098* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3289976585_StaticFields, ___EmptyArray_4)); }
	inline Matrix4x4U5BU5D_t2302988098* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Matrix4x4U5BU5D_t2302988098** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Matrix4x4U5BU5D_t2302988098* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3289976585_H
#ifndef LIST_1_T412733603_H
#define LIST_1_T412733603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct  List_1_t412733603  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpriteRendererU5BU5D_t911335936* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t412733603, ____items_1)); }
	inline SpriteRendererU5BU5D_t911335936* get__items_1() const { return ____items_1; }
	inline SpriteRendererU5BU5D_t911335936** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpriteRendererU5BU5D_t911335936* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t412733603, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t412733603, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t412733603_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	SpriteRendererU5BU5D_t911335936* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t412733603_StaticFields, ___EmptyArray_4)); }
	inline SpriteRendererU5BU5D_t911335936* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline SpriteRendererU5BU5D_t911335936** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(SpriteRendererU5BU5D_t911335936* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T412733603_H
#ifndef U3CCONTINUEGAMEU3EC__ITERATOR1_T1070021004_H
#define U3CCONTINUEGAMEU3EC__ITERATOR1_T1070021004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Personagem/<continueGame>c__Iterator1
struct  U3CcontinueGameU3Ec__Iterator1_t1070021004  : public RuntimeObject
{
public:
	// System.Single Personagem/<continueGame>c__Iterator1::wait
	float ___wait_0;
	// Personagem Personagem/<continueGame>c__Iterator1::$this
	Personagem_t2484933062 * ___U24this_1;
	// System.Object Personagem/<continueGame>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean Personagem/<continueGame>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 Personagem/<continueGame>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_wait_0() { return static_cast<int32_t>(offsetof(U3CcontinueGameU3Ec__Iterator1_t1070021004, ___wait_0)); }
	inline float get_wait_0() const { return ___wait_0; }
	inline float* get_address_of_wait_0() { return &___wait_0; }
	inline void set_wait_0(float value)
	{
		___wait_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CcontinueGameU3Ec__Iterator1_t1070021004, ___U24this_1)); }
	inline Personagem_t2484933062 * get_U24this_1() const { return ___U24this_1; }
	inline Personagem_t2484933062 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Personagem_t2484933062 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CcontinueGameU3Ec__Iterator1_t1070021004, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CcontinueGameU3Ec__Iterator1_t1070021004, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CcontinueGameU3Ec__Iterator1_t1070021004, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCONTINUEGAMEU3EC__ITERATOR1_T1070021004_H
#ifndef U3CDYINGANIMATIONU3EC__ITERATOR0_T276251559_H
#define U3CDYINGANIMATIONU3EC__ITERATOR0_T276251559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Personagem/<dyingAnimation>c__Iterator0
struct  U3CdyingAnimationU3Ec__Iterator0_t276251559  : public RuntimeObject
{
public:
	// Personagem Personagem/<dyingAnimation>c__Iterator0::$this
	Personagem_t2484933062 * ___U24this_0;
	// System.Object Personagem/<dyingAnimation>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Personagem/<dyingAnimation>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Personagem/<dyingAnimation>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CdyingAnimationU3Ec__Iterator0_t276251559, ___U24this_0)); }
	inline Personagem_t2484933062 * get_U24this_0() const { return ___U24this_0; }
	inline Personagem_t2484933062 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Personagem_t2484933062 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CdyingAnimationU3Ec__Iterator0_t276251559, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CdyingAnimationU3Ec__Iterator0_t276251559, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CdyingAnimationU3Ec__Iterator0_t276251559, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDYINGANIMATIONU3EC__ITERATOR0_T276251559_H
#ifndef LIST_1_T242407092_H
#define LIST_1_T242407092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Anima2D.Bone2D>
struct  List_1_t242407092  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Bone2DU5BU5D_t2775241867* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t242407092, ____items_1)); }
	inline Bone2DU5BU5D_t2775241867* get__items_1() const { return ____items_1; }
	inline Bone2DU5BU5D_t2775241867** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Bone2DU5BU5D_t2775241867* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t242407092, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t242407092, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t242407092_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Bone2DU5BU5D_t2775241867* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t242407092_StaticFields, ___EmptyArray_4)); }
	inline Bone2DU5BU5D_t2775241867* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Bone2DU5BU5D_t2775241867** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Bone2DU5BU5D_t2775241867* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T242407092_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef BONEWEIGHT_T1955788027_H
#define BONEWEIGHT_T1955788027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoneWeight
struct  BoneWeight_t1955788027 
{
public:
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;

public:
	inline static int32_t get_offset_of_m_Weight0_0() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_Weight0_0)); }
	inline float get_m_Weight0_0() const { return ___m_Weight0_0; }
	inline float* get_address_of_m_Weight0_0() { return &___m_Weight0_0; }
	inline void set_m_Weight0_0(float value)
	{
		___m_Weight0_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight1_1() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_Weight1_1)); }
	inline float get_m_Weight1_1() const { return ___m_Weight1_1; }
	inline float* get_address_of_m_Weight1_1() { return &___m_Weight1_1; }
	inline void set_m_Weight1_1(float value)
	{
		___m_Weight1_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight2_2() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_Weight2_2)); }
	inline float get_m_Weight2_2() const { return ___m_Weight2_2; }
	inline float* get_address_of_m_Weight2_2() { return &___m_Weight2_2; }
	inline void set_m_Weight2_2(float value)
	{
		___m_Weight2_2 = value;
	}

	inline static int32_t get_offset_of_m_Weight3_3() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_Weight3_3)); }
	inline float get_m_Weight3_3() const { return ___m_Weight3_3; }
	inline float* get_address_of_m_Weight3_3() { return &___m_Weight3_3; }
	inline void set_m_Weight3_3(float value)
	{
		___m_Weight3_3 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex0_4() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_BoneIndex0_4)); }
	inline int32_t get_m_BoneIndex0_4() const { return ___m_BoneIndex0_4; }
	inline int32_t* get_address_of_m_BoneIndex0_4() { return &___m_BoneIndex0_4; }
	inline void set_m_BoneIndex0_4(int32_t value)
	{
		___m_BoneIndex0_4 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex1_5() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_BoneIndex1_5)); }
	inline int32_t get_m_BoneIndex1_5() const { return ___m_BoneIndex1_5; }
	inline int32_t* get_address_of_m_BoneIndex1_5() { return &___m_BoneIndex1_5; }
	inline void set_m_BoneIndex1_5(int32_t value)
	{
		___m_BoneIndex1_5 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex2_6() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_BoneIndex2_6)); }
	inline int32_t get_m_BoneIndex2_6() const { return ___m_BoneIndex2_6; }
	inline int32_t* get_address_of_m_BoneIndex2_6() { return &___m_BoneIndex2_6; }
	inline void set_m_BoneIndex2_6(int32_t value)
	{
		___m_BoneIndex2_6 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex3_7() { return static_cast<int32_t>(offsetof(BoneWeight_t1955788027, ___m_BoneIndex3_7)); }
	inline int32_t get_m_BoneIndex3_7() const { return ___m_BoneIndex3_7; }
	inline int32_t* get_address_of_m_BoneIndex3_7() { return &___m_BoneIndex3_7; }
	inline void set_m_BoneIndex3_7(int32_t value)
	{
		___m_BoneIndex3_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BONEWEIGHT_T1955788027_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef ROUTEPOINT_T3880028948_H
#define ROUTEPOINT_T3880028948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t3880028948 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t3722313464  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t3880028948, ___direction_1)); }
	inline Vector3_t3722313464  get_direction_1() const { return ___direction_1; }
	inline Vector3_t3722313464 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t3722313464  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T3880028948_H
#ifndef DIRECTION_T4168916094_H
#define DIRECTION_T4168916094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCamera.Direction
struct  Direction_t4168916094 
{
public:
	// System.Int32 CustomCamera.Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t4168916094, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTION_T4168916094_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEFLAGS_T4250555765_H
#ifndef ANIMATIONCURVE_T3046754366_H
#define ANIMATIONCURVE_T3046754366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationCurve
struct  AnimationCurve_t3046754366  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t3046754366, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t3046754366_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // ANIMATIONCURVE_T3046754366_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef COLLISION2D_T2842956331_H
#define COLLISION2D_T2842956331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision2D
struct  Collision2D_t2842956331  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_Contacts
	ContactPoint2DU5BU5D_t96683501* ___m_Contacts_4;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_6;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Contacts_4)); }
	inline ContactPoint2DU5BU5D_t96683501* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPoint2DU5BU5D_t96683501** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPoint2DU5BU5D_t96683501* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_5() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_RelativeVelocity_5)); }
	inline Vector2_t2156229523  get_m_RelativeVelocity_5() const { return ___m_RelativeVelocity_5; }
	inline Vector2_t2156229523 * get_address_of_m_RelativeVelocity_5() { return &___m_RelativeVelocity_5; }
	inline void set_m_RelativeVelocity_5(Vector2_t2156229523  value)
	{
		___m_RelativeVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_6() { return static_cast<int32_t>(offsetof(Collision2D_t2842956331, ___m_Enabled_6)); }
	inline int32_t get_m_Enabled_6() const { return ___m_Enabled_6; }
	inline int32_t* get_address_of_m_Enabled_6() { return &___m_Enabled_6; }
	inline void set_m_Enabled_6(int32_t value)
	{
		___m_Enabled_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t2842956331_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	ContactPoint2D_t3390240644 * ___m_Contacts_4;
	Vector2_t2156229523  ___m_RelativeVelocity_5;
	int32_t ___m_Enabled_6;
};
#endif // COLLISION2D_T2842956331_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef COMBINEINSTANCE_T988503480_H
#define COMBINEINSTANCE_T988503480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CombineInstance
struct  CombineInstance_t988503480 
{
public:
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_t1817901843  ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_t3319028937  ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_t3319028937  ___m_RealtimeLightmapScaleOffset_4;

public:
	inline static int32_t get_offset_of_m_MeshInstanceID_0() { return static_cast<int32_t>(offsetof(CombineInstance_t988503480, ___m_MeshInstanceID_0)); }
	inline int32_t get_m_MeshInstanceID_0() const { return ___m_MeshInstanceID_0; }
	inline int32_t* get_address_of_m_MeshInstanceID_0() { return &___m_MeshInstanceID_0; }
	inline void set_m_MeshInstanceID_0(int32_t value)
	{
		___m_MeshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_SubMeshIndex_1() { return static_cast<int32_t>(offsetof(CombineInstance_t988503480, ___m_SubMeshIndex_1)); }
	inline int32_t get_m_SubMeshIndex_1() const { return ___m_SubMeshIndex_1; }
	inline int32_t* get_address_of_m_SubMeshIndex_1() { return &___m_SubMeshIndex_1; }
	inline void set_m_SubMeshIndex_1(int32_t value)
	{
		___m_SubMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(CombineInstance_t988503480, ___m_Transform_2)); }
	inline Matrix4x4_t1817901843  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_t1817901843  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_LightmapScaleOffset_3() { return static_cast<int32_t>(offsetof(CombineInstance_t988503480, ___m_LightmapScaleOffset_3)); }
	inline Vector4_t3319028937  get_m_LightmapScaleOffset_3() const { return ___m_LightmapScaleOffset_3; }
	inline Vector4_t3319028937 * get_address_of_m_LightmapScaleOffset_3() { return &___m_LightmapScaleOffset_3; }
	inline void set_m_LightmapScaleOffset_3(Vector4_t3319028937  value)
	{
		___m_LightmapScaleOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_RealtimeLightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(CombineInstance_t988503480, ___m_RealtimeLightmapScaleOffset_4)); }
	inline Vector4_t3319028937  get_m_RealtimeLightmapScaleOffset_4() const { return ___m_RealtimeLightmapScaleOffset_4; }
	inline Vector4_t3319028937 * get_address_of_m_RealtimeLightmapScaleOffset_4() { return &___m_RealtimeLightmapScaleOffset_4; }
	inline void set_m_RealtimeLightmapScaleOffset_4(Vector4_t3319028937  value)
	{
		___m_RealtimeLightmapScaleOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMBINEINSTANCE_T988503480_H
#ifndef MATERIALPROPERTYBLOCK_T3213117958_H
#define MATERIALPROPERTYBLOCK_T3213117958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t3213117958  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t3213117958, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALPROPERTYBLOCK_T3213117958_H
#ifndef MIDPOINTROUNDING_T2283932191_H
#define MIDPOINTROUNDING_T2283932191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MidpointRounding
struct  MidpointRounding_t2283932191 
{
public:
	// System.Int32 System.MidpointRounding::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MidpointRounding_t2283932191, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIDPOINTROUNDING_T2283932191_H
#ifndef PROGRESSSTYLE_T3254572979_H
#define PROGRESSSTYLE_T3254572979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t3254572979 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3254572979, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROGRESSSTYLE_T3254572979_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef SOLVERPOSE_T1882007516_H
#define SOLVERPOSE_T1882007516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkSolver2D/SolverPose
struct  SolverPose_t1882007516  : public RuntimeObject
{
public:
	// Anima2D.Bone2D Anima2D.IkSolver2D/SolverPose::m_Bone
	Bone2D_t3065299646 * ___m_Bone_0;
	// UnityEngine.Transform Anima2D.IkSolver2D/SolverPose::m_BoneTransform
	Transform_t3600365921 * ___m_BoneTransform_1;
	// Anima2D.Bone2D Anima2D.IkSolver2D/SolverPose::m_CachedBone
	Bone2D_t3065299646 * ___m_CachedBone_2;
	// UnityEngine.Vector3 Anima2D.IkSolver2D/SolverPose::solverPosition
	Vector3_t3722313464  ___solverPosition_3;
	// UnityEngine.Quaternion Anima2D.IkSolver2D/SolverPose::solverRotation
	Quaternion_t2301928331  ___solverRotation_4;
	// UnityEngine.Quaternion Anima2D.IkSolver2D/SolverPose::defaultLocalRotation
	Quaternion_t2301928331  ___defaultLocalRotation_5;

public:
	inline static int32_t get_offset_of_m_Bone_0() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___m_Bone_0)); }
	inline Bone2D_t3065299646 * get_m_Bone_0() const { return ___m_Bone_0; }
	inline Bone2D_t3065299646 ** get_address_of_m_Bone_0() { return &___m_Bone_0; }
	inline void set_m_Bone_0(Bone2D_t3065299646 * value)
	{
		___m_Bone_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bone_0), value);
	}

	inline static int32_t get_offset_of_m_BoneTransform_1() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___m_BoneTransform_1)); }
	inline Transform_t3600365921 * get_m_BoneTransform_1() const { return ___m_BoneTransform_1; }
	inline Transform_t3600365921 ** get_address_of_m_BoneTransform_1() { return &___m_BoneTransform_1; }
	inline void set_m_BoneTransform_1(Transform_t3600365921 * value)
	{
		___m_BoneTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneTransform_1), value);
	}

	inline static int32_t get_offset_of_m_CachedBone_2() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___m_CachedBone_2)); }
	inline Bone2D_t3065299646 * get_m_CachedBone_2() const { return ___m_CachedBone_2; }
	inline Bone2D_t3065299646 ** get_address_of_m_CachedBone_2() { return &___m_CachedBone_2; }
	inline void set_m_CachedBone_2(Bone2D_t3065299646 * value)
	{
		___m_CachedBone_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedBone_2), value);
	}

	inline static int32_t get_offset_of_solverPosition_3() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___solverPosition_3)); }
	inline Vector3_t3722313464  get_solverPosition_3() const { return ___solverPosition_3; }
	inline Vector3_t3722313464 * get_address_of_solverPosition_3() { return &___solverPosition_3; }
	inline void set_solverPosition_3(Vector3_t3722313464  value)
	{
		___solverPosition_3 = value;
	}

	inline static int32_t get_offset_of_solverRotation_4() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___solverRotation_4)); }
	inline Quaternion_t2301928331  get_solverRotation_4() const { return ___solverRotation_4; }
	inline Quaternion_t2301928331 * get_address_of_solverRotation_4() { return &___solverRotation_4; }
	inline void set_solverRotation_4(Quaternion_t2301928331  value)
	{
		___solverRotation_4 = value;
	}

	inline static int32_t get_offset_of_defaultLocalRotation_5() { return static_cast<int32_t>(offsetof(SolverPose_t1882007516, ___defaultLocalRotation_5)); }
	inline Quaternion_t2301928331  get_defaultLocalRotation_5() const { return ___defaultLocalRotation_5; }
	inline Quaternion_t2301928331 * get_address_of_defaultLocalRotation_5() { return &___defaultLocalRotation_5; }
	inline void set_defaultLocalRotation_5(Quaternion_t2301928331  value)
	{
		___defaultLocalRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERPOSE_T1882007516_H
#ifndef POSEENTRY_T139858374_H
#define POSEENTRY_T139858374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.Pose/PoseEntry
struct  PoseEntry_t139858374  : public RuntimeObject
{
public:
	// System.String Anima2D.Pose/PoseEntry::path
	String_t* ___path_0;
	// UnityEngine.Vector3 Anima2D.Pose/PoseEntry::localPosition
	Vector3_t3722313464  ___localPosition_1;
	// UnityEngine.Quaternion Anima2D.Pose/PoseEntry::localRotation
	Quaternion_t2301928331  ___localRotation_2;
	// UnityEngine.Vector3 Anima2D.Pose/PoseEntry::localScale
	Vector3_t3722313464  ___localScale_3;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(PoseEntry_t139858374, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((&___path_0), value);
	}

	inline static int32_t get_offset_of_localPosition_1() { return static_cast<int32_t>(offsetof(PoseEntry_t139858374, ___localPosition_1)); }
	inline Vector3_t3722313464  get_localPosition_1() const { return ___localPosition_1; }
	inline Vector3_t3722313464 * get_address_of_localPosition_1() { return &___localPosition_1; }
	inline void set_localPosition_1(Vector3_t3722313464  value)
	{
		___localPosition_1 = value;
	}

	inline static int32_t get_offset_of_localRotation_2() { return static_cast<int32_t>(offsetof(PoseEntry_t139858374, ___localRotation_2)); }
	inline Quaternion_t2301928331  get_localRotation_2() const { return ___localRotation_2; }
	inline Quaternion_t2301928331 * get_address_of_localRotation_2() { return &___localRotation_2; }
	inline void set_localRotation_2(Quaternion_t2301928331  value)
	{
		___localRotation_2 = value;
	}

	inline static int32_t get_offset_of_localScale_3() { return static_cast<int32_t>(offsetof(PoseEntry_t139858374, ___localScale_3)); }
	inline Vector3_t3722313464  get_localScale_3() const { return ___localScale_3; }
	inline Vector3_t3722313464 * get_address_of_localScale_3() { return &___localScale_3; }
	inline void set_localScale_3(Vector3_t3722313464  value)
	{
		___localScale_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEENTRY_T139858374_H
#ifndef IKSOLVER2D_T3375840577_H
#define IKSOLVER2D_T3375840577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkSolver2D
struct  IkSolver2D_t3375840577  : public RuntimeObject
{
public:
	// Anima2D.Bone2D Anima2D.IkSolver2D::m_RootBone
	Bone2D_t3065299646 * ___m_RootBone_0;
	// UnityEngine.Transform Anima2D.IkSolver2D::m_RootBoneTransform
	Transform_t3600365921 * ___m_RootBoneTransform_1;
	// System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose> Anima2D.IkSolver2D::m_SolverPoses
	List_1_t3354082258 * ___m_SolverPoses_2;
	// System.Single Anima2D.IkSolver2D::m_Weight
	float ___m_Weight_3;
	// System.Boolean Anima2D.IkSolver2D::m_RestoreDefaultPose
	bool ___m_RestoreDefaultPose_4;
	// Anima2D.Bone2D Anima2D.IkSolver2D::m_CachedRootBone
	Bone2D_t3065299646 * ___m_CachedRootBone_5;
	// UnityEngine.Vector3 Anima2D.IkSolver2D::targetPosition
	Vector3_t3722313464  ___targetPosition_6;

public:
	inline static int32_t get_offset_of_m_RootBone_0() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_RootBone_0)); }
	inline Bone2D_t3065299646 * get_m_RootBone_0() const { return ___m_RootBone_0; }
	inline Bone2D_t3065299646 ** get_address_of_m_RootBone_0() { return &___m_RootBone_0; }
	inline void set_m_RootBone_0(Bone2D_t3065299646 * value)
	{
		___m_RootBone_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RootBone_0), value);
	}

	inline static int32_t get_offset_of_m_RootBoneTransform_1() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_RootBoneTransform_1)); }
	inline Transform_t3600365921 * get_m_RootBoneTransform_1() const { return ___m_RootBoneTransform_1; }
	inline Transform_t3600365921 ** get_address_of_m_RootBoneTransform_1() { return &___m_RootBoneTransform_1; }
	inline void set_m_RootBoneTransform_1(Transform_t3600365921 * value)
	{
		___m_RootBoneTransform_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RootBoneTransform_1), value);
	}

	inline static int32_t get_offset_of_m_SolverPoses_2() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_SolverPoses_2)); }
	inline List_1_t3354082258 * get_m_SolverPoses_2() const { return ___m_SolverPoses_2; }
	inline List_1_t3354082258 ** get_address_of_m_SolverPoses_2() { return &___m_SolverPoses_2; }
	inline void set_m_SolverPoses_2(List_1_t3354082258 * value)
	{
		___m_SolverPoses_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SolverPoses_2), value);
	}

	inline static int32_t get_offset_of_m_Weight_3() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_Weight_3)); }
	inline float get_m_Weight_3() const { return ___m_Weight_3; }
	inline float* get_address_of_m_Weight_3() { return &___m_Weight_3; }
	inline void set_m_Weight_3(float value)
	{
		___m_Weight_3 = value;
	}

	inline static int32_t get_offset_of_m_RestoreDefaultPose_4() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_RestoreDefaultPose_4)); }
	inline bool get_m_RestoreDefaultPose_4() const { return ___m_RestoreDefaultPose_4; }
	inline bool* get_address_of_m_RestoreDefaultPose_4() { return &___m_RestoreDefaultPose_4; }
	inline void set_m_RestoreDefaultPose_4(bool value)
	{
		___m_RestoreDefaultPose_4 = value;
	}

	inline static int32_t get_offset_of_m_CachedRootBone_5() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___m_CachedRootBone_5)); }
	inline Bone2D_t3065299646 * get_m_CachedRootBone_5() const { return ___m_CachedRootBone_5; }
	inline Bone2D_t3065299646 ** get_address_of_m_CachedRootBone_5() { return &___m_CachedRootBone_5; }
	inline void set_m_CachedRootBone_5(Bone2D_t3065299646 * value)
	{
		___m_CachedRootBone_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedRootBone_5), value);
	}

	inline static int32_t get_offset_of_targetPosition_6() { return static_cast<int32_t>(offsetof(IkSolver2D_t3375840577, ___targetPosition_6)); }
	inline Vector3_t3722313464  get_targetPosition_6() const { return ___targetPosition_6; }
	inline Vector3_t3722313464 * get_address_of_targetPosition_6() { return &___targetPosition_6; }
	inline void set_targetPosition_6(Vector3_t3722313464  value)
	{
		___targetPosition_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKSOLVER2D_T3375840577_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef IKSOLVER2DCCD_T3651796268_H
#define IKSOLVER2DCCD_T3651796268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkSolver2DCCD
struct  IkSolver2DCCD_t3651796268  : public IkSolver2D_t3375840577
{
public:
	// System.Int32 Anima2D.IkSolver2DCCD::iterations
	int32_t ___iterations_7;
	// System.Single Anima2D.IkSolver2DCCD::damping
	float ___damping_8;

public:
	inline static int32_t get_offset_of_iterations_7() { return static_cast<int32_t>(offsetof(IkSolver2DCCD_t3651796268, ___iterations_7)); }
	inline int32_t get_iterations_7() const { return ___iterations_7; }
	inline int32_t* get_address_of_iterations_7() { return &___iterations_7; }
	inline void set_iterations_7(int32_t value)
	{
		___iterations_7 = value;
	}

	inline static int32_t get_offset_of_damping_8() { return static_cast<int32_t>(offsetof(IkSolver2DCCD_t3651796268, ___damping_8)); }
	inline float get_damping_8() const { return ___damping_8; }
	inline float* get_address_of_damping_8() { return &___damping_8; }
	inline void set_damping_8(float value)
	{
		___damping_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKSOLVER2DCCD_T3651796268_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef IKSOLVER2DLIMB_T33506378_H
#define IKSOLVER2DLIMB_T33506378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkSolver2DLimb
struct  IkSolver2DLimb_t33506378  : public IkSolver2D_t3375840577
{
public:
	// System.Boolean Anima2D.IkSolver2DLimb::flip
	bool ___flip_7;

public:
	inline static int32_t get_offset_of_flip_7() { return static_cast<int32_t>(offsetof(IkSolver2DLimb_t33506378, ___flip_7)); }
	inline bool get_flip_7() const { return ___flip_7; }
	inline bool* get_address_of_flip_7() { return &___flip_7; }
	inline void set_flip_7(bool value)
	{
		___flip_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKSOLVER2DLIMB_T33506378_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef POSE_T3511490975_H
#define POSE_T3511490975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.Pose
struct  Pose_t3511490975  : public ScriptableObject_t2528358522
{
public:
	// System.Collections.Generic.List`1<Anima2D.Pose/PoseEntry> Anima2D.Pose::m_PoseEntries
	List_1_t1611933116 * ___m_PoseEntries_2;

public:
	inline static int32_t get_offset_of_m_PoseEntries_2() { return static_cast<int32_t>(offsetof(Pose_t3511490975, ___m_PoseEntries_2)); }
	inline List_1_t1611933116 * get_m_PoseEntries_2() const { return ___m_PoseEntries_2; }
	inline List_1_t1611933116 ** get_address_of_m_PoseEntries_2() { return &___m_PoseEntries_2; }
	inline void set_m_PoseEntries_2(List_1_t1611933116 * value)
	{
		___m_PoseEntries_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PoseEntries_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T3511490975_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef SPRITEMESH_T4133440749_H
#define SPRITEMESH_T4133440749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.SpriteMesh
struct  SpriteMesh_t4133440749  : public ScriptableObject_t2528358522
{
public:
	// System.Int32 Anima2D.SpriteMesh::m_ApiVersion
	int32_t ___m_ApiVersion_3;
	// UnityEngine.Sprite Anima2D.SpriteMesh::m_Sprite
	Sprite_t280657092 * ___m_Sprite_4;
	// UnityEngine.Mesh Anima2D.SpriteMesh::m_SharedMesh
	Mesh_t3648964284 * ___m_SharedMesh_5;
	// UnityEngine.Material[] Anima2D.SpriteMesh::m_SharedMaterials
	MaterialU5BU5D_t561872642* ___m_SharedMaterials_6;

public:
	inline static int32_t get_offset_of_m_ApiVersion_3() { return static_cast<int32_t>(offsetof(SpriteMesh_t4133440749, ___m_ApiVersion_3)); }
	inline int32_t get_m_ApiVersion_3() const { return ___m_ApiVersion_3; }
	inline int32_t* get_address_of_m_ApiVersion_3() { return &___m_ApiVersion_3; }
	inline void set_m_ApiVersion_3(int32_t value)
	{
		___m_ApiVersion_3 = value;
	}

	inline static int32_t get_offset_of_m_Sprite_4() { return static_cast<int32_t>(offsetof(SpriteMesh_t4133440749, ___m_Sprite_4)); }
	inline Sprite_t280657092 * get_m_Sprite_4() const { return ___m_Sprite_4; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_4() { return &___m_Sprite_4; }
	inline void set_m_Sprite_4(Sprite_t280657092 * value)
	{
		___m_Sprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_4), value);
	}

	inline static int32_t get_offset_of_m_SharedMesh_5() { return static_cast<int32_t>(offsetof(SpriteMesh_t4133440749, ___m_SharedMesh_5)); }
	inline Mesh_t3648964284 * get_m_SharedMesh_5() const { return ___m_SharedMesh_5; }
	inline Mesh_t3648964284 ** get_address_of_m_SharedMesh_5() { return &___m_SharedMesh_5; }
	inline void set_m_SharedMesh_5(Mesh_t3648964284 * value)
	{
		___m_SharedMesh_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedMesh_5), value);
	}

	inline static int32_t get_offset_of_m_SharedMaterials_6() { return static_cast<int32_t>(offsetof(SpriteMesh_t4133440749, ___m_SharedMaterials_6)); }
	inline MaterialU5BU5D_t561872642* get_m_SharedMaterials_6() const { return ___m_SharedMaterials_6; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_SharedMaterials_6() { return &___m_SharedMaterials_6; }
	inline void set_m_SharedMaterials_6(MaterialU5BU5D_t561872642* value)
	{
		___m_SharedMaterials_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedMaterials_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEMESH_T4133440749_H
#ifndef PARTICLESYSTEM_T1800779281_H
#define PARTICLESYSTEM_T1800779281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t1800779281  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T1800779281_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef SKINNEDMESHRENDERER_T245602842_H
#define SKINNEDMESHRENDERER_T245602842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkinnedMeshRenderer
struct  SkinnedMeshRenderer_t245602842  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINNEDMESHRENDERER_T245602842_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef SPRINGCOLLIDER_T2692606160_H
#define SPRINGCOLLIDER_T2692606160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChan.SpringCollider
struct  SpringCollider_t2692606160  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityChan.SpringCollider::radius
	float ___radius_2;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(SpringCollider_t2692606160, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGCOLLIDER_T2692606160_H
#ifndef SPRINGMANAGER_T418696745_H
#define SPRINGMANAGER_T418696745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChan.SpringManager
struct  SpringManager_t418696745  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityChan.SpringManager::dynamicRatio
	float ___dynamicRatio_2;
	// System.Single UnityChan.SpringManager::stiffnessForce
	float ___stiffnessForce_3;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::stiffnessCurve
	AnimationCurve_t3046754366 * ___stiffnessCurve_4;
	// System.Single UnityChan.SpringManager::dragForce
	float ___dragForce_5;
	// UnityEngine.AnimationCurve UnityChan.SpringManager::dragCurve
	AnimationCurve_t3046754366 * ___dragCurve_6;
	// UnityChan.SpringBone[] UnityChan.SpringManager::springBones
	SpringBoneU5BU5D_t636815781* ___springBones_7;

public:
	inline static int32_t get_offset_of_dynamicRatio_2() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___dynamicRatio_2)); }
	inline float get_dynamicRatio_2() const { return ___dynamicRatio_2; }
	inline float* get_address_of_dynamicRatio_2() { return &___dynamicRatio_2; }
	inline void set_dynamicRatio_2(float value)
	{
		___dynamicRatio_2 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_3() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___stiffnessForce_3)); }
	inline float get_stiffnessForce_3() const { return ___stiffnessForce_3; }
	inline float* get_address_of_stiffnessForce_3() { return &___stiffnessForce_3; }
	inline void set_stiffnessForce_3(float value)
	{
		___stiffnessForce_3 = value;
	}

	inline static int32_t get_offset_of_stiffnessCurve_4() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___stiffnessCurve_4)); }
	inline AnimationCurve_t3046754366 * get_stiffnessCurve_4() const { return ___stiffnessCurve_4; }
	inline AnimationCurve_t3046754366 ** get_address_of_stiffnessCurve_4() { return &___stiffnessCurve_4; }
	inline void set_stiffnessCurve_4(AnimationCurve_t3046754366 * value)
	{
		___stiffnessCurve_4 = value;
		Il2CppCodeGenWriteBarrier((&___stiffnessCurve_4), value);
	}

	inline static int32_t get_offset_of_dragForce_5() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___dragForce_5)); }
	inline float get_dragForce_5() const { return ___dragForce_5; }
	inline float* get_address_of_dragForce_5() { return &___dragForce_5; }
	inline void set_dragForce_5(float value)
	{
		___dragForce_5 = value;
	}

	inline static int32_t get_offset_of_dragCurve_6() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___dragCurve_6)); }
	inline AnimationCurve_t3046754366 * get_dragCurve_6() const { return ___dragCurve_6; }
	inline AnimationCurve_t3046754366 ** get_address_of_dragCurve_6() { return &___dragCurve_6; }
	inline void set_dragCurve_6(AnimationCurve_t3046754366 * value)
	{
		___dragCurve_6 = value;
		Il2CppCodeGenWriteBarrier((&___dragCurve_6), value);
	}

	inline static int32_t get_offset_of_springBones_7() { return static_cast<int32_t>(offsetof(SpringManager_t418696745, ___springBones_7)); }
	inline SpringBoneU5BU5D_t636815781* get_springBones_7() const { return ___springBones_7; }
	inline SpringBoneU5BU5D_t636815781** get_address_of_springBones_7() { return &___springBones_7; }
	inline void set_springBones_7(SpringBoneU5BU5D_t636815781* value)
	{
		___springBones_7 = value;
		Il2CppCodeGenWriteBarrier((&___springBones_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGMANAGER_T418696745_H
#ifndef SPRINGBONE_T3999458348_H
#define SPRINGBONE_T3999458348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChan.SpringBone
struct  SpringBone_t3999458348  : public MonoBehaviour_t3962482529
{
public:
	// System.Single UnityChan.SpringBone::radius
	float ___radius_2;
	// System.Boolean UnityChan.SpringBone::isUseEachBoneForceSettings
	bool ___isUseEachBoneForceSettings_3;
	// System.Single UnityChan.SpringBone::stiffnessForce
	float ___stiffnessForce_4;
	// System.Single UnityChan.SpringBone::dragForce
	float ___dragForce_5;
	// UnityEngine.Vector3 UnityChan.SpringBone::springForce
	Vector3_t3722313464  ___springForce_6;
	// UnityChan.SpringCollider[] UnityChan.SpringBone::colliders
	SpringColliderU5BU5D_t338282993* ___colliders_7;
	// System.Single UnityChan.SpringBone::threshold
	float ___threshold_8;
	// System.Boolean UnityChan.SpringBone::isAnimated
	bool ___isAnimated_9;
	// System.Single UnityChan.SpringBone::springLength
	float ___springLength_10;
	// UnityEngine.Quaternion UnityChan.SpringBone::localRotation
	Quaternion_t2301928331  ___localRotation_11;
	// UnityEngine.Transform UnityChan.SpringBone::trs
	Transform_t3600365921 * ___trs_12;
	// UnityEngine.Vector3 UnityChan.SpringBone::currTipPos
	Vector3_t3722313464  ___currTipPos_13;
	// UnityEngine.Vector3 UnityChan.SpringBone::prevTipPos
	Vector3_t3722313464  ___prevTipPos_14;
	// UnityEngine.Transform UnityChan.SpringBone::org
	Transform_t3600365921 * ___org_15;
	// UnityChan.SpringManager UnityChan.SpringBone::managerRef
	SpringManager_t418696745 * ___managerRef_16;
	// Anima2D.Bone2D UnityChan.SpringBone::m_Bone
	Bone2D_t3065299646 * ___m_Bone_17;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_isUseEachBoneForceSettings_3() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___isUseEachBoneForceSettings_3)); }
	inline bool get_isUseEachBoneForceSettings_3() const { return ___isUseEachBoneForceSettings_3; }
	inline bool* get_address_of_isUseEachBoneForceSettings_3() { return &___isUseEachBoneForceSettings_3; }
	inline void set_isUseEachBoneForceSettings_3(bool value)
	{
		___isUseEachBoneForceSettings_3 = value;
	}

	inline static int32_t get_offset_of_stiffnessForce_4() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___stiffnessForce_4)); }
	inline float get_stiffnessForce_4() const { return ___stiffnessForce_4; }
	inline float* get_address_of_stiffnessForce_4() { return &___stiffnessForce_4; }
	inline void set_stiffnessForce_4(float value)
	{
		___stiffnessForce_4 = value;
	}

	inline static int32_t get_offset_of_dragForce_5() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___dragForce_5)); }
	inline float get_dragForce_5() const { return ___dragForce_5; }
	inline float* get_address_of_dragForce_5() { return &___dragForce_5; }
	inline void set_dragForce_5(float value)
	{
		___dragForce_5 = value;
	}

	inline static int32_t get_offset_of_springForce_6() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___springForce_6)); }
	inline Vector3_t3722313464  get_springForce_6() const { return ___springForce_6; }
	inline Vector3_t3722313464 * get_address_of_springForce_6() { return &___springForce_6; }
	inline void set_springForce_6(Vector3_t3722313464  value)
	{
		___springForce_6 = value;
	}

	inline static int32_t get_offset_of_colliders_7() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___colliders_7)); }
	inline SpringColliderU5BU5D_t338282993* get_colliders_7() const { return ___colliders_7; }
	inline SpringColliderU5BU5D_t338282993** get_address_of_colliders_7() { return &___colliders_7; }
	inline void set_colliders_7(SpringColliderU5BU5D_t338282993* value)
	{
		___colliders_7 = value;
		Il2CppCodeGenWriteBarrier((&___colliders_7), value);
	}

	inline static int32_t get_offset_of_threshold_8() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___threshold_8)); }
	inline float get_threshold_8() const { return ___threshold_8; }
	inline float* get_address_of_threshold_8() { return &___threshold_8; }
	inline void set_threshold_8(float value)
	{
		___threshold_8 = value;
	}

	inline static int32_t get_offset_of_isAnimated_9() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___isAnimated_9)); }
	inline bool get_isAnimated_9() const { return ___isAnimated_9; }
	inline bool* get_address_of_isAnimated_9() { return &___isAnimated_9; }
	inline void set_isAnimated_9(bool value)
	{
		___isAnimated_9 = value;
	}

	inline static int32_t get_offset_of_springLength_10() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___springLength_10)); }
	inline float get_springLength_10() const { return ___springLength_10; }
	inline float* get_address_of_springLength_10() { return &___springLength_10; }
	inline void set_springLength_10(float value)
	{
		___springLength_10 = value;
	}

	inline static int32_t get_offset_of_localRotation_11() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___localRotation_11)); }
	inline Quaternion_t2301928331  get_localRotation_11() const { return ___localRotation_11; }
	inline Quaternion_t2301928331 * get_address_of_localRotation_11() { return &___localRotation_11; }
	inline void set_localRotation_11(Quaternion_t2301928331  value)
	{
		___localRotation_11 = value;
	}

	inline static int32_t get_offset_of_trs_12() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___trs_12)); }
	inline Transform_t3600365921 * get_trs_12() const { return ___trs_12; }
	inline Transform_t3600365921 ** get_address_of_trs_12() { return &___trs_12; }
	inline void set_trs_12(Transform_t3600365921 * value)
	{
		___trs_12 = value;
		Il2CppCodeGenWriteBarrier((&___trs_12), value);
	}

	inline static int32_t get_offset_of_currTipPos_13() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___currTipPos_13)); }
	inline Vector3_t3722313464  get_currTipPos_13() const { return ___currTipPos_13; }
	inline Vector3_t3722313464 * get_address_of_currTipPos_13() { return &___currTipPos_13; }
	inline void set_currTipPos_13(Vector3_t3722313464  value)
	{
		___currTipPos_13 = value;
	}

	inline static int32_t get_offset_of_prevTipPos_14() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___prevTipPos_14)); }
	inline Vector3_t3722313464  get_prevTipPos_14() const { return ___prevTipPos_14; }
	inline Vector3_t3722313464 * get_address_of_prevTipPos_14() { return &___prevTipPos_14; }
	inline void set_prevTipPos_14(Vector3_t3722313464  value)
	{
		___prevTipPos_14 = value;
	}

	inline static int32_t get_offset_of_org_15() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___org_15)); }
	inline Transform_t3600365921 * get_org_15() const { return ___org_15; }
	inline Transform_t3600365921 ** get_address_of_org_15() { return &___org_15; }
	inline void set_org_15(Transform_t3600365921 * value)
	{
		___org_15 = value;
		Il2CppCodeGenWriteBarrier((&___org_15), value);
	}

	inline static int32_t get_offset_of_managerRef_16() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___managerRef_16)); }
	inline SpringManager_t418696745 * get_managerRef_16() const { return ___managerRef_16; }
	inline SpringManager_t418696745 ** get_address_of_managerRef_16() { return &___managerRef_16; }
	inline void set_managerRef_16(SpringManager_t418696745 * value)
	{
		___managerRef_16 = value;
		Il2CppCodeGenWriteBarrier((&___managerRef_16), value);
	}

	inline static int32_t get_offset_of_m_Bone_17() { return static_cast<int32_t>(offsetof(SpringBone_t3999458348, ___m_Bone_17)); }
	inline Bone2D_t3065299646 * get_m_Bone_17() const { return ___m_Bone_17; }
	inline Bone2D_t3065299646 ** get_address_of_m_Bone_17() { return &___m_Bone_17; }
	inline void set_m_Bone_17(Bone2D_t3065299646 * value)
	{
		___m_Bone_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bone_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRINGBONE_T3999458348_H
#ifndef SPRITECYCLEPARALLAX_T2394620404_H
#define SPRITECYCLEPARALLAX_T2394620404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteCycleParallax
struct  SpriteCycleParallax_t2394620404  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform SpriteCycleParallax::target
	Transform_t3600365921 * ___target_2;
	// UnityEngine.Vector2 SpriteCycleParallax::factor
	Vector2_t2156229523  ___factor_3;
	// SpriteCycle SpriteCycleParallax::spriteCicle
	SpriteCycle_t1418532713 * ___spriteCicle_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SpriteCycleParallax_t2394620404, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_factor_3() { return static_cast<int32_t>(offsetof(SpriteCycleParallax_t2394620404, ___factor_3)); }
	inline Vector2_t2156229523  get_factor_3() const { return ___factor_3; }
	inline Vector2_t2156229523 * get_address_of_factor_3() { return &___factor_3; }
	inline void set_factor_3(Vector2_t2156229523  value)
	{
		___factor_3 = value;
	}

	inline static int32_t get_offset_of_spriteCicle_4() { return static_cast<int32_t>(offsetof(SpriteCycleParallax_t2394620404, ___spriteCicle_4)); }
	inline SpriteCycle_t1418532713 * get_spriteCicle_4() const { return ___spriteCicle_4; }
	inline SpriteCycle_t1418532713 ** get_address_of_spriteCicle_4() { return &___spriteCicle_4; }
	inline void set_spriteCicle_4(SpriteCycle_t1418532713 * value)
	{
		___spriteCicle_4 = value;
		Il2CppCodeGenWriteBarrier((&___spriteCicle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITECYCLEPARALLAX_T2394620404_H
#ifndef SLIDEPLAYER_T280460050_H
#define SLIDEPLAYER_T280460050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SlidePlayer
struct  SlidePlayer_t280460050  : public MonoBehaviour_t3962482529
{
public:
	// Personagem SlidePlayer::personagem
	Personagem_t2484933062 * ___personagem_2;

public:
	inline static int32_t get_offset_of_personagem_2() { return static_cast<int32_t>(offsetof(SlidePlayer_t280460050, ___personagem_2)); }
	inline Personagem_t2484933062 * get_personagem_2() const { return ___personagem_2; }
	inline Personagem_t2484933062 ** get_address_of_personagem_2() { return &___personagem_2; }
	inline void set_personagem_2(Personagem_t2484933062 * value)
	{
		___personagem_2 = value;
		Il2CppCodeGenWriteBarrier((&___personagem_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDEPLAYER_T280460050_H
#ifndef SPRITECYCLE_T1418532713_H
#define SPRITECYCLE_T1418532713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpriteCycle
struct  SpriteCycle_t1418532713  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> SpriteCycle::spriteRenderers
	List_1_t412733603 * ___spriteRenderers_2;
	// System.Single SpriteCycle::offset
	float ___offset_3;
	// System.Single SpriteCycle::totalWidth
	float ___totalWidth_4;
	// System.Single SpriteCycle::mPosition
	float ___mPosition_5;

public:
	inline static int32_t get_offset_of_spriteRenderers_2() { return static_cast<int32_t>(offsetof(SpriteCycle_t1418532713, ___spriteRenderers_2)); }
	inline List_1_t412733603 * get_spriteRenderers_2() const { return ___spriteRenderers_2; }
	inline List_1_t412733603 ** get_address_of_spriteRenderers_2() { return &___spriteRenderers_2; }
	inline void set_spriteRenderers_2(List_1_t412733603 * value)
	{
		___spriteRenderers_2 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderers_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(SpriteCycle_t1418532713, ___offset_3)); }
	inline float get_offset_3() const { return ___offset_3; }
	inline float* get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(float value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_totalWidth_4() { return static_cast<int32_t>(offsetof(SpriteCycle_t1418532713, ___totalWidth_4)); }
	inline float get_totalWidth_4() const { return ___totalWidth_4; }
	inline float* get_address_of_totalWidth_4() { return &___totalWidth_4; }
	inline void set_totalWidth_4(float value)
	{
		___totalWidth_4 = value;
	}

	inline static int32_t get_offset_of_mPosition_5() { return static_cast<int32_t>(offsetof(SpriteCycle_t1418532713, ___mPosition_5)); }
	inline float get_mPosition_5() const { return ___mPosition_5; }
	inline float* get_address_of_mPosition_5() { return &___mPosition_5; }
	inline void set_mPosition_5(float value)
	{
		___mPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITECYCLE_T1418532713_H
#ifndef WAYPOINTPROGRESSTRACKER_T1841386251_H
#define WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t1841386251  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t445075330 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t3880028948  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t3600365921 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t3722313464  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___circuit_2)); }
	inline WaypointCircuit_t445075330 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t445075330 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t445075330 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_2), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t3880028948  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t3880028948 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t3880028948  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t3880028948  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t3880028948 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t3880028948  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t3880028948  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t3880028948 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t3880028948  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___target_12)); }
	inline Transform_t3600365921 * get_target_12() const { return ___target_12; }
	inline Transform_t3600365921 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t3600365921 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((&___target_12), value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___lastPosition_15)); }
	inline Vector3_t3722313464  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t3722313464 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t3722313464  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1841386251, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T1841386251_H
#ifndef WAYPOINTCIRCUIT_T445075330_H
#define WAYPOINTCIRCUIT_T445075330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t445075330  : public MonoBehaviour_t3962482529
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t2584574554 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t1718750761* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t1444911251* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_12;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t3722313464  ___P0_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t3722313464  ___P1_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t3722313464  ___P2_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t3722313464  ___P3_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___waypointList_2)); }
	inline WaypointList_t2584574554 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t2584574554 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t2584574554 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier((&___waypointList_2), value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___points_5)); }
	inline Vector3U5BU5D_t1718750761* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t1718750761** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t1718750761* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((&___points_5), value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___distances_6)); }
	inline SingleU5BU5D_t1444911251* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t1444911251** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t1444911251* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier((&___distances_6), value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___U3CLengthU3Ek__BackingField_8)); }
	inline float get_U3CLengthU3Ek__BackingField_8() const { return ___U3CLengthU3Ek__BackingField_8; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_8() { return &___U3CLengthU3Ek__BackingField_8; }
	inline void set_U3CLengthU3Ek__BackingField_8(float value)
	{
		___U3CLengthU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_p0n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p0n_9)); }
	inline int32_t get_p0n_9() const { return ___p0n_9; }
	inline int32_t* get_address_of_p0n_9() { return &___p0n_9; }
	inline void set_p0n_9(int32_t value)
	{
		___p0n_9 = value;
	}

	inline static int32_t get_offset_of_p1n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p1n_10)); }
	inline int32_t get_p1n_10() const { return ___p1n_10; }
	inline int32_t* get_address_of_p1n_10() { return &___p1n_10; }
	inline void set_p1n_10(int32_t value)
	{
		___p1n_10 = value;
	}

	inline static int32_t get_offset_of_p2n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p2n_11)); }
	inline int32_t get_p2n_11() const { return ___p2n_11; }
	inline int32_t* get_address_of_p2n_11() { return &___p2n_11; }
	inline void set_p2n_11(int32_t value)
	{
		___p2n_11 = value;
	}

	inline static int32_t get_offset_of_p3n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___p3n_12)); }
	inline int32_t get_p3n_12() const { return ___p3n_12; }
	inline int32_t* get_address_of_p3n_12() { return &___p3n_12; }
	inline void set_p3n_12(int32_t value)
	{
		___p3n_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___i_13)); }
	inline float get_i_13() const { return ___i_13; }
	inline float* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(float value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_P0_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P0_14)); }
	inline Vector3_t3722313464  get_P0_14() const { return ___P0_14; }
	inline Vector3_t3722313464 * get_address_of_P0_14() { return &___P0_14; }
	inline void set_P0_14(Vector3_t3722313464  value)
	{
		___P0_14 = value;
	}

	inline static int32_t get_offset_of_P1_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P1_15)); }
	inline Vector3_t3722313464  get_P1_15() const { return ___P1_15; }
	inline Vector3_t3722313464 * get_address_of_P1_15() { return &___P1_15; }
	inline void set_P1_15(Vector3_t3722313464  value)
	{
		___P1_15 = value;
	}

	inline static int32_t get_offset_of_P2_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P2_16)); }
	inline Vector3_t3722313464  get_P2_16() const { return ___P2_16; }
	inline Vector3_t3722313464 * get_address_of_P2_16() { return &___P2_16; }
	inline void set_P2_16(Vector3_t3722313464  value)
	{
		___P2_16 = value;
	}

	inline static int32_t get_offset_of_P3_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t445075330, ___P3_17)); }
	inline Vector3_t3722313464  get_P3_17() const { return ___P3_17; }
	inline Vector3_t3722313464 * get_address_of_P3_17() { return &___P3_17; }
	inline void set_P3_17(Vector3_t3722313464  value)
	{
		___P3_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTCIRCUIT_T445075330_H
#ifndef FOLLOWCAMERA2D_T4192405139_H
#define FOLLOWCAMERA2D_T4192405139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomCamera.FollowCamera2D
struct  FollowCamera2D_t4192405139  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform CustomCamera.FollowCamera2D::target
	Transform_t3600365921 * ___target_2;
	// UnityEngine.Transform CustomCamera.FollowCamera2D::diamond
	Transform_t3600365921 * ___diamond_3;
	// System.Single CustomCamera.FollowCamera2D::dampTime
	float ___dampTime_4;
	// CustomCamera.Direction CustomCamera.FollowCamera2D::followType
	int32_t ___followType_5;
	// System.Single CustomCamera.FollowCamera2D::cameraCenterX
	float ___cameraCenterX_6;
	// System.Single CustomCamera.FollowCamera2D::cameraCenterY
	float ___cameraCenterY_7;
	// CustomCamera.Direction CustomCamera.FollowCamera2D::boundType
	int32_t ___boundType_8;
	// System.Single CustomCamera.FollowCamera2D::leftBound
	float ___leftBound_9;
	// System.Single CustomCamera.FollowCamera2D::rightBound
	float ___rightBound_10;
	// System.Single CustomCamera.FollowCamera2D::upperBound
	float ___upperBound_11;
	// System.Single CustomCamera.FollowCamera2D::lowerBound
	float ___lowerBound_12;
	// CustomCamera.Direction CustomCamera.FollowCamera2D::deadZoneType
	int32_t ___deadZoneType_13;
	// System.Boolean CustomCamera.FollowCamera2D::hardDeadZone
	bool ___hardDeadZone_14;
	// System.Single CustomCamera.FollowCamera2D::leftDeadBound
	float ___leftDeadBound_15;
	// System.Single CustomCamera.FollowCamera2D::rightDeadBound
	float ___rightDeadBound_16;
	// System.Single CustomCamera.FollowCamera2D::upperDeadBound
	float ___upperDeadBound_17;
	// System.Single CustomCamera.FollowCamera2D::lowerDeadBound
	float ___lowerDeadBound_18;
	// System.Single CustomCamera.FollowCamera2D::smoothSpeed
	float ___smoothSpeed_19;
	// UnityEngine.Camera CustomCamera.FollowCamera2D::camera
	Camera_t4157153871 * ___camera_20;
	// UnityEngine.Vector3 CustomCamera.FollowCamera2D::velocity
	Vector3_t3722313464  ___velocity_21;
	// System.Single CustomCamera.FollowCamera2D::vertExtent
	float ___vertExtent_22;
	// System.Single CustomCamera.FollowCamera2D::horzExtent
	float ___horzExtent_23;
	// UnityEngine.Vector3 CustomCamera.FollowCamera2D::tempVec
	Vector3_t3722313464  ___tempVec_24;
	// System.Boolean CustomCamera.FollowCamera2D::isBoundHorizontal
	bool ___isBoundHorizontal_25;
	// System.Boolean CustomCamera.FollowCamera2D::isBoundVertical
	bool ___isBoundVertical_26;
	// System.Boolean CustomCamera.FollowCamera2D::isFollowHorizontal
	bool ___isFollowHorizontal_27;
	// System.Boolean CustomCamera.FollowCamera2D::isFollowVertical
	bool ___isFollowVertical_28;
	// System.Boolean CustomCamera.FollowCamera2D::isDeadZoneHorizontal
	bool ___isDeadZoneHorizontal_29;
	// System.Boolean CustomCamera.FollowCamera2D::isDeadZoneVertical
	bool ___isDeadZoneVertical_30;
	// UnityEngine.Vector3 CustomCamera.FollowCamera2D::deltaCenterVec
	Vector3_t3722313464  ___deltaCenterVec_31;
	// System.Boolean CustomCamera.FollowCamera2D::find
	bool ___find_32;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_diamond_3() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___diamond_3)); }
	inline Transform_t3600365921 * get_diamond_3() const { return ___diamond_3; }
	inline Transform_t3600365921 ** get_address_of_diamond_3() { return &___diamond_3; }
	inline void set_diamond_3(Transform_t3600365921 * value)
	{
		___diamond_3 = value;
		Il2CppCodeGenWriteBarrier((&___diamond_3), value);
	}

	inline static int32_t get_offset_of_dampTime_4() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___dampTime_4)); }
	inline float get_dampTime_4() const { return ___dampTime_4; }
	inline float* get_address_of_dampTime_4() { return &___dampTime_4; }
	inline void set_dampTime_4(float value)
	{
		___dampTime_4 = value;
	}

	inline static int32_t get_offset_of_followType_5() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___followType_5)); }
	inline int32_t get_followType_5() const { return ___followType_5; }
	inline int32_t* get_address_of_followType_5() { return &___followType_5; }
	inline void set_followType_5(int32_t value)
	{
		___followType_5 = value;
	}

	inline static int32_t get_offset_of_cameraCenterX_6() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___cameraCenterX_6)); }
	inline float get_cameraCenterX_6() const { return ___cameraCenterX_6; }
	inline float* get_address_of_cameraCenterX_6() { return &___cameraCenterX_6; }
	inline void set_cameraCenterX_6(float value)
	{
		___cameraCenterX_6 = value;
	}

	inline static int32_t get_offset_of_cameraCenterY_7() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___cameraCenterY_7)); }
	inline float get_cameraCenterY_7() const { return ___cameraCenterY_7; }
	inline float* get_address_of_cameraCenterY_7() { return &___cameraCenterY_7; }
	inline void set_cameraCenterY_7(float value)
	{
		___cameraCenterY_7 = value;
	}

	inline static int32_t get_offset_of_boundType_8() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___boundType_8)); }
	inline int32_t get_boundType_8() const { return ___boundType_8; }
	inline int32_t* get_address_of_boundType_8() { return &___boundType_8; }
	inline void set_boundType_8(int32_t value)
	{
		___boundType_8 = value;
	}

	inline static int32_t get_offset_of_leftBound_9() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___leftBound_9)); }
	inline float get_leftBound_9() const { return ___leftBound_9; }
	inline float* get_address_of_leftBound_9() { return &___leftBound_9; }
	inline void set_leftBound_9(float value)
	{
		___leftBound_9 = value;
	}

	inline static int32_t get_offset_of_rightBound_10() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___rightBound_10)); }
	inline float get_rightBound_10() const { return ___rightBound_10; }
	inline float* get_address_of_rightBound_10() { return &___rightBound_10; }
	inline void set_rightBound_10(float value)
	{
		___rightBound_10 = value;
	}

	inline static int32_t get_offset_of_upperBound_11() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___upperBound_11)); }
	inline float get_upperBound_11() const { return ___upperBound_11; }
	inline float* get_address_of_upperBound_11() { return &___upperBound_11; }
	inline void set_upperBound_11(float value)
	{
		___upperBound_11 = value;
	}

	inline static int32_t get_offset_of_lowerBound_12() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___lowerBound_12)); }
	inline float get_lowerBound_12() const { return ___lowerBound_12; }
	inline float* get_address_of_lowerBound_12() { return &___lowerBound_12; }
	inline void set_lowerBound_12(float value)
	{
		___lowerBound_12 = value;
	}

	inline static int32_t get_offset_of_deadZoneType_13() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___deadZoneType_13)); }
	inline int32_t get_deadZoneType_13() const { return ___deadZoneType_13; }
	inline int32_t* get_address_of_deadZoneType_13() { return &___deadZoneType_13; }
	inline void set_deadZoneType_13(int32_t value)
	{
		___deadZoneType_13 = value;
	}

	inline static int32_t get_offset_of_hardDeadZone_14() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___hardDeadZone_14)); }
	inline bool get_hardDeadZone_14() const { return ___hardDeadZone_14; }
	inline bool* get_address_of_hardDeadZone_14() { return &___hardDeadZone_14; }
	inline void set_hardDeadZone_14(bool value)
	{
		___hardDeadZone_14 = value;
	}

	inline static int32_t get_offset_of_leftDeadBound_15() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___leftDeadBound_15)); }
	inline float get_leftDeadBound_15() const { return ___leftDeadBound_15; }
	inline float* get_address_of_leftDeadBound_15() { return &___leftDeadBound_15; }
	inline void set_leftDeadBound_15(float value)
	{
		___leftDeadBound_15 = value;
	}

	inline static int32_t get_offset_of_rightDeadBound_16() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___rightDeadBound_16)); }
	inline float get_rightDeadBound_16() const { return ___rightDeadBound_16; }
	inline float* get_address_of_rightDeadBound_16() { return &___rightDeadBound_16; }
	inline void set_rightDeadBound_16(float value)
	{
		___rightDeadBound_16 = value;
	}

	inline static int32_t get_offset_of_upperDeadBound_17() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___upperDeadBound_17)); }
	inline float get_upperDeadBound_17() const { return ___upperDeadBound_17; }
	inline float* get_address_of_upperDeadBound_17() { return &___upperDeadBound_17; }
	inline void set_upperDeadBound_17(float value)
	{
		___upperDeadBound_17 = value;
	}

	inline static int32_t get_offset_of_lowerDeadBound_18() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___lowerDeadBound_18)); }
	inline float get_lowerDeadBound_18() const { return ___lowerDeadBound_18; }
	inline float* get_address_of_lowerDeadBound_18() { return &___lowerDeadBound_18; }
	inline void set_lowerDeadBound_18(float value)
	{
		___lowerDeadBound_18 = value;
	}

	inline static int32_t get_offset_of_smoothSpeed_19() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___smoothSpeed_19)); }
	inline float get_smoothSpeed_19() const { return ___smoothSpeed_19; }
	inline float* get_address_of_smoothSpeed_19() { return &___smoothSpeed_19; }
	inline void set_smoothSpeed_19(float value)
	{
		___smoothSpeed_19 = value;
	}

	inline static int32_t get_offset_of_camera_20() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___camera_20)); }
	inline Camera_t4157153871 * get_camera_20() const { return ___camera_20; }
	inline Camera_t4157153871 ** get_address_of_camera_20() { return &___camera_20; }
	inline void set_camera_20(Camera_t4157153871 * value)
	{
		___camera_20 = value;
		Il2CppCodeGenWriteBarrier((&___camera_20), value);
	}

	inline static int32_t get_offset_of_velocity_21() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___velocity_21)); }
	inline Vector3_t3722313464  get_velocity_21() const { return ___velocity_21; }
	inline Vector3_t3722313464 * get_address_of_velocity_21() { return &___velocity_21; }
	inline void set_velocity_21(Vector3_t3722313464  value)
	{
		___velocity_21 = value;
	}

	inline static int32_t get_offset_of_vertExtent_22() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___vertExtent_22)); }
	inline float get_vertExtent_22() const { return ___vertExtent_22; }
	inline float* get_address_of_vertExtent_22() { return &___vertExtent_22; }
	inline void set_vertExtent_22(float value)
	{
		___vertExtent_22 = value;
	}

	inline static int32_t get_offset_of_horzExtent_23() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___horzExtent_23)); }
	inline float get_horzExtent_23() const { return ___horzExtent_23; }
	inline float* get_address_of_horzExtent_23() { return &___horzExtent_23; }
	inline void set_horzExtent_23(float value)
	{
		___horzExtent_23 = value;
	}

	inline static int32_t get_offset_of_tempVec_24() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___tempVec_24)); }
	inline Vector3_t3722313464  get_tempVec_24() const { return ___tempVec_24; }
	inline Vector3_t3722313464 * get_address_of_tempVec_24() { return &___tempVec_24; }
	inline void set_tempVec_24(Vector3_t3722313464  value)
	{
		___tempVec_24 = value;
	}

	inline static int32_t get_offset_of_isBoundHorizontal_25() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isBoundHorizontal_25)); }
	inline bool get_isBoundHorizontal_25() const { return ___isBoundHorizontal_25; }
	inline bool* get_address_of_isBoundHorizontal_25() { return &___isBoundHorizontal_25; }
	inline void set_isBoundHorizontal_25(bool value)
	{
		___isBoundHorizontal_25 = value;
	}

	inline static int32_t get_offset_of_isBoundVertical_26() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isBoundVertical_26)); }
	inline bool get_isBoundVertical_26() const { return ___isBoundVertical_26; }
	inline bool* get_address_of_isBoundVertical_26() { return &___isBoundVertical_26; }
	inline void set_isBoundVertical_26(bool value)
	{
		___isBoundVertical_26 = value;
	}

	inline static int32_t get_offset_of_isFollowHorizontal_27() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isFollowHorizontal_27)); }
	inline bool get_isFollowHorizontal_27() const { return ___isFollowHorizontal_27; }
	inline bool* get_address_of_isFollowHorizontal_27() { return &___isFollowHorizontal_27; }
	inline void set_isFollowHorizontal_27(bool value)
	{
		___isFollowHorizontal_27 = value;
	}

	inline static int32_t get_offset_of_isFollowVertical_28() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isFollowVertical_28)); }
	inline bool get_isFollowVertical_28() const { return ___isFollowVertical_28; }
	inline bool* get_address_of_isFollowVertical_28() { return &___isFollowVertical_28; }
	inline void set_isFollowVertical_28(bool value)
	{
		___isFollowVertical_28 = value;
	}

	inline static int32_t get_offset_of_isDeadZoneHorizontal_29() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isDeadZoneHorizontal_29)); }
	inline bool get_isDeadZoneHorizontal_29() const { return ___isDeadZoneHorizontal_29; }
	inline bool* get_address_of_isDeadZoneHorizontal_29() { return &___isDeadZoneHorizontal_29; }
	inline void set_isDeadZoneHorizontal_29(bool value)
	{
		___isDeadZoneHorizontal_29 = value;
	}

	inline static int32_t get_offset_of_isDeadZoneVertical_30() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___isDeadZoneVertical_30)); }
	inline bool get_isDeadZoneVertical_30() const { return ___isDeadZoneVertical_30; }
	inline bool* get_address_of_isDeadZoneVertical_30() { return &___isDeadZoneVertical_30; }
	inline void set_isDeadZoneVertical_30(bool value)
	{
		___isDeadZoneVertical_30 = value;
	}

	inline static int32_t get_offset_of_deltaCenterVec_31() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___deltaCenterVec_31)); }
	inline Vector3_t3722313464  get_deltaCenterVec_31() const { return ___deltaCenterVec_31; }
	inline Vector3_t3722313464 * get_address_of_deltaCenterVec_31() { return &___deltaCenterVec_31; }
	inline void set_deltaCenterVec_31(Vector3_t3722313464  value)
	{
		___deltaCenterVec_31 = value;
	}

	inline static int32_t get_offset_of_find_32() { return static_cast<int32_t>(offsetof(FollowCamera2D_t4192405139, ___find_32)); }
	inline bool get_find_32() const { return ___find_32; }
	inline bool* get_address_of_find_32() { return &___find_32; }
	inline void set_find_32(bool value)
	{
		___find_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWCAMERA2D_T4192405139_H
#ifndef COINCONTROLLER_T4170731786_H
#define COINCONTROLLER_T4170731786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoinController
struct  CoinController_t4170731786  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CoinController::coinEffect
	GameObject_t1113636619 * ___coinEffect_2;
	// UnityEngine.ParticleSystem CoinController::explosion
	ParticleSystem_t1800779281 * ___explosion_3;
	// UnityEngine.AudioClip CoinController::sound
	AudioClip_t3680889665 * ___sound_4;
	// UnityEngine.AudioSource CoinController::source
	AudioSource_t3935305588 * ___source_5;
	// System.Single CoinController::countdown
	float ___countdown_6;
	// System.Boolean CoinController::canExplode
	bool ___canExplode_7;

public:
	inline static int32_t get_offset_of_coinEffect_2() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___coinEffect_2)); }
	inline GameObject_t1113636619 * get_coinEffect_2() const { return ___coinEffect_2; }
	inline GameObject_t1113636619 ** get_address_of_coinEffect_2() { return &___coinEffect_2; }
	inline void set_coinEffect_2(GameObject_t1113636619 * value)
	{
		___coinEffect_2 = value;
		Il2CppCodeGenWriteBarrier((&___coinEffect_2), value);
	}

	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___explosion_3)); }
	inline ParticleSystem_t1800779281 * get_explosion_3() const { return ___explosion_3; }
	inline ParticleSystem_t1800779281 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(ParticleSystem_t1800779281 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_3), value);
	}

	inline static int32_t get_offset_of_sound_4() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___sound_4)); }
	inline AudioClip_t3680889665 * get_sound_4() const { return ___sound_4; }
	inline AudioClip_t3680889665 ** get_address_of_sound_4() { return &___sound_4; }
	inline void set_sound_4(AudioClip_t3680889665 * value)
	{
		___sound_4 = value;
		Il2CppCodeGenWriteBarrier((&___sound_4), value);
	}

	inline static int32_t get_offset_of_source_5() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___source_5)); }
	inline AudioSource_t3935305588 * get_source_5() const { return ___source_5; }
	inline AudioSource_t3935305588 ** get_address_of_source_5() { return &___source_5; }
	inline void set_source_5(AudioSource_t3935305588 * value)
	{
		___source_5 = value;
		Il2CppCodeGenWriteBarrier((&___source_5), value);
	}

	inline static int32_t get_offset_of_countdown_6() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___countdown_6)); }
	inline float get_countdown_6() const { return ___countdown_6; }
	inline float* get_address_of_countdown_6() { return &___countdown_6; }
	inline void set_countdown_6(float value)
	{
		___countdown_6 = value;
	}

	inline static int32_t get_offset_of_canExplode_7() { return static_cast<int32_t>(offsetof(CoinController_t4170731786, ___canExplode_7)); }
	inline bool get_canExplode_7() const { return ___canExplode_7; }
	inline bool* get_address_of_canExplode_7() { return &___canExplode_7; }
	inline void set_canExplode_7(bool value)
	{
		___canExplode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COINCONTROLLER_T4170731786_H
#ifndef CHARACTERMOTION_T2600360077_H
#define CHARACTERMOTION_T2600360077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CharacterMotion
struct  CharacterMotion_t2600360077  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator CharacterMotion::animator
	Animator_t434523843 * ___animator_2;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(CharacterMotion_t2600360077, ___animator_2)); }
	inline Animator_t434523843 * get_animator_2() const { return ___animator_2; }
	inline Animator_t434523843 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t434523843 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier((&___animator_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERMOTION_T2600360077_H
#ifndef SPRITEMESHINSTANCE_T871590551_H
#define SPRITEMESHINSTANCE_T871590551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.SpriteMeshInstance
struct  SpriteMeshInstance_t871590551  : public MonoBehaviour_t3962482529
{
public:
	// Anima2D.SpriteMesh Anima2D.SpriteMeshInstance::m_SpriteMesh
	SpriteMesh_t4133440749 * ___m_SpriteMesh_2;
	// UnityEngine.Color Anima2D.SpriteMeshInstance::m_Color
	Color_t2555686324  ___m_Color_3;
	// UnityEngine.Material[] Anima2D.SpriteMeshInstance::m_Materials
	MaterialU5BU5D_t561872642* ___m_Materials_4;
	// System.Int32 Anima2D.SpriteMeshInstance::m_SortingLayerID
	int32_t ___m_SortingLayerID_5;
	// System.Int32 Anima2D.SpriteMeshInstance::m_SortingOrder
	int32_t ___m_SortingOrder_6;
	// Anima2D.Bone2D[] Anima2D.SpriteMeshInstance::m_Bones
	Bone2DU5BU5D_t2775241867* ___m_Bones_7;
	// UnityEngine.Transform[] Anima2D.SpriteMeshInstance::m_BoneTransforms
	TransformU5BU5D_t807237628* ___m_BoneTransforms_8;
	// System.Collections.Generic.List`1<Anima2D.Bone2D> Anima2D.SpriteMeshInstance::m_CachedBones
	List_1_t242407092 * ___m_CachedBones_9;
	// UnityEngine.MaterialPropertyBlock Anima2D.SpriteMeshInstance::m_MaterialPropertyBlock
	MaterialPropertyBlock_t3213117958 * ___m_MaterialPropertyBlock_10;
	// UnityEngine.Renderer Anima2D.SpriteMeshInstance::mCachedRenderer
	Renderer_t2627027031 * ___mCachedRenderer_11;
	// UnityEngine.MeshFilter Anima2D.SpriteMeshInstance::mCachedMeshFilter
	MeshFilter_t3523625662 * ___mCachedMeshFilter_12;
	// UnityEngine.SkinnedMeshRenderer Anima2D.SpriteMeshInstance::mCachedSkinnedRenderer
	SkinnedMeshRenderer_t245602842 * ___mCachedSkinnedRenderer_13;
	// UnityEngine.Mesh Anima2D.SpriteMeshInstance::m_InitialMesh
	Mesh_t3648964284 * ___m_InitialMesh_14;
	// UnityEngine.Mesh Anima2D.SpriteMeshInstance::m_CurrentMesh
	Mesh_t3648964284 * ___m_CurrentMesh_15;

public:
	inline static int32_t get_offset_of_m_SpriteMesh_2() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_SpriteMesh_2)); }
	inline SpriteMesh_t4133440749 * get_m_SpriteMesh_2() const { return ___m_SpriteMesh_2; }
	inline SpriteMesh_t4133440749 ** get_address_of_m_SpriteMesh_2() { return &___m_SpriteMesh_2; }
	inline void set_m_SpriteMesh_2(SpriteMesh_t4133440749 * value)
	{
		___m_SpriteMesh_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpriteMesh_2), value);
	}

	inline static int32_t get_offset_of_m_Color_3() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_Color_3)); }
	inline Color_t2555686324  get_m_Color_3() const { return ___m_Color_3; }
	inline Color_t2555686324 * get_address_of_m_Color_3() { return &___m_Color_3; }
	inline void set_m_Color_3(Color_t2555686324  value)
	{
		___m_Color_3 = value;
	}

	inline static int32_t get_offset_of_m_Materials_4() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_Materials_4)); }
	inline MaterialU5BU5D_t561872642* get_m_Materials_4() const { return ___m_Materials_4; }
	inline MaterialU5BU5D_t561872642** get_address_of_m_Materials_4() { return &___m_Materials_4; }
	inline void set_m_Materials_4(MaterialU5BU5D_t561872642* value)
	{
		___m_Materials_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Materials_4), value);
	}

	inline static int32_t get_offset_of_m_SortingLayerID_5() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_SortingLayerID_5)); }
	inline int32_t get_m_SortingLayerID_5() const { return ___m_SortingLayerID_5; }
	inline int32_t* get_address_of_m_SortingLayerID_5() { return &___m_SortingLayerID_5; }
	inline void set_m_SortingLayerID_5(int32_t value)
	{
		___m_SortingLayerID_5 = value;
	}

	inline static int32_t get_offset_of_m_SortingOrder_6() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_SortingOrder_6)); }
	inline int32_t get_m_SortingOrder_6() const { return ___m_SortingOrder_6; }
	inline int32_t* get_address_of_m_SortingOrder_6() { return &___m_SortingOrder_6; }
	inline void set_m_SortingOrder_6(int32_t value)
	{
		___m_SortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_m_Bones_7() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_Bones_7)); }
	inline Bone2DU5BU5D_t2775241867* get_m_Bones_7() const { return ___m_Bones_7; }
	inline Bone2DU5BU5D_t2775241867** get_address_of_m_Bones_7() { return &___m_Bones_7; }
	inline void set_m_Bones_7(Bone2DU5BU5D_t2775241867* value)
	{
		___m_Bones_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Bones_7), value);
	}

	inline static int32_t get_offset_of_m_BoneTransforms_8() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_BoneTransforms_8)); }
	inline TransformU5BU5D_t807237628* get_m_BoneTransforms_8() const { return ___m_BoneTransforms_8; }
	inline TransformU5BU5D_t807237628** get_address_of_m_BoneTransforms_8() { return &___m_BoneTransforms_8; }
	inline void set_m_BoneTransforms_8(TransformU5BU5D_t807237628* value)
	{
		___m_BoneTransforms_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneTransforms_8), value);
	}

	inline static int32_t get_offset_of_m_CachedBones_9() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_CachedBones_9)); }
	inline List_1_t242407092 * get_m_CachedBones_9() const { return ___m_CachedBones_9; }
	inline List_1_t242407092 ** get_address_of_m_CachedBones_9() { return &___m_CachedBones_9; }
	inline void set_m_CachedBones_9(List_1_t242407092 * value)
	{
		___m_CachedBones_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedBones_9), value);
	}

	inline static int32_t get_offset_of_m_MaterialPropertyBlock_10() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_MaterialPropertyBlock_10)); }
	inline MaterialPropertyBlock_t3213117958 * get_m_MaterialPropertyBlock_10() const { return ___m_MaterialPropertyBlock_10; }
	inline MaterialPropertyBlock_t3213117958 ** get_address_of_m_MaterialPropertyBlock_10() { return &___m_MaterialPropertyBlock_10; }
	inline void set_m_MaterialPropertyBlock_10(MaterialPropertyBlock_t3213117958 * value)
	{
		___m_MaterialPropertyBlock_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaterialPropertyBlock_10), value);
	}

	inline static int32_t get_offset_of_mCachedRenderer_11() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___mCachedRenderer_11)); }
	inline Renderer_t2627027031 * get_mCachedRenderer_11() const { return ___mCachedRenderer_11; }
	inline Renderer_t2627027031 ** get_address_of_mCachedRenderer_11() { return &___mCachedRenderer_11; }
	inline void set_mCachedRenderer_11(Renderer_t2627027031 * value)
	{
		___mCachedRenderer_11 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedRenderer_11), value);
	}

	inline static int32_t get_offset_of_mCachedMeshFilter_12() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___mCachedMeshFilter_12)); }
	inline MeshFilter_t3523625662 * get_mCachedMeshFilter_12() const { return ___mCachedMeshFilter_12; }
	inline MeshFilter_t3523625662 ** get_address_of_mCachedMeshFilter_12() { return &___mCachedMeshFilter_12; }
	inline void set_mCachedMeshFilter_12(MeshFilter_t3523625662 * value)
	{
		___mCachedMeshFilter_12 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedMeshFilter_12), value);
	}

	inline static int32_t get_offset_of_mCachedSkinnedRenderer_13() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___mCachedSkinnedRenderer_13)); }
	inline SkinnedMeshRenderer_t245602842 * get_mCachedSkinnedRenderer_13() const { return ___mCachedSkinnedRenderer_13; }
	inline SkinnedMeshRenderer_t245602842 ** get_address_of_mCachedSkinnedRenderer_13() { return &___mCachedSkinnedRenderer_13; }
	inline void set_mCachedSkinnedRenderer_13(SkinnedMeshRenderer_t245602842 * value)
	{
		___mCachedSkinnedRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedSkinnedRenderer_13), value);
	}

	inline static int32_t get_offset_of_m_InitialMesh_14() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_InitialMesh_14)); }
	inline Mesh_t3648964284 * get_m_InitialMesh_14() const { return ___m_InitialMesh_14; }
	inline Mesh_t3648964284 ** get_address_of_m_InitialMesh_14() { return &___m_InitialMesh_14; }
	inline void set_m_InitialMesh_14(Mesh_t3648964284 * value)
	{
		___m_InitialMesh_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_InitialMesh_14), value);
	}

	inline static int32_t get_offset_of_m_CurrentMesh_15() { return static_cast<int32_t>(offsetof(SpriteMeshInstance_t871590551, ___m_CurrentMesh_15)); }
	inline Mesh_t3648964284 * get_m_CurrentMesh_15() const { return ___m_CurrentMesh_15; }
	inline Mesh_t3648964284 ** get_address_of_m_CurrentMesh_15() { return &___m_CurrentMesh_15; }
	inline void set_m_CurrentMesh_15(Mesh_t3648964284 * value)
	{
		___m_CurrentMesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentMesh_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEMESHINSTANCE_T871590551_H
#ifndef SPRITEMESHANIMATION_T3515039005_H
#define SPRITEMESHANIMATION_T3515039005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.SpriteMeshAnimation
struct  SpriteMeshAnimation_t3515039005  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Anima2D.SpriteMeshAnimation::m_Frame
	float ___m_Frame_2;
	// Anima2D.SpriteMesh[] Anima2D.SpriteMeshAnimation::m_Frames
	SpriteMeshU5BU5D_t497469632* ___m_Frames_3;
	// System.Int32 Anima2D.SpriteMeshAnimation::m_OldFrame
	int32_t ___m_OldFrame_4;
	// Anima2D.SpriteMeshInstance Anima2D.SpriteMeshAnimation::m_SpriteMeshInstance
	SpriteMeshInstance_t871590551 * ___m_SpriteMeshInstance_5;

public:
	inline static int32_t get_offset_of_m_Frame_2() { return static_cast<int32_t>(offsetof(SpriteMeshAnimation_t3515039005, ___m_Frame_2)); }
	inline float get_m_Frame_2() const { return ___m_Frame_2; }
	inline float* get_address_of_m_Frame_2() { return &___m_Frame_2; }
	inline void set_m_Frame_2(float value)
	{
		___m_Frame_2 = value;
	}

	inline static int32_t get_offset_of_m_Frames_3() { return static_cast<int32_t>(offsetof(SpriteMeshAnimation_t3515039005, ___m_Frames_3)); }
	inline SpriteMeshU5BU5D_t497469632* get_m_Frames_3() const { return ___m_Frames_3; }
	inline SpriteMeshU5BU5D_t497469632** get_address_of_m_Frames_3() { return &___m_Frames_3; }
	inline void set_m_Frames_3(SpriteMeshU5BU5D_t497469632* value)
	{
		___m_Frames_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Frames_3), value);
	}

	inline static int32_t get_offset_of_m_OldFrame_4() { return static_cast<int32_t>(offsetof(SpriteMeshAnimation_t3515039005, ___m_OldFrame_4)); }
	inline int32_t get_m_OldFrame_4() const { return ___m_OldFrame_4; }
	inline int32_t* get_address_of_m_OldFrame_4() { return &___m_OldFrame_4; }
	inline void set_m_OldFrame_4(int32_t value)
	{
		___m_OldFrame_4 = value;
	}

	inline static int32_t get_offset_of_m_SpriteMeshInstance_5() { return static_cast<int32_t>(offsetof(SpriteMeshAnimation_t3515039005, ___m_SpriteMeshInstance_5)); }
	inline SpriteMeshInstance_t871590551 * get_m_SpriteMeshInstance_5() const { return ___m_SpriteMeshInstance_5; }
	inline SpriteMeshInstance_t871590551 ** get_address_of_m_SpriteMeshInstance_5() { return &___m_SpriteMeshInstance_5; }
	inline void set_m_SpriteMeshInstance_5(SpriteMeshInstance_t871590551 * value)
	{
		___m_SpriteMeshInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpriteMeshInstance_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEMESHANIMATION_T3515039005_H
#ifndef POSEMANAGER_T4097669563_H
#define POSEMANAGER_T4097669563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.PoseManager
struct  PoseManager_t4097669563  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Anima2D.Pose> Anima2D.PoseManager::m_Poses
	List_1_t688598421 * ___m_Poses_2;

public:
	inline static int32_t get_offset_of_m_Poses_2() { return static_cast<int32_t>(offsetof(PoseManager_t4097669563, ___m_Poses_2)); }
	inline List_1_t688598421 * get_m_Poses_2() const { return ___m_Poses_2; }
	inline List_1_t688598421 ** get_address_of_m_Poses_2() { return &___m_Poses_2; }
	inline void set_m_Poses_2(List_1_t688598421 * value)
	{
		___m_Poses_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Poses_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEMANAGER_T4097669563_H
#ifndef IKGROUP_T3191562885_H
#define IKGROUP_T3191562885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkGroup
struct  IkGroup_t3191562885  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<Anima2D.Ik2D> Anima2D.IkGroup::m_IkComponents
	List_1_t3565654563 * ___m_IkComponents_2;

public:
	inline static int32_t get_offset_of_m_IkComponents_2() { return static_cast<int32_t>(offsetof(IkGroup_t3191562885, ___m_IkComponents_2)); }
	inline List_1_t3565654563 * get_m_IkComponents_2() const { return ___m_IkComponents_2; }
	inline List_1_t3565654563 ** get_address_of_m_IkComponents_2() { return &___m_IkComponents_2; }
	inline void set_m_IkComponents_2(List_1_t3565654563 * value)
	{
		___m_IkComponents_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_IkComponents_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKGROUP_T3191562885_H
#ifndef CONTROL_T3801119829_H
#define CONTROL_T3801119829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.Control
struct  Control_t3801119829  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Anima2D.Control::m_BoneTransform
	Transform_t3600365921 * ___m_BoneTransform_2;
	// Anima2D.Bone2D Anima2D.Control::m_CachedBone
	Bone2D_t3065299646 * ___m_CachedBone_3;

public:
	inline static int32_t get_offset_of_m_BoneTransform_2() { return static_cast<int32_t>(offsetof(Control_t3801119829, ___m_BoneTransform_2)); }
	inline Transform_t3600365921 * get_m_BoneTransform_2() const { return ___m_BoneTransform_2; }
	inline Transform_t3600365921 ** get_address_of_m_BoneTransform_2() { return &___m_BoneTransform_2; }
	inline void set_m_BoneTransform_2(Transform_t3600365921 * value)
	{
		___m_BoneTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneTransform_2), value);
	}

	inline static int32_t get_offset_of_m_CachedBone_3() { return static_cast<int32_t>(offsetof(Control_t3801119829, ___m_CachedBone_3)); }
	inline Bone2D_t3065299646 * get_m_CachedBone_3() const { return ___m_CachedBone_3; }
	inline Bone2D_t3065299646 ** get_address_of_m_CachedBone_3() { return &___m_CachedBone_3; }
	inline void set_m_CachedBone_3(Bone2D_t3065299646 * value)
	{
		___m_CachedBone_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedBone_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROL_T3801119829_H
#ifndef IK2D_T2093579821_H
#define IK2D_T2093579821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.Ik2D
struct  Ik2D_t2093579821  : public MonoBehaviour_t3962482529
{
public:
	// Anima2D.Bone2D Anima2D.Ik2D::m_Target
	Bone2D_t3065299646 * ___m_Target_2;
	// System.Boolean Anima2D.Ik2D::m_Record
	bool ___m_Record_3;
	// UnityEngine.Transform Anima2D.Ik2D::m_TargetTransform
	Transform_t3600365921 * ___m_TargetTransform_4;
	// System.Int32 Anima2D.Ik2D::m_NumBones
	int32_t ___m_NumBones_5;
	// System.Single Anima2D.Ik2D::m_Weight
	float ___m_Weight_6;
	// System.Boolean Anima2D.Ik2D::m_RestoreDefaultPose
	bool ___m_RestoreDefaultPose_7;
	// System.Boolean Anima2D.Ik2D::m_OrientChild
	bool ___m_OrientChild_8;
	// Anima2D.Bone2D Anima2D.Ik2D::m_CachedTarget
	Bone2D_t3065299646 * ___m_CachedTarget_9;

public:
	inline static int32_t get_offset_of_m_Target_2() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_Target_2)); }
	inline Bone2D_t3065299646 * get_m_Target_2() const { return ___m_Target_2; }
	inline Bone2D_t3065299646 ** get_address_of_m_Target_2() { return &___m_Target_2; }
	inline void set_m_Target_2(Bone2D_t3065299646 * value)
	{
		___m_Target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_2), value);
	}

	inline static int32_t get_offset_of_m_Record_3() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_Record_3)); }
	inline bool get_m_Record_3() const { return ___m_Record_3; }
	inline bool* get_address_of_m_Record_3() { return &___m_Record_3; }
	inline void set_m_Record_3(bool value)
	{
		___m_Record_3 = value;
	}

	inline static int32_t get_offset_of_m_TargetTransform_4() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_TargetTransform_4)); }
	inline Transform_t3600365921 * get_m_TargetTransform_4() const { return ___m_TargetTransform_4; }
	inline Transform_t3600365921 ** get_address_of_m_TargetTransform_4() { return &___m_TargetTransform_4; }
	inline void set_m_TargetTransform_4(Transform_t3600365921 * value)
	{
		___m_TargetTransform_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetTransform_4), value);
	}

	inline static int32_t get_offset_of_m_NumBones_5() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_NumBones_5)); }
	inline int32_t get_m_NumBones_5() const { return ___m_NumBones_5; }
	inline int32_t* get_address_of_m_NumBones_5() { return &___m_NumBones_5; }
	inline void set_m_NumBones_5(int32_t value)
	{
		___m_NumBones_5 = value;
	}

	inline static int32_t get_offset_of_m_Weight_6() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_Weight_6)); }
	inline float get_m_Weight_6() const { return ___m_Weight_6; }
	inline float* get_address_of_m_Weight_6() { return &___m_Weight_6; }
	inline void set_m_Weight_6(float value)
	{
		___m_Weight_6 = value;
	}

	inline static int32_t get_offset_of_m_RestoreDefaultPose_7() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_RestoreDefaultPose_7)); }
	inline bool get_m_RestoreDefaultPose_7() const { return ___m_RestoreDefaultPose_7; }
	inline bool* get_address_of_m_RestoreDefaultPose_7() { return &___m_RestoreDefaultPose_7; }
	inline void set_m_RestoreDefaultPose_7(bool value)
	{
		___m_RestoreDefaultPose_7 = value;
	}

	inline static int32_t get_offset_of_m_OrientChild_8() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_OrientChild_8)); }
	inline bool get_m_OrientChild_8() const { return ___m_OrientChild_8; }
	inline bool* get_address_of_m_OrientChild_8() { return &___m_OrientChild_8; }
	inline void set_m_OrientChild_8(bool value)
	{
		___m_OrientChild_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedTarget_9() { return static_cast<int32_t>(offsetof(Ik2D_t2093579821, ___m_CachedTarget_9)); }
	inline Bone2D_t3065299646 * get_m_CachedTarget_9() const { return ___m_CachedTarget_9; }
	inline Bone2D_t3065299646 ** get_address_of_m_CachedTarget_9() { return &___m_CachedTarget_9; }
	inline void set_m_CachedTarget_9(Bone2D_t3065299646 * value)
	{
		___m_CachedTarget_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedTarget_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IK2D_T2093579821_H
#ifndef BONE2D_T3065299646_H
#define BONE2D_T3065299646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.Bone2D
struct  Bone2D_t3065299646  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color Anima2D.Bone2D::m_Color
	Color_t2555686324  ___m_Color_2;
	// System.Single Anima2D.Bone2D::m_Length
	float ___m_Length_3;
	// Anima2D.Bone2D Anima2D.Bone2D::m_Child
	Bone2D_t3065299646 * ___m_Child_4;
	// UnityEngine.Transform Anima2D.Bone2D::m_ChildTransform
	Transform_t3600365921 * ___m_ChildTransform_5;
	// Anima2D.Ik2D Anima2D.Bone2D::m_AttachedIK
	Ik2D_t2093579821 * ___m_AttachedIK_6;
	// Anima2D.Bone2D Anima2D.Bone2D::m_CachedChild
	Bone2D_t3065299646 * ___m_CachedChild_7;
	// Anima2D.Bone2D Anima2D.Bone2D::mParentBone
	Bone2D_t3065299646 * ___mParentBone_8;

public:
	inline static int32_t get_offset_of_m_Color_2() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_Color_2)); }
	inline Color_t2555686324  get_m_Color_2() const { return ___m_Color_2; }
	inline Color_t2555686324 * get_address_of_m_Color_2() { return &___m_Color_2; }
	inline void set_m_Color_2(Color_t2555686324  value)
	{
		___m_Color_2 = value;
	}

	inline static int32_t get_offset_of_m_Length_3() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_Length_3)); }
	inline float get_m_Length_3() const { return ___m_Length_3; }
	inline float* get_address_of_m_Length_3() { return &___m_Length_3; }
	inline void set_m_Length_3(float value)
	{
		___m_Length_3 = value;
	}

	inline static int32_t get_offset_of_m_Child_4() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_Child_4)); }
	inline Bone2D_t3065299646 * get_m_Child_4() const { return ___m_Child_4; }
	inline Bone2D_t3065299646 ** get_address_of_m_Child_4() { return &___m_Child_4; }
	inline void set_m_Child_4(Bone2D_t3065299646 * value)
	{
		___m_Child_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Child_4), value);
	}

	inline static int32_t get_offset_of_m_ChildTransform_5() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_ChildTransform_5)); }
	inline Transform_t3600365921 * get_m_ChildTransform_5() const { return ___m_ChildTransform_5; }
	inline Transform_t3600365921 ** get_address_of_m_ChildTransform_5() { return &___m_ChildTransform_5; }
	inline void set_m_ChildTransform_5(Transform_t3600365921 * value)
	{
		___m_ChildTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChildTransform_5), value);
	}

	inline static int32_t get_offset_of_m_AttachedIK_6() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_AttachedIK_6)); }
	inline Ik2D_t2093579821 * get_m_AttachedIK_6() const { return ___m_AttachedIK_6; }
	inline Ik2D_t2093579821 ** get_address_of_m_AttachedIK_6() { return &___m_AttachedIK_6; }
	inline void set_m_AttachedIK_6(Ik2D_t2093579821 * value)
	{
		___m_AttachedIK_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_AttachedIK_6), value);
	}

	inline static int32_t get_offset_of_m_CachedChild_7() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___m_CachedChild_7)); }
	inline Bone2D_t3065299646 * get_m_CachedChild_7() const { return ___m_CachedChild_7; }
	inline Bone2D_t3065299646 ** get_address_of_m_CachedChild_7() { return &___m_CachedChild_7; }
	inline void set_m_CachedChild_7(Bone2D_t3065299646 * value)
	{
		___m_CachedChild_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedChild_7), value);
	}

	inline static int32_t get_offset_of_mParentBone_8() { return static_cast<int32_t>(offsetof(Bone2D_t3065299646, ___mParentBone_8)); }
	inline Bone2D_t3065299646 * get_mParentBone_8() const { return ___mParentBone_8; }
	inline Bone2D_t3065299646 ** get_address_of_mParentBone_8() { return &___mParentBone_8; }
	inline void set_mParentBone_8(Bone2D_t3065299646 * value)
	{
		___mParentBone_8 = value;
		Il2CppCodeGenWriteBarrier((&___mParentBone_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BONE2D_T3065299646_H
#ifndef FOLLOW_T1013500665_H
#define FOLLOW_T1013500665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Follow
struct  Follow_t1013500665  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Follow::target
	Transform_t3600365921 * ___target_2;
	// UnityEngine.Vector3 Follow::offset
	Vector3_t3722313464  ___offset_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Follow_t1013500665, ___target_2)); }
	inline Transform_t3600365921 * get_target_2() const { return ___target_2; }
	inline Transform_t3600365921 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3600365921 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(Follow_t1013500665, ___offset_3)); }
	inline Vector3_t3722313464  get_offset_3() const { return ___offset_3; }
	inline Vector3_t3722313464 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t3722313464  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOW_T1013500665_H
#ifndef SKINNEDMESHCOMBINER_T3660097279_H
#define SKINNEDMESHCOMBINER_T3660097279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SkinnedMeshCombiner
struct  SkinnedMeshCombiner_t3660097279  : public MonoBehaviour_t3962482529
{
public:
	// Anima2D.SpriteMeshInstance[] SkinnedMeshCombiner::m_SpriteMeshInstances
	SpriteMeshInstanceU5BU5D_t371572014* ___m_SpriteMeshInstances_2;
	// UnityEngine.MaterialPropertyBlock SkinnedMeshCombiner::m_MaterialPropertyBlock
	MaterialPropertyBlock_t3213117958 * ___m_MaterialPropertyBlock_3;
	// UnityEngine.SkinnedMeshRenderer SkinnedMeshCombiner::m_CachedSkinnedRenderer
	SkinnedMeshRenderer_t245602842 * ___m_CachedSkinnedRenderer_4;

public:
	inline static int32_t get_offset_of_m_SpriteMeshInstances_2() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t3660097279, ___m_SpriteMeshInstances_2)); }
	inline SpriteMeshInstanceU5BU5D_t371572014* get_m_SpriteMeshInstances_2() const { return ___m_SpriteMeshInstances_2; }
	inline SpriteMeshInstanceU5BU5D_t371572014** get_address_of_m_SpriteMeshInstances_2() { return &___m_SpriteMeshInstances_2; }
	inline void set_m_SpriteMeshInstances_2(SpriteMeshInstanceU5BU5D_t371572014* value)
	{
		___m_SpriteMeshInstances_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpriteMeshInstances_2), value);
	}

	inline static int32_t get_offset_of_m_MaterialPropertyBlock_3() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t3660097279, ___m_MaterialPropertyBlock_3)); }
	inline MaterialPropertyBlock_t3213117958 * get_m_MaterialPropertyBlock_3() const { return ___m_MaterialPropertyBlock_3; }
	inline MaterialPropertyBlock_t3213117958 ** get_address_of_m_MaterialPropertyBlock_3() { return &___m_MaterialPropertyBlock_3; }
	inline void set_m_MaterialPropertyBlock_3(MaterialPropertyBlock_t3213117958 * value)
	{
		___m_MaterialPropertyBlock_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaterialPropertyBlock_3), value);
	}

	inline static int32_t get_offset_of_m_CachedSkinnedRenderer_4() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t3660097279, ___m_CachedSkinnedRenderer_4)); }
	inline SkinnedMeshRenderer_t245602842 * get_m_CachedSkinnedRenderer_4() const { return ___m_CachedSkinnedRenderer_4; }
	inline SkinnedMeshRenderer_t245602842 ** get_address_of_m_CachedSkinnedRenderer_4() { return &___m_CachedSkinnedRenderer_4; }
	inline void set_m_CachedSkinnedRenderer_4(SkinnedMeshRenderer_t245602842 * value)
	{
		___m_CachedSkinnedRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedSkinnedRenderer_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINNEDMESHCOMBINER_T3660097279_H
#ifndef SHIPTRIGGER_T3587195811_H
#define SHIPTRIGGER_T3587195811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipTrigger
struct  ShipTrigger_t3587195811  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ShipTrigger::ship
	GameObject_t1113636619 * ___ship_2;
	// UnityEngine.Animator ShipTrigger::anim
	Animator_t434523843 * ___anim_3;

public:
	inline static int32_t get_offset_of_ship_2() { return static_cast<int32_t>(offsetof(ShipTrigger_t3587195811, ___ship_2)); }
	inline GameObject_t1113636619 * get_ship_2() const { return ___ship_2; }
	inline GameObject_t1113636619 ** get_address_of_ship_2() { return &___ship_2; }
	inline void set_ship_2(GameObject_t1113636619 * value)
	{
		___ship_2 = value;
		Il2CppCodeGenWriteBarrier((&___ship_2), value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(ShipTrigger_t3587195811, ___anim_3)); }
	inline Animator_t434523843 * get_anim_3() const { return ___anim_3; }
	inline Animator_t434523843 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t434523843 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier((&___anim_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHIPTRIGGER_T3587195811_H
#ifndef SCROLLINGBACKGROUND_T4272380809_H
#define SCROLLINGBACKGROUND_T4272380809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollingBackground
struct  ScrollingBackground_t4272380809  : public MonoBehaviour_t3962482529
{
public:
	// System.Single ScrollingBackground::backgroundSize
	float ___backgroundSize_2;
	// UnityEngine.Transform ScrollingBackground::cameraTransform
	Transform_t3600365921 * ___cameraTransform_3;
	// UnityEngine.Transform[] ScrollingBackground::layers
	TransformU5BU5D_t807237628* ___layers_4;
	// System.Single ScrollingBackground::viewZone
	float ___viewZone_5;
	// System.Int32 ScrollingBackground::leftIndex
	int32_t ___leftIndex_6;
	// System.Int32 ScrollingBackground::rightIndex
	int32_t ___rightIndex_7;

public:
	inline static int32_t get_offset_of_backgroundSize_2() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___backgroundSize_2)); }
	inline float get_backgroundSize_2() const { return ___backgroundSize_2; }
	inline float* get_address_of_backgroundSize_2() { return &___backgroundSize_2; }
	inline void set_backgroundSize_2(float value)
	{
		___backgroundSize_2 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_3() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___cameraTransform_3)); }
	inline Transform_t3600365921 * get_cameraTransform_3() const { return ___cameraTransform_3; }
	inline Transform_t3600365921 ** get_address_of_cameraTransform_3() { return &___cameraTransform_3; }
	inline void set_cameraTransform_3(Transform_t3600365921 * value)
	{
		___cameraTransform_3 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTransform_3), value);
	}

	inline static int32_t get_offset_of_layers_4() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___layers_4)); }
	inline TransformU5BU5D_t807237628* get_layers_4() const { return ___layers_4; }
	inline TransformU5BU5D_t807237628** get_address_of_layers_4() { return &___layers_4; }
	inline void set_layers_4(TransformU5BU5D_t807237628* value)
	{
		___layers_4 = value;
		Il2CppCodeGenWriteBarrier((&___layers_4), value);
	}

	inline static int32_t get_offset_of_viewZone_5() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___viewZone_5)); }
	inline float get_viewZone_5() const { return ___viewZone_5; }
	inline float* get_address_of_viewZone_5() { return &___viewZone_5; }
	inline void set_viewZone_5(float value)
	{
		___viewZone_5 = value;
	}

	inline static int32_t get_offset_of_leftIndex_6() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___leftIndex_6)); }
	inline int32_t get_leftIndex_6() const { return ___leftIndex_6; }
	inline int32_t* get_address_of_leftIndex_6() { return &___leftIndex_6; }
	inline void set_leftIndex_6(int32_t value)
	{
		___leftIndex_6 = value;
	}

	inline static int32_t get_offset_of_rightIndex_7() { return static_cast<int32_t>(offsetof(ScrollingBackground_t4272380809, ___rightIndex_7)); }
	inline int32_t get_rightIndex_7() const { return ___rightIndex_7; }
	inline int32_t* get_address_of_rightIndex_7() { return &___rightIndex_7; }
	inline void set_rightIndex_7(int32_t value)
	{
		___rightIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLINGBACKGROUND_T4272380809_H
#ifndef SCENECONTROLLER_T2849316448_H
#define SCENECONTROLLER_T2849316448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t2849316448  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECONTROLLER_T2849316448_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef PLAYERMOVEMENT_T2731566919_H
#define PLAYERMOVEMENT_T2731566919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t2731566919  : public MonoBehaviour_t3962482529
{
public:
	// System.Single PlayerMovement::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single PlayerMovement::m_JumpForce
	float ___m_JumpForce_3;
	// System.Boolean PlayerMovement::m_AirControl
	bool ___m_AirControl_4;
	// UnityEngine.LayerMask PlayerMovement::m_WhatIsGround
	LayerMask_t3493934918  ___m_WhatIsGround_5;
	// UnityEngine.Transform PlayerMovement::m_GroundCheck
	Transform_t3600365921 * ___m_GroundCheck_6;
	// System.Boolean PlayerMovement::m_Grounded
	bool ___m_Grounded_8;
	// UnityEngine.Animator PlayerMovement::m_Anim
	Animator_t434523843 * ___m_Anim_9;
	// UnityEngine.Rigidbody2D PlayerMovement::m_Rigidbody2D
	Rigidbody2D_t939494601 * ___m_Rigidbody2D_10;
	// System.Boolean PlayerMovement::m_FacingRight
	bool ___m_FacingRight_11;
	// UnityEngine.Vector3 PlayerMovement::v_faceRight
	Vector3_t3722313464  ___v_faceRight_12;
	// UnityEngine.Vector3 PlayerMovement::v_faceLeft
	Vector3_t3722313464  ___v_faceLeft_13;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_JumpForce_3)); }
	inline float get_m_JumpForce_3() const { return ___m_JumpForce_3; }
	inline float* get_address_of_m_JumpForce_3() { return &___m_JumpForce_3; }
	inline void set_m_JumpForce_3(float value)
	{
		___m_JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_AirControl_4)); }
	inline bool get_m_AirControl_4() const { return ___m_AirControl_4; }
	inline bool* get_address_of_m_AirControl_4() { return &___m_AirControl_4; }
	inline void set_m_AirControl_4(bool value)
	{
		___m_AirControl_4 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_WhatIsGround_5)); }
	inline LayerMask_t3493934918  get_m_WhatIsGround_5() const { return ___m_WhatIsGround_5; }
	inline LayerMask_t3493934918 * get_address_of_m_WhatIsGround_5() { return &___m_WhatIsGround_5; }
	inline void set_m_WhatIsGround_5(LayerMask_t3493934918  value)
	{
		___m_WhatIsGround_5 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_GroundCheck_6)); }
	inline Transform_t3600365921 * get_m_GroundCheck_6() const { return ___m_GroundCheck_6; }
	inline Transform_t3600365921 ** get_address_of_m_GroundCheck_6() { return &___m_GroundCheck_6; }
	inline void set_m_GroundCheck_6(Transform_t3600365921 * value)
	{
		___m_GroundCheck_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroundCheck_6), value);
	}

	inline static int32_t get_offset_of_m_Grounded_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_Grounded_8)); }
	inline bool get_m_Grounded_8() const { return ___m_Grounded_8; }
	inline bool* get_address_of_m_Grounded_8() { return &___m_Grounded_8; }
	inline void set_m_Grounded_8(bool value)
	{
		___m_Grounded_8 = value;
	}

	inline static int32_t get_offset_of_m_Anim_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_Anim_9)); }
	inline Animator_t434523843 * get_m_Anim_9() const { return ___m_Anim_9; }
	inline Animator_t434523843 ** get_address_of_m_Anim_9() { return &___m_Anim_9; }
	inline void set_m_Anim_9(Animator_t434523843 * value)
	{
		___m_Anim_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Anim_9), value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_Rigidbody2D_10)); }
	inline Rigidbody2D_t939494601 * get_m_Rigidbody2D_10() const { return ___m_Rigidbody2D_10; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_Rigidbody2D_10() { return &___m_Rigidbody2D_10; }
	inline void set_m_Rigidbody2D_10(Rigidbody2D_t939494601 * value)
	{
		___m_Rigidbody2D_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody2D_10), value);
	}

	inline static int32_t get_offset_of_m_FacingRight_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___m_FacingRight_11)); }
	inline bool get_m_FacingRight_11() const { return ___m_FacingRight_11; }
	inline bool* get_address_of_m_FacingRight_11() { return &___m_FacingRight_11; }
	inline void set_m_FacingRight_11(bool value)
	{
		___m_FacingRight_11 = value;
	}

	inline static int32_t get_offset_of_v_faceRight_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___v_faceRight_12)); }
	inline Vector3_t3722313464  get_v_faceRight_12() const { return ___v_faceRight_12; }
	inline Vector3_t3722313464 * get_address_of_v_faceRight_12() { return &___v_faceRight_12; }
	inline void set_v_faceRight_12(Vector3_t3722313464  value)
	{
		___v_faceRight_12 = value;
	}

	inline static int32_t get_offset_of_v_faceLeft_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t2731566919, ___v_faceLeft_13)); }
	inline Vector3_t3722313464  get_v_faceLeft_13() const { return ___v_faceLeft_13; }
	inline Vector3_t3722313464 * get_address_of_v_faceLeft_13() { return &___v_faceLeft_13; }
	inline void set_v_faceLeft_13(Vector3_t3722313464  value)
	{
		___v_faceLeft_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVEMENT_T2731566919_H
#ifndef PLAYERINPUT_T2642816418_H
#define PLAYERINPUT_T2642816418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerInput
struct  PlayerInput_t2642816418  : public MonoBehaviour_t3962482529
{
public:
	// Personagem PlayerInput::c_movement
	Personagem_t2484933062 * ___c_movement_2;
	// System.Boolean PlayerInput::isJumping
	bool ___isJumping_3;
	// System.Boolean PlayerInput::wait
	bool ___wait_4;
	// UnityEngine.GameObject PlayerInput::button
	GameObject_t1113636619 * ___button_5;

public:
	inline static int32_t get_offset_of_c_movement_2() { return static_cast<int32_t>(offsetof(PlayerInput_t2642816418, ___c_movement_2)); }
	inline Personagem_t2484933062 * get_c_movement_2() const { return ___c_movement_2; }
	inline Personagem_t2484933062 ** get_address_of_c_movement_2() { return &___c_movement_2; }
	inline void set_c_movement_2(Personagem_t2484933062 * value)
	{
		___c_movement_2 = value;
		Il2CppCodeGenWriteBarrier((&___c_movement_2), value);
	}

	inline static int32_t get_offset_of_isJumping_3() { return static_cast<int32_t>(offsetof(PlayerInput_t2642816418, ___isJumping_3)); }
	inline bool get_isJumping_3() const { return ___isJumping_3; }
	inline bool* get_address_of_isJumping_3() { return &___isJumping_3; }
	inline void set_isJumping_3(bool value)
	{
		___isJumping_3 = value;
	}

	inline static int32_t get_offset_of_wait_4() { return static_cast<int32_t>(offsetof(PlayerInput_t2642816418, ___wait_4)); }
	inline bool get_wait_4() const { return ___wait_4; }
	inline bool* get_address_of_wait_4() { return &___wait_4; }
	inline void set_wait_4(bool value)
	{
		___wait_4 = value;
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(PlayerInput_t2642816418, ___button_5)); }
	inline GameObject_t1113636619 * get_button_5() const { return ___button_5; }
	inline GameObject_t1113636619 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(GameObject_t1113636619 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((&___button_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERINPUT_T2642816418_H
#ifndef CIRCLECOLLIDER2D_T662546754_H
#define CIRCLECOLLIDER2D_T662546754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CircleCollider2D
struct  CircleCollider2D_t662546754  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIRCLECOLLIDER2D_T662546754_H
#ifndef PERSONAGEM_T2484933062_H
#define PERSONAGEM_T2484933062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Personagem
struct  Personagem_t2484933062  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Personagem::m_MaxSpeed
	float ___m_MaxSpeed_2;
	// System.Single Personagem::m_JumpForce
	float ___m_JumpForce_3;
	// System.Boolean Personagem::m_AirControl
	bool ___m_AirControl_4;
	// UnityEngine.LayerMask Personagem::m_WhatIsGround
	LayerMask_t3493934918  ___m_WhatIsGround_5;
	// UnityEngine.Transform Personagem::m_GroundCheck
	Transform_t3600365921 * ___m_GroundCheck_6;
	// System.Boolean Personagem::m_Grounded
	bool ___m_Grounded_8;
	// UnityEngine.Animator Personagem::m_Anim
	Animator_t434523843 * ___m_Anim_9;
	// UnityEngine.Rigidbody2D Personagem::m_Rigidbody2D
	Rigidbody2D_t939494601 * ___m_Rigidbody2D_10;
	// System.Boolean Personagem::m_FacingRight
	bool ___m_FacingRight_11;
	// UnityEngine.GameObject Personagem::gameOver
	GameObject_t1113636619 * ___gameOver_12;
	// UnityEngine.Animator Personagem::animGameOver
	Animator_t434523843 * ___animGameOver_13;
	// System.Boolean Personagem::stop
	bool ___stop_14;
	// System.Boolean Personagem::canPlay
	bool ___canPlay_15;
	// UnityEngine.Vector3 Personagem::v_faceRight
	Vector3_t3722313464  ___v_faceRight_16;
	// UnityEngine.Vector3 Personagem::v_faceLeft
	Vector3_t3722313464  ___v_faceLeft_17;
	// UnityEngine.UI.Text Personagem::scoreText
	Text_t1901882714 * ___scoreText_18;
	// System.Int32 Personagem::ponto
	int32_t ___ponto_19;
	// System.Int32 Personagem::scoreCount
	int32_t ___scoreCount_20;
	// UnityEngine.Vector2 Personagem::touchOrigin
	Vector2_t2156229523  ___touchOrigin_21;

public:
	inline static int32_t get_offset_of_m_MaxSpeed_2() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_MaxSpeed_2)); }
	inline float get_m_MaxSpeed_2() const { return ___m_MaxSpeed_2; }
	inline float* get_address_of_m_MaxSpeed_2() { return &___m_MaxSpeed_2; }
	inline void set_m_MaxSpeed_2(float value)
	{
		___m_MaxSpeed_2 = value;
	}

	inline static int32_t get_offset_of_m_JumpForce_3() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_JumpForce_3)); }
	inline float get_m_JumpForce_3() const { return ___m_JumpForce_3; }
	inline float* get_address_of_m_JumpForce_3() { return &___m_JumpForce_3; }
	inline void set_m_JumpForce_3(float value)
	{
		___m_JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_4() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_AirControl_4)); }
	inline bool get_m_AirControl_4() const { return ___m_AirControl_4; }
	inline bool* get_address_of_m_AirControl_4() { return &___m_AirControl_4; }
	inline void set_m_AirControl_4(bool value)
	{
		___m_AirControl_4 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_5() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_WhatIsGround_5)); }
	inline LayerMask_t3493934918  get_m_WhatIsGround_5() const { return ___m_WhatIsGround_5; }
	inline LayerMask_t3493934918 * get_address_of_m_WhatIsGround_5() { return &___m_WhatIsGround_5; }
	inline void set_m_WhatIsGround_5(LayerMask_t3493934918  value)
	{
		___m_WhatIsGround_5 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_6() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_GroundCheck_6)); }
	inline Transform_t3600365921 * get_m_GroundCheck_6() const { return ___m_GroundCheck_6; }
	inline Transform_t3600365921 ** get_address_of_m_GroundCheck_6() { return &___m_GroundCheck_6; }
	inline void set_m_GroundCheck_6(Transform_t3600365921 * value)
	{
		___m_GroundCheck_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GroundCheck_6), value);
	}

	inline static int32_t get_offset_of_m_Grounded_8() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_Grounded_8)); }
	inline bool get_m_Grounded_8() const { return ___m_Grounded_8; }
	inline bool* get_address_of_m_Grounded_8() { return &___m_Grounded_8; }
	inline void set_m_Grounded_8(bool value)
	{
		___m_Grounded_8 = value;
	}

	inline static int32_t get_offset_of_m_Anim_9() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_Anim_9)); }
	inline Animator_t434523843 * get_m_Anim_9() const { return ___m_Anim_9; }
	inline Animator_t434523843 ** get_address_of_m_Anim_9() { return &___m_Anim_9; }
	inline void set_m_Anim_9(Animator_t434523843 * value)
	{
		___m_Anim_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Anim_9), value);
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_10() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_Rigidbody2D_10)); }
	inline Rigidbody2D_t939494601 * get_m_Rigidbody2D_10() const { return ___m_Rigidbody2D_10; }
	inline Rigidbody2D_t939494601 ** get_address_of_m_Rigidbody2D_10() { return &___m_Rigidbody2D_10; }
	inline void set_m_Rigidbody2D_10(Rigidbody2D_t939494601 * value)
	{
		___m_Rigidbody2D_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody2D_10), value);
	}

	inline static int32_t get_offset_of_m_FacingRight_11() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___m_FacingRight_11)); }
	inline bool get_m_FacingRight_11() const { return ___m_FacingRight_11; }
	inline bool* get_address_of_m_FacingRight_11() { return &___m_FacingRight_11; }
	inline void set_m_FacingRight_11(bool value)
	{
		___m_FacingRight_11 = value;
	}

	inline static int32_t get_offset_of_gameOver_12() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___gameOver_12)); }
	inline GameObject_t1113636619 * get_gameOver_12() const { return ___gameOver_12; }
	inline GameObject_t1113636619 ** get_address_of_gameOver_12() { return &___gameOver_12; }
	inline void set_gameOver_12(GameObject_t1113636619 * value)
	{
		___gameOver_12 = value;
		Il2CppCodeGenWriteBarrier((&___gameOver_12), value);
	}

	inline static int32_t get_offset_of_animGameOver_13() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___animGameOver_13)); }
	inline Animator_t434523843 * get_animGameOver_13() const { return ___animGameOver_13; }
	inline Animator_t434523843 ** get_address_of_animGameOver_13() { return &___animGameOver_13; }
	inline void set_animGameOver_13(Animator_t434523843 * value)
	{
		___animGameOver_13 = value;
		Il2CppCodeGenWriteBarrier((&___animGameOver_13), value);
	}

	inline static int32_t get_offset_of_stop_14() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___stop_14)); }
	inline bool get_stop_14() const { return ___stop_14; }
	inline bool* get_address_of_stop_14() { return &___stop_14; }
	inline void set_stop_14(bool value)
	{
		___stop_14 = value;
	}

	inline static int32_t get_offset_of_canPlay_15() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___canPlay_15)); }
	inline bool get_canPlay_15() const { return ___canPlay_15; }
	inline bool* get_address_of_canPlay_15() { return &___canPlay_15; }
	inline void set_canPlay_15(bool value)
	{
		___canPlay_15 = value;
	}

	inline static int32_t get_offset_of_v_faceRight_16() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___v_faceRight_16)); }
	inline Vector3_t3722313464  get_v_faceRight_16() const { return ___v_faceRight_16; }
	inline Vector3_t3722313464 * get_address_of_v_faceRight_16() { return &___v_faceRight_16; }
	inline void set_v_faceRight_16(Vector3_t3722313464  value)
	{
		___v_faceRight_16 = value;
	}

	inline static int32_t get_offset_of_v_faceLeft_17() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___v_faceLeft_17)); }
	inline Vector3_t3722313464  get_v_faceLeft_17() const { return ___v_faceLeft_17; }
	inline Vector3_t3722313464 * get_address_of_v_faceLeft_17() { return &___v_faceLeft_17; }
	inline void set_v_faceLeft_17(Vector3_t3722313464  value)
	{
		___v_faceLeft_17 = value;
	}

	inline static int32_t get_offset_of_scoreText_18() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___scoreText_18)); }
	inline Text_t1901882714 * get_scoreText_18() const { return ___scoreText_18; }
	inline Text_t1901882714 ** get_address_of_scoreText_18() { return &___scoreText_18; }
	inline void set_scoreText_18(Text_t1901882714 * value)
	{
		___scoreText_18 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_18), value);
	}

	inline static int32_t get_offset_of_ponto_19() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___ponto_19)); }
	inline int32_t get_ponto_19() const { return ___ponto_19; }
	inline int32_t* get_address_of_ponto_19() { return &___ponto_19; }
	inline void set_ponto_19(int32_t value)
	{
		___ponto_19 = value;
	}

	inline static int32_t get_offset_of_scoreCount_20() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___scoreCount_20)); }
	inline int32_t get_scoreCount_20() const { return ___scoreCount_20; }
	inline int32_t* get_address_of_scoreCount_20() { return &___scoreCount_20; }
	inline void set_scoreCount_20(int32_t value)
	{
		___scoreCount_20 = value;
	}

	inline static int32_t get_offset_of_touchOrigin_21() { return static_cast<int32_t>(offsetof(Personagem_t2484933062, ___touchOrigin_21)); }
	inline Vector2_t2156229523  get_touchOrigin_21() const { return ___touchOrigin_21; }
	inline Vector2_t2156229523 * get_address_of_touchOrigin_21() { return &___touchOrigin_21; }
	inline void set_touchOrigin_21(Vector2_t2156229523  value)
	{
		___touchOrigin_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSONAGEM_T2484933062_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef IKCCD2D_T149469636_H
#define IKCCD2D_T149469636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkCCD2D
struct  IkCCD2D_t149469636  : public Ik2D_t2093579821
{
public:
	// System.Int32 Anima2D.IkCCD2D::iterations
	int32_t ___iterations_10;
	// System.Single Anima2D.IkCCD2D::damping
	float ___damping_11;
	// Anima2D.IkSolver2DCCD Anima2D.IkCCD2D::m_Solver
	IkSolver2DCCD_t3651796268 * ___m_Solver_12;

public:
	inline static int32_t get_offset_of_iterations_10() { return static_cast<int32_t>(offsetof(IkCCD2D_t149469636, ___iterations_10)); }
	inline int32_t get_iterations_10() const { return ___iterations_10; }
	inline int32_t* get_address_of_iterations_10() { return &___iterations_10; }
	inline void set_iterations_10(int32_t value)
	{
		___iterations_10 = value;
	}

	inline static int32_t get_offset_of_damping_11() { return static_cast<int32_t>(offsetof(IkCCD2D_t149469636, ___damping_11)); }
	inline float get_damping_11() const { return ___damping_11; }
	inline float* get_address_of_damping_11() { return &___damping_11; }
	inline void set_damping_11(float value)
	{
		___damping_11 = value;
	}

	inline static int32_t get_offset_of_m_Solver_12() { return static_cast<int32_t>(offsetof(IkCCD2D_t149469636, ___m_Solver_12)); }
	inline IkSolver2DCCD_t3651796268 * get_m_Solver_12() const { return ___m_Solver_12; }
	inline IkSolver2DCCD_t3651796268 ** get_address_of_m_Solver_12() { return &___m_Solver_12; }
	inline void set_m_Solver_12(IkSolver2DCCD_t3651796268 * value)
	{
		___m_Solver_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Solver_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKCCD2D_T149469636_H
#ifndef IKLIMB2D_T1103101996_H
#define IKLIMB2D_T1103101996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Anima2D.IkLimb2D
struct  IkLimb2D_t1103101996  : public Ik2D_t2093579821
{
public:
	// System.Boolean Anima2D.IkLimb2D::flip
	bool ___flip_10;
	// Anima2D.IkSolver2DLimb Anima2D.IkLimb2D::m_Solver
	IkSolver2DLimb_t33506378 * ___m_Solver_11;

public:
	inline static int32_t get_offset_of_flip_10() { return static_cast<int32_t>(offsetof(IkLimb2D_t1103101996, ___flip_10)); }
	inline bool get_flip_10() const { return ___flip_10; }
	inline bool* get_address_of_flip_10() { return &___flip_10; }
	inline void set_flip_10(bool value)
	{
		___flip_10 = value;
	}

	inline static int32_t get_offset_of_m_Solver_11() { return static_cast<int32_t>(offsetof(IkLimb2D_t1103101996, ___m_Solver_11)); }
	inline IkSolver2DLimb_t33506378 * get_m_Solver_11() const { return ___m_Solver_11; }
	inline IkSolver2DLimb_t33506378 ** get_address_of_m_Solver_11() { return &___m_Solver_11; }
	inline void set_m_Solver_11(IkSolver2DLimb_t33506378 * value)
	{
		___m_Solver_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Solver_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IKLIMB2D_T1103101996_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t2302988098  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Matrix4x4_t1817901843  m_Items[1];

public:
	inline Matrix4x4_t1817901843  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_t1817901843 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_t1817901843  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_t1817901843  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_t1817901843 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_t1817901843  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_t3600365921 * m_Items[1];

public:
	inline Transform_t3600365921 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Transform_t3600365921 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_t3600365921 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_t3600365921 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t561872642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t340375123 * m_Items[1];

public:
	inline Material_t340375123 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Material_t340375123 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t340375123 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t340375123 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Anima2D.SpriteMesh[]
struct SpriteMeshU5BU5D_t497469632  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteMesh_t4133440749 * m_Items[1];

public:
	inline SpriteMesh_t4133440749 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteMesh_t4133440749 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteMesh_t4133440749 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteMesh_t4133440749 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteMesh_t4133440749 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteMesh_t4133440749 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Anima2D.Bone2D[]
struct Bone2DU5BU5D_t2775241867  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone2D_t3065299646 * m_Items[1];

public:
	inline Bone2D_t3065299646 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone2D_t3065299646 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone2D_t3065299646 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Bone2D_t3065299646 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone2D_t3065299646 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone2D_t3065299646 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t1776052410  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) BoneWeight_t1955788027  m_Items[1];

public:
	inline BoneWeight_t1955788027  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t1955788027 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t1955788027  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t1955788027  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t1955788027 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t1955788027  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t1693969295  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_t2806799626 * m_Items[1];

public:
	inline Collider2D_t2806799626 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider2D_t2806799626 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_t2806799626 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_t2806799626 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Anima2D.SpriteMeshInstance[]
struct SpriteMeshInstanceU5BU5D_t371572014  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteMeshInstance_t871590551 * m_Items[1];

public:
	inline SpriteMeshInstance_t871590551 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteMeshInstance_t871590551 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteMeshInstance_t871590551 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteMeshInstance_t871590551 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteMeshInstance_t871590551 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteMeshInstance_t871590551 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_t4267154537  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CombineInstance_t988503480  m_Items[1];

public:
	inline CombineInstance_t988503480  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CombineInstance_t988503480 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CombineInstance_t988503480  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CombineInstance_t988503480  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CombineInstance_t988503480 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CombineInstance_t988503480  value)
	{
		m_Items[index] = value;
	}
};
// UnityChan.SpringCollider[]
struct SpringColliderU5BU5D_t338282993  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringCollider_t2692606160 * m_Items[1];

public:
	inline SpringCollider_t2692606160 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringCollider_t2692606160 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringCollider_t2692606160 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpringCollider_t2692606160 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringCollider_t2692606160 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringCollider_t2692606160 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityChan.SpringBone[]
struct SpringBoneU5BU5D_t636815781  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpringBone_t3999458348 * m_Items[1];

public:
	inline SpringBone_t3999458348 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpringBone_t3999458348 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpringBone_t3999458348 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpringBone_t3999458348 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpringBone_t3999458348 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpringBone_t3999458348 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C"  void List_1__ctor_m3947764094_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C"  void List_1_set_Item_m1979164443_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m3141366230_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::.ctor()
extern "C"  void List_1__ctor_m4265960327_gshared (List_1_t3427862769 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor()
extern "C"  void List_1__ctor_m1616453381_gshared (List_1_t2460578222 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::Add(!0)
extern "C"  void List_1_Add_m286682117_gshared (List_1_t3427862769 * __this, BoneWeight_t1955788027  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
extern "C"  void List_1_Add_m173306783_gshared (List_1_t2460578222 * __this, CombineInstance_t988503480  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::.ctor()
extern "C"  void List_1__ctor_m4110693992_gshared (List_1_t3289976585 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::Add(!0)
extern "C"  void List_1_Add_m885543020_gshared (List_1_t3289976585 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.CombineInstance>::ToArray()
extern "C"  CombineInstanceU5BU5D_t4267154537* List_1_ToArray_m3743205544_gshared (List_1_t2460578222 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.BoneWeight>::ToArray()
extern "C"  BoneWeightU5BU5D_t1776052410* List_1_ToArray_m48270846_gshared (List_1_t3427862769 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::ToArray()
extern "C"  Matrix4x4U5BU5D_t2302988098* List_1_ToArray_m520311481_gshared (List_1_t3289976585 * __this, const RuntimeMethod* method);

// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Anima2D.Bone2D::get_color()
extern "C"  Color_t2555686324  Bone2D_get_color_m3237587994 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Bone2D::set_child(Anima2D.Bone2D)
extern "C"  void Bone2D_set_child_m1841584567 (Bone2D_t3065299646 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Anima2D.Bone2D>()
#define Component_GetComponent_TisBone2D_t3065299646_m2974933587(__this, method) ((  Bone2D_t3065299646 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.Bone2D::get_localLength()
extern "C"  float Bone2D_get_localLength_m3704420802 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Anima2D.Bone2D::get_localEndPosition()
extern "C"  Vector3_t3722313464  Bone2D_get_localEndPosition_m569969392 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Bone2D::get_child()
extern "C"  Bone2D_t3065299646 * Bone2D_get_child_m427147334 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformVector(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformVector_m1951285617 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C"  float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Bone2D::get_parentBone()
extern "C"  Bone2D_t3065299646 * Bone2D_get_parentBone_m1149155992 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anima2D.Bone2D::get_chainLength()
extern "C"  int32_t Bone2D_get_chainLength_m2780646894 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Bone2D::get_linkedParentBone()
extern "C"  Bone2D_t3065299646 * Bone2D_get_linkedParentBone_m4065394967 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Control::get_bone()
extern "C"  Bone2D_t3065299646 * Control_get_bone_m886963234 (Control_t3801119829 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::set_target(Anima2D.Bone2D)
extern "C"  void Ik2D_set_target_m937116090 (Ik2D_t2093579821 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::InitializeSolver()
extern "C"  void Ik2D_InitializeSolver_m3255783745 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C"  Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
extern "C"  void Gizmos_set_matrix_m3287403258 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Behaviour::get_enabled()
extern "C"  bool Behaviour_get_enabled_m753527255 (Behaviour_t1437897464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Ik2D::get_target()
extern "C"  Bone2D_t3065299646 * Ik2D_get_target_m22966063 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anima2D.Ik2D::get_numBones()
extern "C"  int32_t Ik2D_get_numBones_m2446488923 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawIcon(UnityEngine.Vector3,System.String)
extern "C"  void Gizmos_DrawIcon_m3772799597 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::SetAttachedIK(Anima2D.Ik2D)
extern "C"  void Ik2D_SetAttachedIK_m3904731071 (Ik2D_t2093579821 * __this, Ik2D_t2093579821 * ___ik2D0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::UpdateIK()
extern "C"  void Ik2D_UpdateIK_m1470206832 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.IkSolver2D Anima2D.Ik2D::get_solver()
extern "C"  IkSolver2D_t3375840577 * Ik2D_get_solver_m1723041568 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose> Anima2D.IkSolver2D::get_solverPoses()
extern "C"  List_1_t3354082258 * IkSolver2D_get_solverPoses_m201587207 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>::get_Item(System.Int32)
#define List_1_get_Item_m2802291936(__this, p0, method) ((  SolverPose_t1882007516 * (*) (List_1_t3354082258 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// Anima2D.Bone2D Anima2D.IkSolver2D/SolverPose::get_bone()
extern "C"  Bone2D_t3065299646 * SolverPose_get_bone_m364338813 (SolverPose_t1882007516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Bone2D::set_attachedIK(Anima2D.Ik2D)
extern "C"  void Bone2D_set_attachedIK_m3632604100 (Bone2D_t3065299646 * __this, Ik2D_t2093579821 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>::get_Count()
#define List_1_get_Count_m4291941635(__this, method) ((  int32_t (*) (List_1_t3354082258 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void Anima2D.IkSolver2D::Update()
extern "C"  void IkSolver2D_Update_m4196431950 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anima2D.Ik2D::get_orientChild()
extern "C"  bool Ik2D_get_orientChild_m1226322411 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.Ik2D::get_weight()
extern "C"  float Ik2D_get_weight_m2550269346 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::set_weight(System.Single)
extern "C"  void IkSolver2D_set_weight_m16666026 (IkSolver2D_t3375840577 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anima2D.Ik2D::get_restoreDefaultPose()
extern "C"  bool Ik2D_get_restoreDefaultPose_m3713530990 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::set_restoreDefaultPose(System.Boolean)
extern "C"  void IkSolver2D_set_restoreDefaultPose_m2744462715 (IkSolver2D_t3375840577 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.Bone2D::GetChainBoneByIndex(Anima2D.Bone2D,System.Int32)
extern "C"  Bone2D_t3065299646 * Bone2D_GetChainBoneByIndex_m1027494730 (RuntimeObject * __this /* static, unused */, Bone2D_t3065299646 * ___chainTip0, int32_t ___index1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::Initialize(Anima2D.Bone2D,System.Int32)
extern "C"  void IkSolver2D_Initialize_m2968157143 (IkSolver2D_t3375840577 * __this, Bone2D_t3065299646 * ____rootBone0, int32_t ___numChilds1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2DCCD::.ctor()
extern "C"  void IkSolver2DCCD__ctor_m4242123738 (IkSolver2DCCD_t3651796268 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::.ctor()
extern "C"  void Ik2D__ctor_m3571845971 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::OnIkUpdate()
extern "C"  void Ik2D_OnIkUpdate_m1448462348 (Ik2D_t2093579821 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.Ik2D>::.ctor()
#define List_1__ctor_m483261293(__this, method) ((  void (*) (List_1_t3565654563 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<Anima2D.Ik2D>::get_Item(System.Int32)
#define List_1_get_Item_m3415608264(__this, p0, method) ((  Ik2D_t2093579821 * (*) (List_1_t3565654563 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Anima2D.Ik2D>::get_Count()
#define List_1_get_Count_m1848702612(__this, method) ((  int32_t (*) (List_1_t3565654563 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void Anima2D.IkGroup::UpdateGroup()
extern "C"  void IkGroup_UpdateGroup_m1084264278 (IkGroup_t3191562885 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2DLimb::.ctor()
extern "C"  void IkSolver2DLimb__ctor_m3591894099 (IkSolver2DLimb_t33506378 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.Ik2D::set_numBones(System.Int32)
extern "C"  void Ik2D_set_numBones_m1611035203 (Ik2D_t2093579821 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>::.ctor()
#define List_1__ctor_m3957462430(__this, method) ((  void (*) (List_1_t3354082258 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::set_rootBone(Anima2D.Bone2D)
extern "C"  void IkSolver2D_set_rootBone_m634875102 (IkSolver2D_t3375840577 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.Bone2D Anima2D.IkSolver2D::get_rootBone()
extern "C"  Bone2D_t3065299646 * IkSolver2D_get_rootBone_m1270924988 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>::Clear()
#define List_1_Clear_m164135322(__this, method) ((  void (*) (List_1_t3354082258 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void Anima2D.IkSolver2D/SolverPose::.ctor()
extern "C"  void SolverPose__ctor_m1427540147 (SolverPose_t1882007516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D/SolverPose::set_bone(Anima2D.Bone2D)
extern "C"  void SolverPose_set_bone_m1300346228 (SolverPose_t1882007516 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose>::Add(!0)
#define List_1_Add_m475487972(__this, p0, method) ((  void (*) (List_1_t3354082258 *, SolverPose_t1882007516 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void Anima2D.IkSolver2D::StoreDefaultPoses()
extern "C"  void IkSolver2D_StoreDefaultPoses_m3143471330 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.IkSolver2D::get_weight()
extern "C"  float IkSolver2D_get_weight_m1487099108 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Anima2D.IkSolver2D::get_restoreDefaultPose()
extern "C"  bool IkSolver2D_get_restoreDefaultPose_m2080064337 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::RestoreDefaultPoses()
extern "C"  void IkSolver2D_RestoreDefaultPoses_m1105316293 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::UpdateBones()
extern "C"  void IkSolver2D_UpdateBones_m364885504 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D/SolverPose::StoreDefaultPose()
extern "C"  void SolverPose_StoreDefaultPose_m1255016989 (SolverPose_t1882007516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D/SolverPose::RestoreDefaultPose()
extern "C"  void SolverPose_RestoreDefaultPose_m973395117 (SolverPose_t1882007516 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Slerp_m1234055455 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.IkSolver2D::.ctor()
extern "C"  void IkSolver2D__ctor_m2521528584 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Anima2D.Bone2D::get_endPosition()
extern "C"  Vector3_t3722313464  Bone2D_get_endPosition_m905033947 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.MathUtils::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SignedAngle_m3328907211 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, Vector3_t3722313464  ___forward2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_AngleAxis_m1767165696 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Anima2D.IkSolver2DCCD::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Vector3_t3722313464  IkSolver2DCCD_RotatePositionFrom_m381530626 (IkSolver2DCCD_t3651796268 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___pivot1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.Bone2D::get_length()
extern "C"  float Bone2D_get_length_m2946475167 (Bone2D_t3065299646 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_ProjectOnPlane_m1805989059 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformDirection_m3843238577 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_Cross_m418170344 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
extern "C"  float Mathf_Sign_m3457838305 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Dot_m1554553447 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C"  float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C"  float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.MathUtils::LineDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_LineDistance_m1644840721 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.MathUtils::SqrtLineDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SqrtLineDistance_m2659604187 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Anima2D.MathUtils::GetScale(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  MathUtils_GetScale_m285242809 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Anima2D.MathUtils::GetRotation(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  MathUtils_GetRotation_m2420503444 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Anima2D.MathUtils::GetPosition(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  MathUtils_GetPosition_m1280138155 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
extern "C"  float Rect_get_xMin_m581135837 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
extern "C"  void Rect_set_xMin_m2413290617 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
extern "C"  float Rect_get_yMin_m2601414109 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
extern "C"  void Rect_set_yMin_m2724127720 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
extern "C"  float Rect_get_xMax_m3018144503 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
extern "C"  void Rect_set_xMax_m1720695099 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
extern "C"  float Rect_get_yMax_m743455479 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
extern "C"  void Rect_set_yMax_m2031532394 (Rect_t2360479859 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C"  int32_t Mathf_RoundToInt_m1874334613 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Anima2D.MathUtils::DiscardLeastSignificantDecimal(System.Single)
extern "C"  float MathUtils_DiscardLeastSignificantDecimal_m1416504335 (RuntimeObject * __this /* static, unused */, float ___v0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anima2D.MathUtils::GetNumberOfDecimalsForMinimumDifference(System.Single)
extern "C"  int32_t MathUtils_GetNumberOfDecimalsForMinimumDifference_m453584236 (RuntimeObject * __this /* static, unused */, float ___minDifference0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
extern "C"  double Math_Round_m4215079316 (RuntimeObject * __this /* static, unused */, double p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t Mathf_Clamp_m2756574208 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex0()
extern "C"  int32_t BoneWeight_get_boneIndex0_m1574980135 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
extern "C"  Matrix4x4_t1817901843  Matrix4x4_op_Multiply_m1876492807 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  p0, Matrix4x4_t1817901843  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex1()
extern "C"  int32_t BoneWeight_get_boneIndex1_m1574914599 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex2()
extern "C"  int32_t BoneWeight_get_boneIndex2_m1574849063 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.BoneWeight::get_boneIndex3()
extern "C"  int32_t BoneWeight_get_boneIndex3_m1574783527 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_identity_m1406790249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m567451091 (Matrix4x4_t1817901843 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.BoneWeight::get_weight0()
extern "C"  float BoneWeight_get_weight0_m749725712 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
extern "C"  void Matrix4x4_set_Item_m1906605342 (Matrix4x4_t1817901843 * __this, int32_t p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.BoneWeight::get_weight1()
extern "C"  float BoneWeight_get_weight1_m3088377872 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.BoneWeight::get_weight2()
extern "C"  float BoneWeight_get_weight2_m367388688 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.BoneWeight::get_weight3()
extern "C"  float BoneWeight_get_weight3_m2706040848 (BoneWeight_t1955788027 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
extern "C"  Matrix4x4_t1817901843  Matrix4x4_get_inverse_m1870592360 (Matrix4x4_t1817901843 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Matrix4x4_MultiplyPoint3x4_m4145063176 (Matrix4x4_t1817901843 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<Anima2D.SpriteMeshInstance>()
#define Component_GetComponent_TisSpriteMeshInstance_t871590551_m2096025117(__this, method) ((  SpriteMeshInstance_t871590551 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Int32 Anima2D.SpriteMeshAnimation::get_frame()
extern "C"  int32_t SpriteMeshAnimation_get_frame_m2515126366 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Anima2D.SpriteMeshInstance Anima2D.SpriteMeshAnimation::get_cachedSpriteMeshInstance()
extern "C"  SpriteMeshInstance_t871590551 * SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::set_spriteMesh(Anima2D.SpriteMesh)
extern "C"  void SpriteMeshInstance_set_spriteMesh_m313332660 (SpriteMeshInstance_t871590551 * __this, SpriteMesh_t4133440749 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.Bone2D>::.ctor()
#define List_1__ctor_m3411318880(__this, method) ((  void (*) (List_1_t242407092 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// UnityEngine.Renderer Anima2D.SpriteMeshInstance::get_cachedRenderer()
extern "C"  Renderer_t2627027031 * SpriteMeshInstance_get_cachedRenderer_m2274103141 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Renderer::get_sortingLayerName()
extern "C"  String_t* Renderer_get_sortingLayerName_m3953662825 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
extern "C"  void Renderer_set_sortingLayerName_m3885968216 (Renderer_t2627027031 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C"  int32_t Renderer_get_sortingLayerID_m3902855301 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::set_sortingLayerID(System.Int32)
extern "C"  void SpriteMeshInstance_set_sortingLayerID_m469326806 (SpriteMeshInstance_t871590551 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Anima2D.Bone2D>::get_Count()
#define List_1_get_Count_m2615777027(__this, method) ((  int32_t (*) (List_1_t242407092 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<Anima2D.Bone2D>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m3575663598(__this, p0, method) ((  void (*) (List_1_t242407092 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void Anima2D.SpriteMeshInstance::set_bones(System.Collections.Generic.List`1<Anima2D.Bone2D>)
extern "C"  void SpriteMeshInstance_set_bones_m2901801063 (SpriteMeshInstance_t871590551 * __this, List_1_t242407092 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Anima2D.Bone2D>::.ctor(System.Int32)
#define List_1__ctor_m3980914492(__this, p0, method) ((  void (*) (List_1_t242407092 *, int32_t, const RuntimeMethod*))List_1__ctor_m3947764094_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Anima2D.Bone2D>::Add(!0)
#define List_1_Add_m121867798(__this, p0, method) ((  void (*) (List_1_t242407092 *, Bone2D_t3065299646 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<Anima2D.Bone2D>::get_Item(System.Int32)
#define List_1_get_Item_m677199212(__this, p0, method) ((  Bone2D_t3065299646 * (*) (List_1_t242407092 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<Anima2D.Bone2D>::set_Item(System.Int32,!0)
#define List_1_set_Item_m1382492940(__this, p0, p1, method) ((  void (*) (List_1_t242407092 *, int32_t, Bone2D_t3065299646 *, const RuntimeMethod*))List_1_set_Item_m1979164443_gshared)(__this, p0, p1, method)
// UnityEngine.SkinnedMeshRenderer Anima2D.SpriteMeshInstance::get_cachedSkinnedRenderer()
extern "C"  SkinnedMeshRenderer_t245602842 * SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
extern "C"  void SkinnedMeshRenderer_set_bones_m4136734710 (SkinnedMeshRenderer_t245602842 * __this, TransformU5BU5D_t807237628* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
extern "C"  void MaterialPropertyBlock__ctor_m3898279695 (MaterialPropertyBlock_t3213117958 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, method) ((  Renderer_t2627027031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SkinnedMeshRenderer>()
#define Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185(__this, method) ((  SkinnedMeshRenderer_t245602842 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// Anima2D.SpriteMesh Anima2D.SpriteMeshInstance::get_spriteMesh()
extern "C"  SpriteMesh_t4133440749 * SpriteMeshInstance_get_spriteMesh_m4268136452 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite Anima2D.SpriteMesh::get_sprite()
extern "C"  Sprite_t280657092 * SpriteMesh_get_sprite_m636723952 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C"  Texture2D_t3840446185 * Sprite_get_texture_m3976398399 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Mesh>(!!0)
#define Object_Instantiate_TisMesh_t3648964284_m1392175164(__this /* static, unused */, p0, method) ((  Mesh_t3648964284 * (*) (RuntimeObject * /* static, unused */, Mesh_t3648964284 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method)
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::UpdateCurrentMesh()
extern "C"  void SpriteMeshInstance_UpdateCurrentMesh_m145774061 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Anima2D.SpriteMesh::get_sharedMesh()
extern "C"  Mesh_t3648964284 * SpriteMesh_get_sharedMesh_m3157703814 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::UpdateInitialMesh()
extern "C"  void SpriteMeshInstance_UpdateInitialMesh_m3583121261 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
extern "C"  void Object_set_hideFlags_m1648752846 (Object_t631007953 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::MarkDynamic()
extern "C"  void Mesh_MarkDynamic_m813264685 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C"  void Mesh_Clear_m2630385472 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
extern "C"  void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_vertices_m3585684815 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_normals_m4099615978 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight[] UnityEngine.Mesh::get_boneWeights()
extern "C"  BoneWeightU5BU5D_t1776052410* Mesh_get_boneWeights_m371091495 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
extern "C"  void Mesh_set_boneWeights_m3094710230 (Mesh_t3648964284 * __this, BoneWeightU5BU5D_t1776052410* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
extern "C"  Matrix4x4U5BU5D_t2302988098* Mesh_get_bindposes_m597973920 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
extern "C"  void Mesh_set_bindposes_m506051887 (Mesh_t3648964284 * __this, Matrix4x4U5BU5D_t2302988098* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* Mesh_get_uv_m4017248 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t2266837910  Mesh_get_bounds_m2004960313 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
extern "C"  void Mesh_set_bounds_m901235523 (Mesh_t3648964284 * __this, Bounds_t2266837910  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Mesh::get_colors()
extern "C"  ColorU5BU5D_t941916413* Mesh_get_colors_m1375263373 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C"  void Mesh_set_colors_m2218481242 (Mesh_t3648964284 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetTriangles(System.Int32)
extern "C"  Int32U5BU5D_t385246372* Mesh_GetTriangles_m973693202 (Mesh_t3648964284 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
extern "C"  void Mesh_SetTriangles_m3871477336 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C"  int32_t Mesh_get_subMeshCount_m3992802841 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::ClearBlendShapes()
extern "C"  void Mesh_ClearBlendShapes_m3194924980 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Mesh::GetBlendShapeName(System.Int32)
extern "C"  String_t* Mesh_GetBlendShapeName_m2641015160 (Mesh_t3648964284 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mesh::GetBlendShapeFrameWeight(System.Int32,System.Int32)
extern "C"  float Mesh_GetBlendShapeFrameWeight_m196188021 (Mesh_t3648964284 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C"  int32_t Mesh_get_vertexCount_m884140614 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::GetBlendShapeFrameVertices(System.Int32,System.Int32,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[])
extern "C"  void Mesh_GetBlendShapeFrameVertices_m2207147822 (Mesh_t3648964284 * __this, int32_t p0, int32_t p1, Vector3U5BU5D_t1718750761* p2, Vector3U5BU5D_t1718750761* p3, Vector3U5BU5D_t1718750761* p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::AddBlendShapeFrame(System.String,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],UnityEngine.Vector3[])
extern "C"  void Mesh_AddBlendShapeFrame_m2920294038 (Mesh_t3648964284 * __this, String_t* p0, float p1, Vector3U5BU5D_t1718750761* p2, Vector3U5BU5D_t1718750761* p3, Vector3U5BU5D_t1718750761* p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::GetBlendShapeFrameCount(System.Int32)
extern "C"  int32_t Mesh_GetBlendShapeFrameCount_m1794976068 (Mesh_t3648964284 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_blendShapeCount()
extern "C"  int32_t Mesh_get_blendShapeCount_m1891235216 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Sprite::get_packed()
extern "C"  bool Sprite_get_packed_m1179604684 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::SetSpriteUVs(UnityEngine.Mesh,UnityEngine.Sprite)
extern "C"  void SpriteMeshInstance_SetSpriteUVs_m545111398 (SpriteMeshInstance_t871590551 * __this, Mesh_t3648964284 * ___mesh0, Sprite_t280657092 * ___sprite1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
extern "C"  void Mesh_UploadMeshData_m969465843 (Mesh_t3648964284 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Anima2D.SpriteMeshInstance::UpdateRenderers()
extern "C"  void SpriteMeshInstance_UpdateRenderers_m2089936899 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Sprite::get_uv()
extern "C"  Vector2U5BU5D_t1457185986* Sprite_get_uv_m2963075876 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
extern "C"  void SkinnedMeshRenderer_set_sharedMesh_m2397334786 (SkinnedMeshRenderer_t245602842 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MeshFilter Anima2D.SpriteMeshInstance::get_cachedMeshFilter()
extern "C"  MeshFilter_t3523625662 * SpriteMeshInstance_get_cachedMeshFilter_m3379629522 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
extern "C"  void MeshFilter_set_sharedMesh_m2173122548 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anima2D.SpriteMeshInstance::get_sortingLayerID()
extern "C"  int32_t SpriteMeshInstance_get_sortingLayerID_m1993069740 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingLayerID(System.Int32)
extern "C"  void Renderer_set_sortingLayerID_m849284518 (Renderer_t2627027031 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Anima2D.SpriteMeshInstance::get_sortingOrder()
extern "C"  int32_t SpriteMeshInstance_get_sortingOrder_m1206238421 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
extern "C"  void Renderer_set_sortingOrder_m549573253 (Renderer_t2627027031 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m2162241463 (Renderer_t2627027031 * __this, MaterialU5BU5D_t561872642* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] Anima2D.SpriteMesh::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t561872642* SpriteMesh_get_sharedMaterials_m1046039914 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MaterialPropertyBlock Anima2D.SpriteMeshInstance::get_materialPropertyBlock()
extern "C"  MaterialPropertyBlock_t3213117958 * SpriteMeshInstance_get_materialPropertyBlock_m2070813736 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Anima2D.SpriteMeshInstance::get_spriteTexture()
extern "C"  Texture2D_t3840446185 * SpriteMeshInstance_get_spriteTexture_m1488351362 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void MaterialPropertyBlock_SetTexture_m3017316857 (MaterialPropertyBlock_t3213117958 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color Anima2D.SpriteMeshInstance::get_color()
extern "C"  Color_t2555686324  SpriteMeshInstance_get_color_m52558017 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MaterialPropertyBlock::SetColor(System.String,UnityEngine.Color)
extern "C"  void MaterialPropertyBlock_SetColor_m3590470453 (MaterialPropertyBlock_t3213117958 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
extern "C"  void Renderer_SetPropertyBlock_m2471545580 (Renderer_t2627027031 * __this, MaterialPropertyBlock_t3213117958 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, method) ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_localEulerAngles_m2136926248 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m1803555822 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
#define GameObject_GetComponent_TisParticleSystem_t1800779281_m2109449193(__this, method) ((  ParticleSystem_t1800779281 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
extern "C"  void AudioSource_set_playOnAwake_m1824967994 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
extern "C"  void Object_Destroy_m3118546832 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m2517112845(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m3141366230_gshared)(__this /* static, unused */, p0, p1, p2, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, method) ((  Camera_t4157153871 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ViewportToWorldPoint_m4277738824 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_WorldToViewportPoint_m1538355680 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
extern "C"  void Vector3_Set_m1737058353 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C"  Vector2_t2156229523  Vector2_get_one_m738793577 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, method) ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C"  Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButtonDown(System.String)
extern "C"  bool CrossPlatformInputManager_GetButtonDown_m1689635996 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C"  int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
extern "C"  Collider2DU5BU5D_t1693969295* Physics2D_OverlapCircleAll_m638049410 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m234840832 (Animator_t434523843 * __this, String_t* p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2156229523  Rigidbody2D_get_velocity_m366589732 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
extern "C"  int32_t Mathf_Abs_m2460432655 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m2865822416 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m1113499586 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m3951609671 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Personagem::continueGame(System.Single)
extern "C"  RuntimeObject* Personagem_continueGame_m305075124 (Personagem_t2484933062 * __this, float ___wait0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
extern "C"  Collider2D_t2806799626 * Collision2D_get_collider_m4087612183 (Collision2D_t2842956331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Personagem::dyingAnimation()
extern "C"  RuntimeObject* Personagem_dyingAnimation_m2095675355 (Personagem_t2484933062 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, method) ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
#define Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992(__this, method) ((  CircleCollider2D_t662546754 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Personagem/<dyingAnimation>c__Iterator0::.ctor()
extern "C"  void U3CdyingAnimationU3Ec__Iterator0__ctor_m1168986108 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Personagem/<continueGame>c__Iterator1::.ctor()
extern "C"  void U3CcontinueGameU3Ec__Iterator1__ctor_m2989830071 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
#define GameObject_GetComponent_TisAnimator_t434523843_m440019408(__this, method) ((  Animator_t434523843 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<Personagem>()
#define Component_GetComponent_TisPersonagem_t2484933062_m3028378119(__this, method) ((  Personagem_t2484933062 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void Personagem::Move(System.Boolean)
extern "C"  void Personagem_Move_m1933571148 (Personagem_t2484933062 * __this, bool ____jump0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::Flip()
extern "C"  void PlayerMovement_Flip_m550244153 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollingBackground::ScrollLeft()
extern "C"  void ScrollingBackground_ScrollLeft_m1688182640 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollingBackground::ScrollRight()
extern "C"  void ScrollingBackground_ScrollRight_m2373045031 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
#define List_1__ctor_m2885667311(__this, method) ((  void (*) (List_1_t777473367 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::.ctor()
#define List_1__ctor_m4265960327(__this, method) ((  void (*) (List_1_t3427862769 *, const RuntimeMethod*))List_1__ctor_m4265960327_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor()
#define List_1__ctor_m1616453381(__this, method) ((  void (*) (List_1_t2460578222 *, const RuntimeMethod*))List_1__ctor_m1616453381_gshared)(__this, method)
// Anima2D.SpriteMeshInstance[] SkinnedMeshCombiner::get_spriteMeshInstances()
extern "C"  SpriteMeshInstanceU5BU5D_t371572014* SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Anima2D.SpriteMeshInstance::get_mesh()
extern "C"  Mesh_t3648964284 * SpriteMeshInstance_get_mesh_m4183687531 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Anima2D.SpriteMeshInstance::get_sharedMesh()
extern "C"  Mesh_t3648964284 * SpriteMeshInstance_get_sharedMesh_m3404105658 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
extern "C"  void BoneWeight_set_boneIndex0_m1320779249 (BoneWeight_t1955788027 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
extern "C"  void BoneWeight_set_boneIndex1_m1320814988 (BoneWeight_t1955788027 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
extern "C"  void BoneWeight_set_boneIndex2_m1320977735 (BoneWeight_t1955788027 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
extern "C"  void BoneWeight_set_boneIndex3_m1321014602 (BoneWeight_t1955788027 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.BoneWeight>::Add(!0)
#define List_1_Add_m286682117(__this, p0, method) ((  void (*) (List_1_t3427862769 *, BoneWeight_t1955788027 , const RuntimeMethod*))List_1_Add_m286682117_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<Anima2D.Bone2D> Anima2D.SpriteMeshInstance::get_bones()
extern "C"  List_1_t242407092 * SpriteMeshInstance_get_bones_m419870594 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityEngine.SkinnedMeshRenderer::get_bones()
extern "C"  TransformU5BU5D_t807237628* SkinnedMeshRenderer_get_bones_m333719399 (SkinnedMeshRenderer_t245602842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
#define List_1_Add_m4073477735(__this, p0, method) ((  void (*) (List_1_t777473367 *, Transform_t3600365921 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void UnityEngine.SkinnedMeshRenderer::BakeMesh(UnityEngine.Mesh)
extern "C"  void SkinnedMeshRenderer_BakeMesh_m2270373039 (SkinnedMeshRenderer_t245602842 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
extern "C"  void CombineInstance_set_mesh_m2654073640 (CombineInstance_t988503480 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.CombineInstance::get_mesh()
extern "C"  Mesh_t3648964284 * CombineInstance_get_mesh_m1043161935 (CombineInstance_t988503480 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Renderer::get_localToWorldMatrix()
extern "C"  Matrix4x4_t1817901843  Renderer_get_localToWorldMatrix_m3040367362 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
extern "C"  void CombineInstance_set_transform_m2807984981 (CombineInstance_t988503480 * __this, Matrix4x4_t1817901843  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
#define List_1_Add_m173306783(__this, p0, method) ((  void (*) (List_1_t2460578222 *, CombineInstance_t988503480 , const RuntimeMethod*))List_1_Add_m173306783_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::.ctor()
#define List_1__ctor_m4110693992(__this, method) ((  void (*) (List_1_t3289976585 *, const RuntimeMethod*))List_1__ctor_m4110693992_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
#define List_1_get_Item_m3022113929(__this, p0, method) ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C"  Matrix4x4_t1817901843  Transform_get_worldToLocalMatrix_m399704877 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::Add(!0)
#define List_1_Add_m885543020(__this, p0, method) ((  void (*) (List_1_t3289976585 *, Matrix4x4_t1817901843 , const RuntimeMethod*))List_1_Add_m885543020_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
#define List_1_get_Count_m3787308655(__this, method) ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
#define GameObject_AddComponent_TisSkinnedMeshRenderer_t245602842_m791335368(__this, method) ((  SkinnedMeshRenderer_t245602842 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
extern "C"  Mesh_t3648964284 * SkinnedMeshRenderer_get_sharedMesh_m1611698282 (SkinnedMeshRenderer_t245602842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<UnityEngine.CombineInstance>::ToArray()
#define List_1_ToArray_m3743205544(__this, method) ((  CombineInstanceU5BU5D_t4267154537* (*) (List_1_t2460578222 *, const RuntimeMethod*))List_1_ToArray_m3743205544_gshared)(__this, method)
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean,System.Boolean)
extern "C"  void Mesh_CombineMeshes_m1492745156 (Mesh_t3648964284 * __this, CombineInstanceU5BU5D_t4267154537* p0, bool p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<UnityEngine.Transform>::ToArray()
#define List_1_ToArray_m2774846862(__this, method) ((  TransformU5BU5D_t807237628* (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.BoneWeight>::ToArray()
#define List_1_ToArray_m48270846(__this, method) ((  BoneWeightU5BU5D_t1776052410* (*) (List_1_t3427862769 *, const RuntimeMethod*))List_1_ToArray_m48270846_gshared)(__this, method)
// !0[] System.Collections.Generic.List`1<UnityEngine.Matrix4x4>::ToArray()
#define List_1_ToArray_m520311481(__this, method) ((  Matrix4x4U5BU5D_t2302988098* (*) (List_1_t3289976585 *, const RuntimeMethod*))List_1_ToArray_m520311481_gshared)(__this, method)
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C"  void Mesh_RecalculateBounds_m39931642 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] Anima2D.SpriteMeshInstance::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t561872642* SpriteMeshInstance_get_sharedMaterials_m1675244170 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_materials(UnityEngine.Material[])
extern "C"  void Renderer_set_materials_m2234097603 (Renderer_t2627027031 * __this, MaterialU5BU5D_t561872642* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SkinnedMeshRenderer SkinnedMeshCombiner::get_cachedSkinnedRenderer()
extern "C"  SkinnedMeshRenderer_t245602842 * SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MaterialPropertyBlock SkinnedMeshCombiner::get_materialPropertyBlock()
extern "C"  MaterialPropertyBlock_t3213117958 * SkinnedMeshCombiner_get_materialPropertyBlock_m225435828 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::.ctor()
#define List_1__ctor_m830205897(__this, method) ((  void (*) (List_1_t412733603 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
#define List_1_get_Item_m4070698242(__this, p0, method) ((  SpriteRenderer_t3235626157 * (*) (List_1_t412733603 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C"  Sprite_t280657092 * SpriteRenderer_get_sprite_m663386871 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Sprite::get_bounds()
extern "C"  Bounds_t2266837910  Sprite_get_bounds_m2438297458 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>::get_Count()
#define List_1_get_Count_m785256684(__this, method) ((  int32_t (*) (List_1_t412733603 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SpriteCycle::set_position(System.Single)
extern "C"  void SpriteCycle_set_position_m3982230784 (SpriteCycle_t1418532713 * __this, float ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<SpriteCycle>()
#define Component_GetComponent_TisSpriteCycle_t1418532713_m2396289970(__this, method) ((  SpriteCycle_t1418532713 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
extern "C"  SpringManager_t418696745 * SpringBone_GetParentSpringManager_m374075626 (SpringBone_t3999458348 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityChan.SpringManager>()
#define Component_GetComponent_TisSpringManager_t418696745_m3257063217(__this, method) ((  SpringManager_t418696745 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_TransformDirection_m3784028109 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_FromToRotation_m3769621427 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_green()
extern "C"  Color_t2555686324  Color_get_green_m490390750 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.SpringManager::UpdateParameters()
extern "C"  void SpringManager_UpdateParameters_m1005264700 (SpringManager_t418696745 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.SpringBone::UpdateSpring()
extern "C"  void SpringBone_UpdateSpring_m2224985026 (SpringBone_t3999458348 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
extern "C"  void SpringManager_UpdateParameter_m3997421808 (SpringManager_t418696745 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t3046754366 * ___curve2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C"  void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C"  void WaypointProgressTracker_Reset_m520452544 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit::get_Waypoints()
extern "C"  TransformU5BU5D_t807237628* WaypointCircuit_get_Waypoints_m731492792 (WaypointCircuit_t445075330 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointCircuit::GetRoutePoint(System.Single)
extern "C"  RoutePoint_t3880028948  WaypointCircuit_GetRoutePoint_m785398240 (WaypointCircuit_t445075330 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C"  void WaypointProgressTracker_set_progressPoint_m1349256587 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C"  RoutePoint_t3880028948  WaypointProgressTracker_get_progressPoint_m155183176 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::GetRoutePosition(System.Single)
extern "C"  Vector3_t3722313464  WaypointCircuit_GetRoutePosition_m1956640709 (WaypointCircuit_t445075330 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_yellow()
extern "C"  Color_t2555686324  Color_get_yellow_m1287957903 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.Bone2D::.ctor()
extern "C"  void Bone2D__ctor_m574696350 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Color_2(L_0);
		__this->set_m_Length_3((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.Ik2D Anima2D.Bone2D::get_attachedIK()
extern "C"  Ik2D_t2093579821 * Bone2D_get_attachedIK_m1010073708 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_t2093579821 * L_0 = __this->get_m_AttachedIK_6();
		return L_0;
	}
}
// System.Void Anima2D.Bone2D::set_attachedIK(Anima2D.Ik2D)
extern "C"  void Bone2D_set_attachedIK_m3632604100 (Bone2D_t3065299646 * __this, Ik2D_t2093579821 * ___value0, const RuntimeMethod* method)
{
	{
		Ik2D_t2093579821 * L_0 = ___value0;
		__this->set_m_AttachedIK_6(L_0);
		return;
	}
}
// UnityEngine.Color Anima2D.Bone2D::get_color()
extern "C"  Color_t2555686324  Bone2D_get_color_m3237587994 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get_m_Color_2();
		return L_0;
	}
}
// System.Void Anima2D.Bone2D::set_color(UnityEngine.Color)
extern "C"  void Bone2D_set_color_m1563659220 (Bone2D_t3065299646 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Bone2D_get_color_m3237587994(__this, /*hidden argument*/NULL);
		__this->set_m_Color_2(L_0);
		return;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::get_child()
extern "C"  Bone2D_t3065299646 * Bone2D_get_child_m427147334 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_child_m427147334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_Child_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = __this->get_m_Child_4();
		Bone2D_set_child_m1841584567(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedChild_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get_m_ChildTransform_5();
		Bone2D_t3065299646 * L_6 = __this->get_m_CachedChild_7();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_m_CachedChild_7((Bone2D_t3065299646 *)NULL);
	}

IL_004e:
	{
		Transform_t3600365921 * L_9 = __this->get_m_ChildTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		Transform_t3600365921 * L_11 = __this->get_m_ChildTransform_5();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Transform_get_parent_m835071599(L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		__this->set_m_CachedChild_7((Bone2D_t3065299646 *)NULL);
	}

IL_0080:
	{
		Bone2D_t3065299646 * L_15 = __this->get_m_CachedChild_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00cc;
		}
	}
	{
		Transform_t3600365921 * L_17 = __this->get_m_ChildTransform_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00cc;
		}
	}
	{
		Transform_t3600365921 * L_19 = __this->get_m_ChildTransform_5();
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = Transform_get_parent_m835071599(L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cc;
		}
	}
	{
		Transform_t3600365921 * L_23 = __this->get_m_ChildTransform_5();
		NullCheck(L_23);
		Bone2D_t3065299646 * L_24 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_23, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_CachedChild_7(L_24);
	}

IL_00cc:
	{
		Bone2D_t3065299646 * L_25 = __this->get_m_CachedChild_7();
		return L_25;
	}
}
// System.Void Anima2D.Bone2D::set_child(Anima2D.Bone2D)
extern "C"  void Bone2D_set_child_m1841584567 (Bone2D_t3065299646 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method)
{
	{
		__this->set_m_Child_4((Bone2D_t3065299646 *)NULL);
		Bone2D_t3065299646 * L_0 = ___value0;
		__this->set_m_CachedChild_7(L_0);
		Bone2D_t3065299646 * L_1 = __this->get_m_CachedChild_7();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		__this->set_m_ChildTransform_5(L_2);
		return;
	}
}
// UnityEngine.Vector3 Anima2D.Bone2D::get_localEndPosition()
extern "C"  Vector3_t3722313464  Bone2D_get_localEndPosition_m569969392 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_localEndPosition_m569969392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = Bone2D_get_localLength_m3704420802(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Anima2D.Bone2D::get_endPosition()
extern "C"  Vector3_t3722313464  Bone2D_get_endPosition_m905033947 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Bone2D_get_localEndPosition_m569969392(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Transform_TransformPoint_m226827784(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Anima2D.Bone2D::get_localLength()
extern "C"  float Bone2D_get_localLength_m3704420802 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_localLength_m3704420802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Bone2D_t3065299646 * L_0 = Bone2D_get_child_m427147334(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_3 = Bone2D_get_child_m427147334(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_6 = Transform_InverseTransformPoint_m1343916000(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_x_1();
		float L_8 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_7, (0.0f), L_8, /*hidden argument*/NULL);
		__this->set_m_Length_3(L_9);
	}

IL_004a:
	{
		float L_10 = __this->get_m_Length_3();
		return L_10;
	}
}
// System.Void Anima2D.Bone2D::set_localLength(System.Single)
extern "C"  void Bone2D_set_localLength_m2697920108 (Bone2D_t3065299646 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_set_localLength_m2697920108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = Bone2D_get_child_m427147334(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		float L_2 = ___value0;
		__this->set_m_Length_3(L_2);
	}

IL_0017:
	{
		return;
	}
}
// System.Single Anima2D.Bone2D::get_length()
extern "C"  float Bone2D_get_length_m2946475167 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Bone2D_get_localEndPosition_m569969392(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_2 = Transform_TransformVector_m1951285617(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::get_parentBone()
extern "C"  Bone2D_t3065299646 * Bone2D_get_parentBone_m1149155992 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_parentBone_m1149155992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_get_parent_m835071599(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Bone2D_t3065299646 * L_2 = __this->get_mParentBone_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		Transform_t3600365921 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Transform_t3600365921 * L_6 = V_0;
		NullCheck(L_6);
		Bone2D_t3065299646 * L_7 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_6, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_mParentBone_8(L_7);
	}

IL_0033:
	{
		goto IL_0071;
	}

IL_0038:
	{
		Transform_t3600365921 * L_8 = V_0;
		Bone2D_t3065299646 * L_9 = __this->get_mParentBone_8();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		Transform_t3600365921 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		Transform_t3600365921 * L_14 = V_0;
		NullCheck(L_14);
		Bone2D_t3065299646 * L_15 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_14, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_mParentBone_8(L_15);
		goto IL_0071;
	}

IL_006a:
	{
		__this->set_mParentBone_8((Bone2D_t3065299646 *)NULL);
	}

IL_0071:
	{
		Bone2D_t3065299646 * L_16 = __this->get_mParentBone_8();
		return L_16;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::get_linkedParentBone()
extern "C"  Bone2D_t3065299646 * Bone2D_get_linkedParentBone_m4065394967 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_linkedParentBone_m4065394967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = Bone2D_get_parentBone_m1149155992(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = Bone2D_get_parentBone_m1149155992(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Bone2D_t3065299646 * L_3 = Bone2D_get_child_m427147334(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, __this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		Bone2D_t3065299646 * L_5 = Bone2D_get_parentBone_m1149155992(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_002d:
	{
		return (Bone2D_t3065299646 *)NULL;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::get_root()
extern "C"  Bone2D_t3065299646 * Bone2D_get_root_m715267024 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_root_m715267024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bone2D_t3065299646 * V_0 = NULL;
	{
		V_0 = __this;
		goto IL_000e;
	}

IL_0007:
	{
		Bone2D_t3065299646 * L_0 = V_0;
		NullCheck(L_0);
		Bone2D_t3065299646 * L_1 = Bone2D_get_parentBone_m1149155992(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	{
		Bone2D_t3065299646 * L_2 = V_0;
		NullCheck(L_2);
		Bone2D_t3065299646 * L_3 = Bone2D_get_parentBone_m1149155992(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0007;
		}
	}
	{
		Bone2D_t3065299646 * L_5 = V_0;
		return L_5;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::get_chainRoot()
extern "C"  Bone2D_t3065299646 * Bone2D_get_chainRoot_m739570076 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_chainRoot_m739570076_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bone2D_t3065299646 * V_0 = NULL;
	{
		V_0 = __this;
		goto IL_000e;
	}

IL_0007:
	{
		Bone2D_t3065299646 * L_0 = V_0;
		NullCheck(L_0);
		Bone2D_t3065299646 * L_1 = Bone2D_get_parentBone_m1149155992(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	{
		Bone2D_t3065299646 * L_2 = V_0;
		NullCheck(L_2);
		Bone2D_t3065299646 * L_3 = Bone2D_get_parentBone_m1149155992(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Bone2D_t3065299646 * L_5 = V_0;
		NullCheck(L_5);
		Bone2D_t3065299646 * L_6 = Bone2D_get_parentBone_m1149155992(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Bone2D_t3065299646 * L_7 = Bone2D_get_child_m427147334(L_6, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0007;
		}
	}

IL_0034:
	{
		Bone2D_t3065299646 * L_10 = V_0;
		return L_10;
	}
}
// System.Int32 Anima2D.Bone2D::get_chainLength()
extern "C"  int32_t Bone2D_get_chainLength_m2780646894 (Bone2D_t3065299646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_get_chainLength_m2780646894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bone2D_t3065299646 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = __this;
		V_1 = 1;
		goto IL_0014;
	}

IL_0009:
	{
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		Bone2D_t3065299646 * L_1 = V_0;
		NullCheck(L_1);
		Bone2D_t3065299646 * L_2 = Bone2D_get_parentBone_m1149155992(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0014:
	{
		Bone2D_t3065299646 * L_3 = V_0;
		NullCheck(L_3);
		Bone2D_t3065299646 * L_4 = Bone2D_get_parentBone_m1149155992(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		Bone2D_t3065299646 * L_6 = V_0;
		NullCheck(L_6);
		Bone2D_t3065299646 * L_7 = Bone2D_get_parentBone_m1149155992(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Bone2D_t3065299646 * L_8 = Bone2D_get_child_m427147334(L_7, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0009;
		}
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		return L_11;
	}
}
// Anima2D.Bone2D Anima2D.Bone2D::GetChainBoneByIndex(Anima2D.Bone2D,System.Int32)
extern "C"  Bone2D_t3065299646 * Bone2D_GetChainBoneByIndex_m1027494730 (RuntimeObject * __this /* static, unused */, Bone2D_t3065299646 * ___chainTip0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bone2D_GetChainBoneByIndex_m1027494730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bone2D_t3065299646 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Bone2D_t3065299646 * L_0 = ___chainTip0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		return (Bone2D_t3065299646 *)NULL;
	}

IL_000d:
	{
		Bone2D_t3065299646 * L_2 = ___chainTip0;
		V_0 = L_2;
		Bone2D_t3065299646 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = Bone2D_get_chainLength_m2780646894(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0048;
	}

IL_001d:
	{
		int32_t L_5 = V_2;
		int32_t L_6 = ___index1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0026;
		}
	}
	{
		Bone2D_t3065299646 * L_7 = V_0;
		return L_7;
	}

IL_0026:
	{
		Bone2D_t3065299646 * L_8 = V_0;
		NullCheck(L_8);
		Bone2D_t3065299646 * L_9 = Bone2D_get_linkedParentBone_m4065394967(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		Bone2D_t3065299646 * L_11 = V_0;
		NullCheck(L_11);
		Bone2D_t3065299646 * L_12 = Bone2D_get_parentBone_m1149155992(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0044;
	}

IL_0042:
	{
		return (Bone2D_t3065299646 *)NULL;
	}

IL_0044:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_005a;
		}
	}
	{
		Bone2D_t3065299646 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_001d;
		}
	}

IL_005a:
	{
		return (Bone2D_t3065299646 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.Control::.ctor()
extern "C"  void Control__ctor_m4273829749 (Control_t3801119829 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color Anima2D.Control::get_color()
extern "C"  Color_t2555686324  Control_get_color_m2594479494 (Control_t3801119829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Control_get_color_m2594479494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_CachedBone_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = __this->get_m_CachedBone_3();
		NullCheck(L_2);
		Color_t2555686324  L_3 = Bone2D_get_color_m3237587994(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		(&V_0)->set_a_3((1.0f));
		Color_t2555686324  L_4 = V_0;
		return L_4;
	}

IL_002a:
	{
		Color_t2555686324  L_5 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_5;
	}
}
// Anima2D.Bone2D Anima2D.Control::get_bone()
extern "C"  Bone2D_t3065299646 * Control_get_bone_m886963234 (Control_t3801119829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Control_get_bone_m886963234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_CachedBone_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Transform_t3600365921 * L_2 = __this->get_m_BoneTransform_2();
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedBone_3();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		__this->set_m_CachedBone_3((Bone2D_t3065299646 *)NULL);
	}

IL_0032:
	{
		Bone2D_t3065299646 * L_6 = __this->get_m_CachedBone_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		Transform_t3600365921 * L_8 = __this->get_m_BoneTransform_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		Transform_t3600365921 * L_10 = __this->get_m_BoneTransform_2();
		NullCheck(L_10);
		Bone2D_t3065299646 * L_11 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_10, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_CachedBone_3(L_11);
	}

IL_0063:
	{
		Bone2D_t3065299646 * L_12 = __this->get_m_CachedBone_3();
		return L_12;
	}
}
// System.Void Anima2D.Control::set_bone(Anima2D.Bone2D)
extern "C"  void Control_set_bone_m3085582072 (Control_t3801119829 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method)
{
	{
		Bone2D_t3065299646 * L_0 = ___value0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		__this->set_m_BoneTransform_2(L_1);
		return;
	}
}
// System.Void Anima2D.Control::Start()
extern "C"  void Control_Start_m3706181145 (Control_t3801119829 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Anima2D.Control::LateUpdate()
extern "C"  void Control_LateUpdate_m3643433739 (Control_t3801119829 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Control_LateUpdate_m3643433739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = Control_get_bone_m886963234(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0046;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_3 = Control_get_bone_m886963234(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_7 = Control_get_bone_m886963234(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m3524318132(L_6, L_9, /*hidden argument*/NULL);
	}

IL_0046:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.Ik2D::.ctor()
extern "C"  void Ik2D__ctor_m3571845971 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_Weight_6((1.0f));
		__this->set_m_RestoreDefaultPose_7((bool)1);
		__this->set_m_OrientChild_8((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.IkSolver2D Anima2D.Ik2D::get_solver()
extern "C"  IkSolver2D_t3375840577 * Ik2D_get_solver_m1723041568 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		IkSolver2D_t3375840577 * L_0 = VirtFuncInvoker0< IkSolver2D_t3375840577 * >::Invoke(10 /* Anima2D.IkSolver2D Anima2D.Ik2D::GetSolver() */, __this);
		return L_0;
	}
}
// System.Boolean Anima2D.Ik2D::get_record()
extern "C"  bool Ik2D_get_record_m2797416490 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Record_3();
		return L_0;
	}
}
// Anima2D.Bone2D Anima2D.Ik2D::get_target()
extern "C"  Bone2D_t3065299646 * Ik2D_get_target_m22966063 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ik2D_get_target_m22966063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = __this->get_m_Target_2();
		Ik2D_set_target_m937116090(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedTarget_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get_m_TargetTransform_4();
		Bone2D_t3065299646 * L_6 = __this->get_m_CachedTarget_9();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_m_CachedTarget_9((Bone2D_t3065299646 *)NULL);
	}

IL_004e:
	{
		Bone2D_t3065299646 * L_9 = __this->get_m_CachedTarget_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_11 = __this->get_m_TargetTransform_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_13 = __this->get_m_TargetTransform_4();
		NullCheck(L_13);
		Bone2D_t3065299646 * L_14 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_13, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_CachedTarget_9(L_14);
	}

IL_007f:
	{
		Bone2D_t3065299646 * L_15 = __this->get_m_CachedTarget_9();
		return L_15;
	}
}
// System.Void Anima2D.Ik2D::set_target(Anima2D.Bone2D)
extern "C"  void Ik2D_set_target_m937116090 (Ik2D_t2093579821 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ik2D_set_target_m937116090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = ___value0;
		__this->set_m_CachedTarget_9(L_0);
		Bone2D_t3065299646 * L_1 = ___value0;
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		__this->set_m_TargetTransform_4(L_2);
		Bone2D_t3065299646 * L_3 = __this->get_m_Target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		Ik2D_InitializeSolver_m3255783745(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		__this->set_m_Target_2((Bone2D_t3065299646 *)NULL);
		return;
	}
}
// System.Int32 Anima2D.Ik2D::get_numBones()
extern "C"  int32_t Ik2D_get_numBones_m2446488923 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_NumBones_5();
		int32_t L_1 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 Anima2D.Ik2D::ValidateNumBones(System.Int32) */, __this, L_0);
		return L_1;
	}
}
// System.Void Anima2D.Ik2D::set_numBones(System.Int32)
extern "C"  void Ik2D_set_numBones_m1611035203 (Ik2D_t2093579821 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = VirtFuncInvoker1< int32_t, int32_t >::Invoke(5 /* System.Int32 Anima2D.Ik2D::ValidateNumBones(System.Int32) */, __this, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_m_NumBones_5();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_0;
		__this->set_m_NumBones_5(L_4);
		Ik2D_InitializeSolver_m3255783745(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Single Anima2D.Ik2D::get_weight()
extern "C"  float Ik2D_get_weight_m2550269346 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Weight_6();
		return L_0;
	}
}
// System.Void Anima2D.Ik2D::set_weight(System.Single)
extern "C"  void Ik2D_set_weight_m1542080715 (Ik2D_t2093579821 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_m_Weight_6(L_0);
		return;
	}
}
// System.Boolean Anima2D.Ik2D::get_restoreDefaultPose()
extern "C"  bool Ik2D_get_restoreDefaultPose_m3713530990 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_RestoreDefaultPose_7();
		return L_0;
	}
}
// System.Void Anima2D.Ik2D::set_restoreDefaultPose(System.Boolean)
extern "C"  void Ik2D_set_restoreDefaultPose_m2537248764 (Ik2D_t2093579821 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_RestoreDefaultPose_7(L_0);
		return;
	}
}
// System.Boolean Anima2D.Ik2D::get_orientChild()
extern "C"  bool Ik2D_get_orientChild_m1226322411 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_OrientChild_8();
		return L_0;
	}
}
// System.Void Anima2D.Ik2D::set_orientChild(System.Boolean)
extern "C"  void Ik2D_set_orientChild_m1748077499 (Ik2D_t2093579821 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_OrientChild_8(L_0);
		return;
	}
}
// System.Void Anima2D.Ik2D::OnDrawGizmos()
extern "C"  void Ik2D_OnDrawGizmos_m3329124976 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ik2D_OnDrawGizmos_m3329124976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Matrix4x4_t1817901843  L_1 = Transform_get_localToWorldMatrix_m4155710351(L_0, /*hidden argument*/NULL);
		Gizmos_set_matrix_m3287403258(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		bool L_2 = Behaviour_get_enabled_m753527255(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		Bone2D_t3065299646 * L_3 = Ik2D_get_target_m22966063(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = Ik2D_get_numBones_m2446488923(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		Gizmos_DrawIcon_m3772799597(NULL /*static, unused*/, L_7, _stringLiteral117428549, /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0051:
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		Gizmos_DrawIcon_m3772799597(NULL /*static, unused*/, L_9, _stringLiteral1005994495, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::OnValidate()
extern "C"  void Ik2D_OnValidate_m1454245586 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(6 /* System.Void Anima2D.Ik2D::Validate() */, __this);
		return;
	}
}
// System.Void Anima2D.Ik2D::Start()
extern "C"  void Ik2D_Start_m2960928711 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(7 /* System.Void Anima2D.Ik2D::OnStart() */, __this);
		return;
	}
}
// System.Void Anima2D.Ik2D::Update()
extern "C"  void Ik2D_Update_m3332195801 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_SetAttachedIK_m3904731071(__this, __this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void Anima2D.Ik2D::OnUpdate() */, __this);
		return;
	}
}
// System.Void Anima2D.Ik2D::LateUpdate()
extern "C"  void Ik2D_LateUpdate_m565751592 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(9 /* System.Void Anima2D.Ik2D::OnLateUpdate() */, __this);
		Ik2D_UpdateIK_m1470206832(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.Ik2D::SetAttachedIK(Anima2D.Ik2D)
extern "C"  void Ik2D_SetAttachedIK_m3904731071 (Ik2D_t2093579821 * __this, Ik2D_t2093579821 * ___ik2D0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ik2D_SetAttachedIK_m3904731071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverPose_t1882007516 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_0007:
	{
		IkSolver2D_t3375840577 * L_0 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_t3354082258 * L_1 = IkSolver2D_get_solverPoses_m201587207(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		SolverPose_t1882007516 * L_3 = List_1_get_Item_m2802291936(L_1, L_2, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_3;
		SolverPose_t1882007516 * L_4 = V_1;
		NullCheck(L_4);
		Bone2D_t3065299646 * L_5 = SolverPose_get_bone_m364338813(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		SolverPose_t1882007516 * L_7 = V_1;
		NullCheck(L_7);
		Bone2D_t3065299646 * L_8 = SolverPose_get_bone_m364338813(L_7, /*hidden argument*/NULL);
		Ik2D_t2093579821 * L_9 = ___ik2D0;
		NullCheck(L_8);
		Bone2D_set_attachedIK_m3632604100(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_11 = V_0;
		IkSolver2D_t3375840577 * L_12 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_t3354082258 * L_13 = IkSolver2D_get_solverPoses_m201587207(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m4291941635(L_13, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_14)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::UpdateIK()
extern "C"  void Ik2D_UpdateIK_m1470206832 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ik2D_UpdateIK_m1470206832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Anima2D.Ik2D::OnIkUpdate() */, __this);
		IkSolver2D_t3375840577 * L_0 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IkSolver2D_Update_m4196431950(L_0, /*hidden argument*/NULL);
		bool L_1 = Ik2D_get_orientChild_m1226322411(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = Ik2D_get_target_m22966063(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Bone2D_t3065299646 * L_3 = Bone2D_get_child_m427147334(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		Bone2D_t3065299646 * L_5 = Ik2D_get_target_m22966063(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Bone2D_t3065299646 * L_6 = Bone2D_get_child_m427147334(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m3524318132(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::OnIkUpdate()
extern "C"  void Ik2D_OnIkUpdate_m1448462348 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		IkSolver2D_t3375840577 * L_0 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		float L_1 = Ik2D_get_weight_m2550269346(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		IkSolver2D_set_weight_m16666026(L_0, L_1, /*hidden argument*/NULL);
		IkSolver2D_t3375840577 * L_2 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_targetPosition_6(L_4);
		IkSolver2D_t3375840577 * L_5 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		bool L_6 = Ik2D_get_restoreDefaultPose_m3713530990(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		IkSolver2D_set_restoreDefaultPose_m2744462715(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.Ik2D::InitializeSolver()
extern "C"  void Ik2D_InitializeSolver_m3255783745 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	Bone2D_t3065299646 * V_0 = NULL;
	{
		Bone2D_t3065299646 * L_0 = Ik2D_get_target_m22966063(__this, /*hidden argument*/NULL);
		int32_t L_1 = Ik2D_get_numBones_m2446488923(__this, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_2 = Bone2D_GetChainBoneByIndex_m1027494730(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		Ik2D_SetAttachedIK_m3904731071(__this, (Ik2D_t2093579821 *)NULL, /*hidden argument*/NULL);
		IkSolver2D_t3375840577 * L_3 = Ik2D_get_solver_m1723041568(__this, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_4 = V_0;
		int32_t L_5 = Ik2D_get_numBones_m2446488923(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		IkSolver2D_Initialize_m2968157143(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Anima2D.Ik2D::ValidateNumBones(System.Int32)
extern "C"  int32_t Ik2D_ValidateNumBones_m1179334834 (Ik2D_t2093579821 * __this, int32_t ___numBones0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___numBones0;
		return L_0;
	}
}
// System.Void Anima2D.Ik2D::Validate()
extern "C"  void Ik2D_Validate_m2065439374 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::OnStart()
extern "C"  void Ik2D_OnStart_m2069821664 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::OnUpdate()
extern "C"  void Ik2D_OnUpdate_m180530546 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Anima2D.Ik2D::OnLateUpdate()
extern "C"  void Ik2D_OnLateUpdate_m2166415042 (Ik2D_t2093579821 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkCCD2D::.ctor()
extern "C"  void IkCCD2D__ctor_m770641484 (IkCCD2D_t149469636 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkCCD2D__ctor_m770641484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_iterations_10(((int32_t)10));
		__this->set_damping_11((0.8f));
		IkSolver2DCCD_t3651796268 * L_0 = (IkSolver2DCCD_t3651796268 *)il2cpp_codegen_object_new(IkSolver2DCCD_t3651796268_il2cpp_TypeInfo_var);
		IkSolver2DCCD__ctor_m4242123738(L_0, /*hidden argument*/NULL);
		__this->set_m_Solver_12(L_0);
		Ik2D__ctor_m3571845971(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.IkSolver2D Anima2D.IkCCD2D::GetSolver()
extern "C"  IkSolver2D_t3375840577 * IkCCD2D_GetSolver_m2278691770 (IkCCD2D_t149469636 * __this, const RuntimeMethod* method)
{
	{
		IkSolver2DCCD_t3651796268 * L_0 = __this->get_m_Solver_12();
		return L_0;
	}
}
// System.Void Anima2D.IkCCD2D::OnIkUpdate()
extern "C"  void IkCCD2D_OnIkUpdate_m1503492041 (IkCCD2D_t149469636 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_OnIkUpdate_m1448462348(__this, /*hidden argument*/NULL);
		IkSolver2DCCD_t3651796268 * L_0 = __this->get_m_Solver_12();
		int32_t L_1 = __this->get_iterations_10();
		NullCheck(L_0);
		L_0->set_iterations_7(L_1);
		IkSolver2DCCD_t3651796268 * L_2 = __this->get_m_Solver_12();
		float L_3 = __this->get_damping_11();
		NullCheck(L_2);
		L_2->set_damping_8(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkGroup::.ctor()
extern "C"  void IkGroup__ctor_m529924850 (IkGroup_t3191562885 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkGroup__ctor_m529924850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3565654563 * L_0 = (List_1_t3565654563 *)il2cpp_codegen_object_new(List_1_t3565654563_il2cpp_TypeInfo_var);
		List_1__ctor_m483261293(L_0, /*hidden argument*/List_1__ctor_m483261293_RuntimeMethod_var);
		__this->set_m_IkComponents_2(L_0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.IkGroup::UpdateGroup()
extern "C"  void IkGroup_UpdateGroup_m1084264278 (IkGroup_t3191562885 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkGroup_UpdateGroup_m1084264278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Ik2D_t2093579821 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		List_1_t3565654563 * L_0 = __this->get_m_IkComponents_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Ik2D_t2093579821 * L_2 = List_1_get_Item_m3415608264(L_0, L_1, /*hidden argument*/List_1_get_Item_m3415608264_RuntimeMethod_var);
		V_1 = L_2;
		Ik2D_t2093579821 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		Ik2D_t2093579821 * L_5 = V_1;
		NullCheck(L_5);
		Behaviour_set_enabled_m20417929(L_5, (bool)0, /*hidden argument*/NULL);
		Ik2D_t2093579821 * L_6 = V_1;
		NullCheck(L_6);
		Ik2D_UpdateIK_m1470206832(L_6, /*hidden argument*/NULL);
	}

IL_002c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		List_1_t3565654563 * L_9 = __this->get_m_IkComponents_2();
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m1848702612(L_9, /*hidden argument*/List_1_get_Count_m1848702612_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Anima2D.IkGroup::LateUpdate()
extern "C"  void IkGroup_LateUpdate_m585686804 (IkGroup_t3191562885 * __this, const RuntimeMethod* method)
{
	{
		IkGroup_UpdateGroup_m1084264278(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkLimb2D::.ctor()
extern "C"  void IkLimb2D__ctor_m3164195266 (IkLimb2D_t1103101996 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkLimb2D__ctor_m3164195266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IkSolver2DLimb_t33506378 * L_0 = (IkSolver2DLimb_t33506378 *)il2cpp_codegen_object_new(IkSolver2DLimb_t33506378_il2cpp_TypeInfo_var);
		IkSolver2DLimb__ctor_m3591894099(L_0, /*hidden argument*/NULL);
		__this->set_m_Solver_11(L_0);
		Ik2D__ctor_m3571845971(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.IkSolver2D Anima2D.IkLimb2D::GetSolver()
extern "C"  IkSolver2D_t3375840577 * IkLimb2D_GetSolver_m1277469550 (IkLimb2D_t1103101996 * __this, const RuntimeMethod* method)
{
	{
		IkSolver2DLimb_t33506378 * L_0 = __this->get_m_Solver_11();
		return L_0;
	}
}
// System.Void Anima2D.IkLimb2D::Validate()
extern "C"  void IkLimb2D_Validate_m3856185185 (IkLimb2D_t1103101996 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_set_numBones_m1611035203(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Anima2D.IkLimb2D::ValidateNumBones(System.Int32)
extern "C"  int32_t IkLimb2D_ValidateNumBones_m2777561332 (IkLimb2D_t1103101996 * __this, int32_t ___numBones0, const RuntimeMethod* method)
{
	{
		return 2;
	}
}
// System.Void Anima2D.IkLimb2D::OnIkUpdate()
extern "C"  void IkLimb2D_OnIkUpdate_m1733114252 (IkLimb2D_t1103101996 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_OnIkUpdate_m1448462348(__this, /*hidden argument*/NULL);
		IkSolver2DLimb_t33506378 * L_0 = __this->get_m_Solver_11();
		bool L_1 = __this->get_flip_10();
		NullCheck(L_0);
		L_0->set_flip_7(L_1);
		return;
	}
}
// System.Void Anima2D.IkLimb2D::OnValidate()
extern "C"  void IkLimb2D_OnValidate_m2646798228 (IkLimb2D_t1103101996 * __this, const RuntimeMethod* method)
{
	{
		Ik2D_set_numBones_m1611035203(__this, 2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkSolver2D::.ctor()
extern "C"  void IkSolver2D__ctor_m2521528584 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D__ctor_m2521528584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3354082258 * L_0 = (List_1_t3354082258 *)il2cpp_codegen_object_new(List_1_t3354082258_il2cpp_TypeInfo_var);
		List_1__ctor_m3957462430(L_0, /*hidden argument*/List_1__ctor_m3957462430_RuntimeMethod_var);
		__this->set_m_SolverPoses_2(L_0);
		__this->set_m_Weight_3((1.0f));
		__this->set_m_RestoreDefaultPose_4((bool)1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.Bone2D Anima2D.IkSolver2D::get_rootBone()
extern "C"  Bone2D_t3065299646 * IkSolver2D_get_rootBone_m1270924988 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_get_rootBone_m1270924988_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_RootBone_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = __this->get_m_RootBone_0();
		IkSolver2D_set_rootBone_m634875102(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedRootBone_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get_m_RootBoneTransform_1();
		Bone2D_t3065299646 * L_6 = __this->get_m_CachedRootBone_5();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_m_CachedRootBone_5((Bone2D_t3065299646 *)NULL);
	}

IL_004e:
	{
		Bone2D_t3065299646 * L_9 = __this->get_m_CachedRootBone_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_11 = __this->get_m_RootBoneTransform_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_13 = __this->get_m_RootBoneTransform_1();
		NullCheck(L_13);
		Bone2D_t3065299646 * L_14 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_13, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_CachedRootBone_5(L_14);
	}

IL_007f:
	{
		Bone2D_t3065299646 * L_15 = __this->get_m_CachedRootBone_5();
		return L_15;
	}
}
// System.Void Anima2D.IkSolver2D::set_rootBone(Anima2D.Bone2D)
extern "C"  void IkSolver2D_set_rootBone_m634875102 (IkSolver2D_t3375840577 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_set_rootBone_m634875102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_RootBone_0((Bone2D_t3065299646 *)NULL);
		Bone2D_t3065299646 * L_0 = ___value0;
		__this->set_m_CachedRootBone_5(L_0);
		__this->set_m_RootBoneTransform_1((Transform_t3600365921 *)NULL);
		Bone2D_t3065299646 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Bone2D_t3065299646 * L_3 = ___value0;
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		__this->set_m_RootBoneTransform_1(L_4);
	}

IL_002c:
	{
		return;
	}
}
// System.Collections.Generic.List`1<Anima2D.IkSolver2D/SolverPose> Anima2D.IkSolver2D::get_solverPoses()
extern "C"  List_1_t3354082258 * IkSolver2D_get_solverPoses_m201587207 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3354082258 * L_0 = __this->get_m_SolverPoses_2();
		return L_0;
	}
}
// System.Single Anima2D.IkSolver2D::get_weight()
extern "C"  float IkSolver2D_get_weight_m1487099108 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Weight_3();
		return L_0;
	}
}
// System.Void Anima2D.IkSolver2D::set_weight(System.Single)
extern "C"  void IkSolver2D_set_weight_m16666026 (IkSolver2D_t3375840577 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_set_weight_m16666026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_m_Weight_3(L_1);
		return;
	}
}
// System.Boolean Anima2D.IkSolver2D::get_restoreDefaultPose()
extern "C"  bool IkSolver2D_get_restoreDefaultPose_m2080064337 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_RestoreDefaultPose_4();
		return L_0;
	}
}
// System.Void Anima2D.IkSolver2D::set_restoreDefaultPose(System.Boolean)
extern "C"  void IkSolver2D_set_restoreDefaultPose_m2744462715 (IkSolver2D_t3375840577 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_RestoreDefaultPose_4(L_0);
		return;
	}
}
// System.Void Anima2D.IkSolver2D::Initialize(Anima2D.Bone2D,System.Int32)
extern "C"  void IkSolver2D_Initialize_m2968157143 (IkSolver2D_t3375840577 * __this, Bone2D_t3065299646 * ____rootBone0, int32_t ___numChilds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_Initialize_m2968157143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bone2D_t3065299646 * V_0 = NULL;
	int32_t V_1 = 0;
	SolverPose_t1882007516 * V_2 = NULL;
	{
		Bone2D_t3065299646 * L_0 = ____rootBone0;
		IkSolver2D_set_rootBone_m634875102(__this, L_0, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_1 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		List_1_t3354082258 * L_2 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Clear_m164135322(L_2, /*hidden argument*/List_1_Clear_m164135322_RuntimeMethod_var);
		V_1 = 0;
		goto IL_004f;
	}

IL_0020:
	{
		Bone2D_t3065299646 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		SolverPose_t1882007516 * L_5 = (SolverPose_t1882007516 *)il2cpp_codegen_object_new(SolverPose_t1882007516_il2cpp_TypeInfo_var);
		SolverPose__ctor_m1427540147(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		SolverPose_t1882007516 * L_6 = V_2;
		Bone2D_t3065299646 * L_7 = V_0;
		NullCheck(L_6);
		SolverPose_set_bone_m1300346228(L_6, L_7, /*hidden argument*/NULL);
		List_1_t3354082258 * L_8 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_9 = V_2;
		NullCheck(L_8);
		List_1_Add_m475487972(L_8, L_9, /*hidden argument*/List_1_Add_m475487972_RuntimeMethod_var);
		Bone2D_t3065299646 * L_10 = V_0;
		NullCheck(L_10);
		Bone2D_t3065299646 * L_11 = Bone2D_get_child_m427147334(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_004b:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = ___numChilds1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0020;
		}
	}
	{
		IkSolver2D_StoreDefaultPoses_m3143471330(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.IkSolver2D::Update()
extern "C"  void IkSolver2D_Update_m4196431950 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = IkSolver2D_get_weight_m1487099108(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		bool L_1 = IkSolver2D_get_restoreDefaultPose_m2080064337(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		IkSolver2D_RestoreDefaultPoses_m1105316293(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Anima2D.IkSolver2D::DoSolverUpdate() */, __this);
		IkSolver2D_UpdateBones_m364885504(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void Anima2D.IkSolver2D::StoreDefaultPoses()
extern "C"  void IkSolver2D_StoreDefaultPoses_m3143471330 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_StoreDefaultPoses_m3143471330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverPose_t1882007516 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		List_1_t3354082258 * L_0 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SolverPose_t1882007516 * L_2 = List_1_get_Item_m2802291936(L_0, L_1, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_2;
		SolverPose_t1882007516 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		SolverPose_t1882007516 * L_4 = V_1;
		NullCheck(L_4);
		SolverPose_StoreDefaultPose_m1255016989(L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		List_1_t3354082258 * L_7 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m4291941635(L_7, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Anima2D.IkSolver2D::RestoreDefaultPoses()
extern "C"  void IkSolver2D_RestoreDefaultPoses_m1105316293 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_RestoreDefaultPoses_m1105316293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverPose_t1882007516 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0007:
	{
		List_1_t3354082258 * L_0 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SolverPose_t1882007516 * L_2 = List_1_get_Item_m2802291936(L_0, L_1, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_2;
		SolverPose_t1882007516 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		SolverPose_t1882007516 * L_4 = V_1;
		NullCheck(L_4);
		SolverPose_RestoreDefaultPose_m973395117(L_4, /*hidden argument*/NULL);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		List_1_t3354082258 * L_7 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m4291941635(L_7, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Anima2D.IkSolver2D::UpdateBones()
extern "C"  void IkSolver2D_UpdateBones_m364885504 (IkSolver2D_t3375840577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2D_UpdateBones_m364885504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverPose_t1882007516 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_008a;
	}

IL_0007:
	{
		List_1_t3354082258 * L_0 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		SolverPose_t1882007516 * L_2 = List_1_get_Item_m2802291936(L_0, L_1, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_2;
		SolverPose_t1882007516 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0086;
		}
	}
	{
		SolverPose_t1882007516 * L_4 = V_1;
		NullCheck(L_4);
		Bone2D_t3065299646 * L_5 = SolverPose_get_bone_m364338813(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0086;
		}
	}
	{
		float L_7 = IkSolver2D_get_weight_m1487099108(__this, /*hidden argument*/NULL);
		if ((!(((float)L_7) == ((float)(1.0f)))))
		{
			goto IL_0055;
		}
	}
	{
		SolverPose_t1882007516 * L_8 = V_1;
		NullCheck(L_8);
		Bone2D_t3065299646 * L_9 = SolverPose_get_bone_m364338813(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_11 = V_1;
		NullCheck(L_11);
		Quaternion_t2301928331  L_12 = L_11->get_solverRotation_4();
		NullCheck(L_10);
		Transform_set_localRotation_m19445462(L_10, L_12, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0055:
	{
		SolverPose_t1882007516 * L_13 = V_1;
		NullCheck(L_13);
		Bone2D_t3065299646 * L_14 = SolverPose_get_bone_m364338813(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(L_14, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_16 = V_1;
		NullCheck(L_16);
		Bone2D_t3065299646 * L_17 = SolverPose_get_bone_m364338813(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Quaternion_t2301928331  L_19 = Transform_get_localRotation_m3487911431(L_18, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_20 = V_1;
		NullCheck(L_20);
		Quaternion_t2301928331  L_21 = L_20->get_solverRotation_4();
		float L_22 = IkSolver2D_get_weight_m1487099108(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_23 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_19, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localRotation_m19445462(L_15, L_23, /*hidden argument*/NULL);
	}

IL_0086:
	{
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_25 = V_0;
		List_1_t3354082258 * L_26 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = List_1_get_Count_m4291941635(L_26, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkSolver2D/SolverPose::.ctor()
extern "C"  void SolverPose__ctor_m1427540147 (SolverPose_t1882007516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverPose__ctor_m1427540147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_solverPosition_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_1 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_solverRotation_4(L_1);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_defaultLocalRotation_5(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.Bone2D Anima2D.IkSolver2D/SolverPose::get_bone()
extern "C"  Bone2D_t3065299646 * SolverPose_get_bone_m364338813 (SolverPose_t1882007516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverPose_get_bone_m364338813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = __this->get_m_Bone_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = __this->get_m_Bone_0();
		SolverPose_set_bone_m1300346228(__this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedBone_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		Transform_t3600365921 * L_5 = __this->get_m_BoneTransform_1();
		Bone2D_t3065299646 * L_6 = __this->get_m_CachedBone_2();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		__this->set_m_CachedBone_2((Bone2D_t3065299646 *)NULL);
	}

IL_004e:
	{
		Bone2D_t3065299646 * L_9 = __this->get_m_CachedBone_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_11 = __this->get_m_BoneTransform_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		Transform_t3600365921 * L_13 = __this->get_m_BoneTransform_1();
		NullCheck(L_13);
		Bone2D_t3065299646 * L_14 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_13, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_CachedBone_2(L_14);
	}

IL_007f:
	{
		Bone2D_t3065299646 * L_15 = __this->get_m_CachedBone_2();
		return L_15;
	}
}
// System.Void Anima2D.IkSolver2D/SolverPose::set_bone(Anima2D.Bone2D)
extern "C"  void SolverPose_set_bone_m1300346228 (SolverPose_t1882007516 * __this, Bone2D_t3065299646 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverPose_set_bone_m1300346228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_Bone_0((Bone2D_t3065299646 *)NULL);
		Bone2D_t3065299646 * L_0 = ___value0;
		__this->set_m_CachedBone_2(L_0);
		__this->set_m_BoneTransform_1((Transform_t3600365921 *)NULL);
		Bone2D_t3065299646 * L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Bone2D_t3065299646 * L_3 = __this->get_m_CachedBone_2();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		__this->set_m_BoneTransform_1(L_4);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Anima2D.IkSolver2D/SolverPose::StoreDefaultPose()
extern "C"  void SolverPose_StoreDefaultPose_m1255016989 (SolverPose_t1882007516 * __this, const RuntimeMethod* method)
{
	{
		Bone2D_t3065299646 * L_0 = SolverPose_get_bone_m364338813(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t2301928331  L_2 = Transform_get_localRotation_m3487911431(L_1, /*hidden argument*/NULL);
		__this->set_defaultLocalRotation_5(L_2);
		return;
	}
}
// System.Void Anima2D.IkSolver2D/SolverPose::RestoreDefaultPose()
extern "C"  void SolverPose_RestoreDefaultPose_m973395117 (SolverPose_t1882007516 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverPose_RestoreDefaultPose_m973395117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = SolverPose_get_bone_m364338813(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Bone2D_t3065299646 * L_2 = SolverPose_get_bone_m364338813(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_4 = __this->get_defaultLocalRotation_5();
		NullCheck(L_3);
		Transform_set_localRotation_m19445462(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkSolver2DCCD::.ctor()
extern "C"  void IkSolver2DCCD__ctor_m4242123738 (IkSolver2DCCD_t3651796268 * __this, const RuntimeMethod* method)
{
	{
		__this->set_iterations_7(((int32_t)10));
		__this->set_damping_8((0.8f));
		IkSolver2D__ctor_m2521528584(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.IkSolver2DCCD::DoSolverUpdate()
extern "C"  void IkSolver2DCCD_DoSolverUpdate_m3133273796 (IkSolver2DCCD_t3651796268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2DCCD_DoSolverUpdate_m3133273796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SolverPose_t1882007516 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	SolverPose_t1882007516 * V_7 = NULL;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	float V_10 = 0.0f;
	Quaternion_t2301928331  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	int32_t V_13 = 0;
	SolverPose_t1882007516 * V_14 = NULL;
	{
		Bone2D_t3065299646 * L_0 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_007b;
	}

IL_0018:
	{
		List_1_t3354082258 * L_2 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		SolverPose_t1882007516 * L_4 = List_1_get_Item_m2802291936(L_2, L_3, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_4;
		SolverPose_t1882007516 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0077;
		}
	}
	{
		SolverPose_t1882007516 * L_6 = V_1;
		NullCheck(L_6);
		Bone2D_t3065299646 * L_7 = SolverPose_get_bone_m364338813(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		SolverPose_t1882007516 * L_9 = V_1;
		SolverPose_t1882007516 * L_10 = V_1;
		NullCheck(L_10);
		Bone2D_t3065299646 * L_11 = SolverPose_get_bone_m364338813(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t2301928331  L_13 = Transform_get_localRotation_m3487911431(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		L_9->set_solverRotation_4(L_13);
		SolverPose_t1882007516 * L_14 = V_1;
		Bone2D_t3065299646 * L_15 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(L_15, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_17 = V_1;
		NullCheck(L_17);
		Bone2D_t3065299646 * L_18 = SolverPose_get_bone_m364338813(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_21 = Transform_InverseTransformPoint_m1343916000(L_16, L_20, /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->set_solverPosition_3(L_21);
	}

IL_0077:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_23 = V_0;
		List_1_t3354082258 * L_24 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = List_1_get_Count_m4291941635(L_24, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0018;
		}
	}
	{
		Bone2D_t3065299646 * L_26 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(L_26, /*hidden argument*/NULL);
		List_1_t3354082258 * L_28 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		List_1_t3354082258 * L_29 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		int32_t L_30 = List_1_get_Count_m4291941635(L_29, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		NullCheck(L_28);
		SolverPose_t1882007516 * L_31 = List_1_get_Item_m2802291936(L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		NullCheck(L_31);
		Bone2D_t3065299646 * L_32 = SolverPose_get_bone_m364338813(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t3722313464  L_33 = Bone2D_get_endPosition_m905033947(L_32, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_34 = Transform_InverseTransformPoint_m1343916000(L_27, L_33, /*hidden argument*/NULL);
		V_2 = L_34;
		Bone2D_t3065299646 * L_35 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_t3600365921 * L_36 = Component_get_transform_m3162698980(L_35, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = ((IkSolver2D_t3375840577 *)__this)->get_targetPosition_6();
		NullCheck(L_36);
		Vector3_t3722313464  L_38 = Transform_InverseTransformPoint_m1343916000(L_36, L_37, /*hidden argument*/NULL);
		V_3 = L_38;
		float L_39 = __this->get_damping_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_40 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
		__this->set_damping_8(L_40);
		float L_41 = __this->get_damping_8();
		float L_42 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, (0.0f), (0.99f), L_41, /*hidden argument*/NULL);
		V_4 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_42));
		V_5 = 0;
		goto IL_0212;
	}

IL_010c:
	{
		List_1_t3354082258 * L_43 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44 = List_1_get_Count_m4291941635(L_43, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		goto IL_0204;
	}

IL_0120:
	{
		List_1_t3354082258 * L_45 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_46 = V_6;
		NullCheck(L_45);
		SolverPose_t1882007516 * L_47 = List_1_get_Item_m2802291936(L_45, L_46, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_7 = L_47;
		Vector3_t3722313464  L_48 = V_3;
		SolverPose_t1882007516 * L_49 = V_7;
		NullCheck(L_49);
		Vector3_t3722313464  L_50 = L_49->get_solverPosition_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_51 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_48, L_50, /*hidden argument*/NULL);
		V_8 = L_51;
		Vector3_t3722313464  L_52 = V_2;
		SolverPose_t1882007516 * L_53 = V_7;
		NullCheck(L_53);
		Vector3_t3722313464  L_54 = L_53->get_solverPosition_3();
		Vector3_t3722313464  L_55 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
		V_9 = L_55;
		(&V_8)->set_z_3((0.0f));
		(&V_9)->set_z_3((0.0f));
		Vector3_t3722313464  L_56 = V_9;
		Vector3_t3722313464  L_57 = V_8;
		Vector3_t3722313464  L_58 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_59 = MathUtils_SignedAngle_m3328907211(NULL /*static, unused*/, L_56, L_57, L_58, /*hidden argument*/NULL);
		V_10 = L_59;
		float L_60 = V_10;
		float L_61 = V_4;
		V_10 = ((float)il2cpp_codegen_multiply((float)L_60, (float)L_61));
		float L_62 = V_10;
		Vector3_t3722313464  L_63 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_64 = Quaternion_AngleAxis_m1767165696(NULL /*static, unused*/, L_62, L_63, /*hidden argument*/NULL);
		V_11 = L_64;
		SolverPose_t1882007516 * L_65 = V_7;
		SolverPose_t1882007516 * L_66 = V_7;
		NullCheck(L_66);
		Quaternion_t2301928331  L_67 = L_66->get_solverRotation_4();
		Quaternion_t2301928331  L_68 = V_11;
		Quaternion_t2301928331  L_69 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		NullCheck(L_65);
		L_65->set_solverRotation_4(L_69);
		SolverPose_t1882007516 * L_70 = V_7;
		NullCheck(L_70);
		Vector3_t3722313464  L_71 = L_70->get_solverPosition_3();
		V_12 = L_71;
		Vector3_t3722313464  L_72 = V_2;
		Vector3_t3722313464  L_73 = V_12;
		Quaternion_t2301928331  L_74 = V_11;
		Vector3_t3722313464  L_75 = IkSolver2DCCD_RotatePositionFrom_m381530626(__this, L_72, L_73, L_74, /*hidden argument*/NULL);
		V_2 = L_75;
		List_1_t3354082258 * L_76 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = List_1_get_Count_m4291941635(L_76, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1));
		goto IL_01f5;
	}

IL_01c8:
	{
		List_1_t3354082258 * L_78 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		int32_t L_79 = V_13;
		NullCheck(L_78);
		SolverPose_t1882007516 * L_80 = List_1_get_Item_m2802291936(L_78, L_79, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_14 = L_80;
		SolverPose_t1882007516 * L_81 = V_14;
		SolverPose_t1882007516 * L_82 = V_14;
		NullCheck(L_82);
		Vector3_t3722313464  L_83 = L_82->get_solverPosition_3();
		Vector3_t3722313464  L_84 = V_12;
		Quaternion_t2301928331  L_85 = V_11;
		Vector3_t3722313464  L_86 = IkSolver2DCCD_RotatePositionFrom_m381530626(__this, L_83, L_84, L_85, /*hidden argument*/NULL);
		NullCheck(L_81);
		L_81->set_solverPosition_3(L_86);
		int32_t L_87 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_87, (int32_t)1));
	}

IL_01f5:
	{
		int32_t L_88 = V_13;
		int32_t L_89 = V_6;
		if ((((int32_t)L_88) > ((int32_t)L_89)))
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_90 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_90, (int32_t)1));
	}

IL_0204:
	{
		int32_t L_91 = V_6;
		if ((((int32_t)L_91) >= ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_92 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1));
	}

IL_0212:
	{
		int32_t L_93 = V_5;
		int32_t L_94 = __this->get_iterations_7();
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_010c;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 Anima2D.IkSolver2DCCD::RotatePositionFrom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Vector3_t3722313464  IkSolver2DCCD_RotatePositionFrom_m381530626 (IkSolver2DCCD_t3651796268 * __this, Vector3_t3722313464  ___position0, Vector3_t3722313464  ___pivot1, Quaternion_t2301928331  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2DCCD_RotatePositionFrom_m381530626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = ___position0;
		Vector3_t3722313464  L_1 = ___pivot1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Quaternion_t2301928331  L_3 = ___rotation2;
		Vector3_t3722313464  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector3_t3722313464  L_6 = ___pivot1;
		Vector3_t3722313464  L_7 = V_0;
		Vector3_t3722313464  L_8 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.IkSolver2DLimb::.ctor()
extern "C"  void IkSolver2DLimb__ctor_m3591894099 (IkSolver2DLimb_t33506378 * __this, const RuntimeMethod* method)
{
	{
		IkSolver2D__ctor_m2521528584(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.IkSolver2DLimb::DoSolverUpdate()
extern "C"  void IkSolver2DLimb_DoSolverUpdate_m3568754372 (IkSolver2DLimb_t33506378 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IkSolver2DLimb_DoSolverUpdate_m3568754372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SolverPose_t1882007516 * V_0 = NULL;
	SolverPose_t1882007516 * V_1 = NULL;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	float V_13 = 0.0f;
	float G_B11_0 = 0.0f;
	{
		Bone2D_t3065299646 * L_0 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		List_1_t3354082258 * L_2 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m4291941635(L_2, /*hidden argument*/List_1_get_Count_m4291941635_RuntimeMethod_var);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		List_1_t3354082258 * L_4 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		SolverPose_t1882007516 * L_5 = List_1_get_Item_m2802291936(L_4, 0, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_0 = L_5;
		List_1_t3354082258 * L_6 = IkSolver2D_get_solverPoses_m201587207(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		SolverPose_t1882007516 * L_7 = List_1_get_Item_m2802291936(L_6, 1, /*hidden argument*/List_1_get_Item_m2802291936_RuntimeMethod_var);
		V_1 = L_7;
		Vector3_t3722313464  L_8 = ((IkSolver2D_t3375840577 *)__this)->get_targetPosition_6();
		Bone2D_t3065299646 * L_9 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		(&V_2)->set_z_3((0.0f));
		float L_13 = Vector3_get_magnitude_m27958459((&V_2), /*hidden argument*/NULL);
		V_3 = L_13;
		V_4 = (0.0f);
		V_5 = (0.0f);
		float L_14 = Vector3_get_sqrMagnitude_m1474274574((&V_2), /*hidden argument*/NULL);
		V_6 = L_14;
		SolverPose_t1882007516 * L_15 = V_0;
		NullCheck(L_15);
		Bone2D_t3065299646 * L_16 = SolverPose_get_bone_m364338813(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		float L_17 = Bone2D_get_length_m2946475167(L_16, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_18 = V_0;
		NullCheck(L_18);
		Bone2D_t3065299646 * L_19 = SolverPose_get_bone_m364338813(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		float L_20 = Bone2D_get_length_m2946475167(L_19, /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_multiply((float)L_17, (float)L_20));
		SolverPose_t1882007516 * L_21 = V_1;
		NullCheck(L_21);
		Bone2D_t3065299646 * L_22 = SolverPose_get_bone_m364338813(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		float L_23 = Bone2D_get_length_m2946475167(L_22, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_24 = V_1;
		NullCheck(L_24);
		Bone2D_t3065299646 * L_25 = SolverPose_get_bone_m364338813(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		float L_26 = Bone2D_get_length_m2946475167(L_25, /*hidden argument*/NULL);
		V_8 = ((float)il2cpp_codegen_multiply((float)L_23, (float)L_26));
		float L_27 = V_6;
		float L_28 = V_7;
		float L_29 = V_8;
		SolverPose_t1882007516 * L_30 = V_0;
		NullCheck(L_30);
		Bone2D_t3065299646 * L_31 = SolverPose_get_bone_m364338813(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		float L_32 = Bone2D_get_length_m2946475167(L_31, /*hidden argument*/NULL);
		float L_33 = V_3;
		V_9 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)L_27, (float)L_28)), (float)L_29))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_32)), (float)L_33))));
		float L_34 = V_6;
		float L_35 = V_7;
		float L_36 = V_8;
		SolverPose_t1882007516 * L_37 = V_0;
		NullCheck(L_37);
		Bone2D_t3065299646 * L_38 = SolverPose_get_bone_m364338813(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		float L_39 = Bone2D_get_length_m2946475167(L_38, /*hidden argument*/NULL);
		SolverPose_t1882007516 * L_40 = V_1;
		NullCheck(L_40);
		Bone2D_t3065299646 * L_41 = SolverPose_get_bone_m364338813(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		float L_42 = Bone2D_get_length_m2946475167(L_41, /*hidden argument*/NULL);
		V_10 = ((float)((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)L_34, (float)L_35)), (float)L_36))/(float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_39)), (float)L_42))));
		float L_43 = V_9;
		if ((!(((float)L_43) >= ((float)(-1.0f)))))
		{
			goto IL_0149;
		}
	}
	{
		float L_44 = V_9;
		if ((!(((float)L_44) <= ((float)(1.0f)))))
		{
			goto IL_0149;
		}
	}
	{
		float L_45 = V_10;
		if ((!(((float)L_45) >= ((float)(-1.0f)))))
		{
			goto IL_0149;
		}
	}
	{
		float L_46 = V_10;
		if ((!(((float)L_46) <= ((float)(1.0f)))))
		{
			goto IL_0149;
		}
	}
	{
		float L_47 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_48 = acosf(L_47);
		V_4 = ((float)il2cpp_codegen_multiply((float)L_48, (float)(57.29578f)));
		float L_49 = V_10;
		float L_50 = acosf(L_49);
		V_5 = ((float)il2cpp_codegen_multiply((float)L_50, (float)(57.29578f)));
	}

IL_0149:
	{
		bool L_51 = __this->get_flip_7();
		if (!L_51)
		{
			goto IL_015e;
		}
	}
	{
		G_B11_0 = (-1.0f);
		goto IL_0163;
	}

IL_015e:
	{
		G_B11_0 = (1.0f);
	}

IL_0163:
	{
		V_11 = G_B11_0;
		Vector3_t3722313464  L_52 = ((IkSolver2D_t3375840577 *)__this)->get_targetPosition_6();
		Bone2D_t3065299646 * L_53 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Transform_t3600365921 * L_54 = Component_get_transform_m3162698980(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t3722313464  L_55 = Transform_get_position_m36019626(L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_56 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_52, L_55, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_57 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_t3600365921 * L_58 = Component_get_transform_m3162698980(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t3722313464  L_59 = Transform_get_forward_m747522392(L_58, /*hidden argument*/NULL);
		Vector3_t3722313464  L_60 = Vector3_ProjectOnPlane_m1805989059(NULL /*static, unused*/, L_56, L_59, /*hidden argument*/NULL);
		V_12 = L_60;
		Bone2D_t3065299646 * L_61 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_t3600365921 * L_62 = Component_get_transform_m3162698980(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_t3600365921 * L_63 = Transform_get_parent_m835071599(L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_64 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01ca;
		}
	}
	{
		Bone2D_t3065299646 * L_65 = IkSolver2D_get_rootBone_m1270924988(__this, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_t3600365921 * L_66 = Component_get_transform_m3162698980(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		Transform_t3600365921 * L_67 = Transform_get_parent_m835071599(L_66, /*hidden argument*/NULL);
		Vector3_t3722313464  L_68 = V_12;
		NullCheck(L_67);
		Vector3_t3722313464  L_69 = Transform_InverseTransformDirection_m3843238577(L_67, L_68, /*hidden argument*/NULL);
		V_12 = L_69;
	}

IL_01ca:
	{
		float L_70 = (&V_12)->get_y_2();
		float L_71 = (&V_12)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_72 = atan2f(L_70, L_71);
		V_13 = ((float)il2cpp_codegen_multiply((float)L_72, (float)(57.29578f)));
		SolverPose_t1882007516 * L_73 = V_0;
		float L_74 = V_13;
		float L_75 = V_11;
		float L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_77 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)L_74, (float)((float)il2cpp_codegen_multiply((float)L_75, (float)L_76)))), /*hidden argument*/NULL);
		NullCheck(L_73);
		L_73->set_solverRotation_4(L_77);
		SolverPose_t1882007516 * L_78 = V_1;
		float L_79 = V_11;
		float L_80 = V_5;
		Quaternion_t2301928331  L_81 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_79, (float)L_80)), /*hidden argument*/NULL);
		NullCheck(L_78);
		L_78->set_solverRotation_4(L_81);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Anima2D.MathUtils::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SignedAngle_m3328907211 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, Vector3_t3722313464  ___forward2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_SignedAngle_m3328907211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vector3_t3722313464  L_0 = ___a0;
		Vector3_t3722313464  L_1 = ___b1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_2 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t3722313464  L_3 = ___forward2;
		Vector3_t3722313464  L_4 = ___a0;
		Vector3_t3722313464  L_5 = ___b1;
		Vector3_t3722313464  L_6 = Vector3_Cross_m418170344(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Sign_m3457838305(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = V_0;
		float L_10 = V_1;
		return ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10));
	}
}
// System.Single Anima2D.MathUtils::Fmod(System.Single,System.Single)
extern "C"  float MathUtils_Fmod_m657427846 (RuntimeObject * __this /* static, unused */, float ___value0, float ___mod1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_Fmod_m657427846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		float L_1 = ___mod1;
		float L_2 = ___mod1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = fabsf(((float)il2cpp_codegen_add((float)(fmodf(L_0, L_1)), (float)L_2)));
		float L_4 = ___mod1;
		return (fmodf(L_3, L_4));
	}
}
// System.Single Anima2D.MathUtils::SegmentDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SegmentDistance_m2255683459 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_SegmentDistance_m2255683459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3_t3722313464  L_0 = ___b2;
		Vector3_t3722313464  L_1 = ___a1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = ___point0;
		Vector3_t3722313464  L_5 = ___a1;
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector2_t2156229523  L_8 = V_0;
		Vector2_t2156229523  L_9 = V_1;
		float L_10 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = V_2;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_12 = Vector2_get_magnitude_m2752892833((&V_1), /*hidden argument*/NULL);
		return L_12;
	}

IL_0035:
	{
		float L_13 = V_2;
		float L_14 = Vector2_get_sqrMagnitude_m837837635((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_13) >= ((float)L_14))))
		{
			goto IL_0052;
		}
	}
	{
		Vector3_t3722313464  L_15 = ___point0;
		Vector3_t3722313464  L_16 = ___b2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = Vector3_get_magnitude_m27958459((&V_3), /*hidden argument*/NULL);
		return L_18;
	}

IL_0052:
	{
		Vector3_t3722313464  L_19 = ___point0;
		Vector3_t3722313464  L_20 = ___a1;
		Vector3_t3722313464  L_21 = ___b2;
		float L_22 = MathUtils_LineDistance_m1644840721(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Single Anima2D.MathUtils::SegmentSqrtDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SegmentSqrtDistance_m2695621698 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_SegmentSqrtDistance_m2695621698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3_t3722313464  L_0 = ___b2;
		Vector3_t3722313464  L_1 = ___a1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_t3722313464  L_4 = ___point0;
		Vector3_t3722313464  L_5 = ___a1;
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Vector2_t2156229523  L_8 = V_0;
		Vector2_t2156229523  L_9 = V_1;
		float L_10 = Vector2_Dot_m1554553447(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = V_2;
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		float L_12 = Vector2_get_sqrMagnitude_m837837635((&V_1), /*hidden argument*/NULL);
		return L_12;
	}

IL_0035:
	{
		float L_13 = V_2;
		float L_14 = Vector2_get_sqrMagnitude_m837837635((&V_0), /*hidden argument*/NULL);
		if ((!(((float)L_13) >= ((float)L_14))))
		{
			goto IL_0052;
		}
	}
	{
		Vector3_t3722313464  L_15 = ___point0;
		Vector3_t3722313464  L_16 = ___b2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = Vector3_get_sqrMagnitude_m1474274574((&V_3), /*hidden argument*/NULL);
		return L_18;
	}

IL_0052:
	{
		Vector3_t3722313464  L_19 = ___point0;
		Vector3_t3722313464  L_20 = ___a1;
		Vector3_t3722313464  L_21 = ___b2;
		float L_22 = MathUtils_SqrtLineDistance_m2659604187(NULL /*static, unused*/, L_19, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Single Anima2D.MathUtils::LineDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_LineDistance_m1644840721 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_LineDistance_m1644840721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0 = ___point0;
		Vector3_t3722313464  L_1 = ___a1;
		Vector3_t3722313464  L_2 = ___b2;
		float L_3 = MathUtils_SqrtLineDistance_m2659604187(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(L_3);
		return L_4;
	}
}
// System.Single Anima2D.MathUtils::SqrtLineDistance(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float MathUtils_SqrtLineDistance_m2659604187 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Vector3_t3722313464  ___a1, Vector3_t3722313464  ___b2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_SqrtLineDistance_m2659604187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (&___b2)->get_y_2();
		float L_1 = (&___a1)->get_y_2();
		float L_2 = (&___point0)->get_x_1();
		float L_3 = (&___b2)->get_x_1();
		float L_4 = (&___a1)->get_x_1();
		float L_5 = (&___point0)->get_y_2();
		float L_6 = (&___b2)->get_x_1();
		float L_7 = (&___a1)->get_y_2();
		float L_8 = (&___b2)->get_y_2();
		float L_9 = (&___a1)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), (float)L_2)), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
		V_0 = L_10;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = (&___b2)->get_y_2();
		float L_14 = (&___a1)->get_y_2();
		float L_15 = (&___b2)->get_y_2();
		float L_16 = (&___a1)->get_y_2();
		float L_17 = (&___b2)->get_x_1();
		float L_18 = (&___a1)->get_x_1();
		float L_19 = (&___b2)->get_x_1();
		float L_20 = (&___a1)->get_x_1();
		return ((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12))/(float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14)), (float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_16)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)L_18)), (float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_20))))))));
	}
}
// System.Void Anima2D.MathUtils::WorldFromMatrix4x4(UnityEngine.Transform,UnityEngine.Matrix4x4)
extern "C"  void MathUtils_WorldFromMatrix4x4_m1404024027 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___transform0, Matrix4x4_t1817901843  ___matrix1, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___transform0;
		Matrix4x4_t1817901843  L_1 = ___matrix1;
		Vector3_t3722313464  L_2 = MathUtils_GetScale_m285242809(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = ___transform0;
		Matrix4x4_t1817901843  L_4 = ___matrix1;
		Quaternion_t2301928331  L_5 = MathUtils_GetRotation_m2420503444(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m3524318132(L_3, L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = ___transform0;
		Matrix4x4_t1817901843  L_7 = ___matrix1;
		Vector3_t3722313464  L_8 = MathUtils_GetPosition_m1280138155(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3387557959(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.MathUtils::LocalFromMatrix4x4(UnityEngine.Transform,UnityEngine.Matrix4x4)
extern "C"  void MathUtils_LocalFromMatrix4x4_m3464089449 (RuntimeObject * __this /* static, unused */, Transform_t3600365921 * ___transform0, Matrix4x4_t1817901843  ___matrix1, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___transform0;
		Matrix4x4_t1817901843  L_1 = ___matrix1;
		Vector3_t3722313464  L_2 = MathUtils_GetScale_m285242809(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = ___transform0;
		Matrix4x4_t1817901843  L_4 = ___matrix1;
		Quaternion_t2301928331  L_5 = MathUtils_GetRotation_m2420503444(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localRotation_m19445462(L_3, L_5, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = ___transform0;
		Matrix4x4_t1817901843  L_7 = ___matrix1;
		Vector3_t3722313464  L_8 = MathUtils_GetPosition_m1280138155(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_m4128471975(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion Anima2D.MathUtils::GetRotation(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t2301928331  MathUtils_GetRotation_m2420503444 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_GetRotation_m2420503444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		float L_0 = (&___matrix0)->get_m00_0();
		float L_1 = (&___matrix0)->get_m11_5();
		float L_2 = (&___matrix0)->get_m22_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_0)), (float)L_1)), (float)L_2)));
		V_0 = ((float)((float)L_3/(float)(2.0f)));
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)(4.0f), (float)L_4));
		float L_5 = (&___matrix0)->get_m21_6();
		float L_6 = (&___matrix0)->get_m12_9();
		float L_7 = V_1;
		V_2 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6))/(float)L_7));
		float L_8 = (&___matrix0)->get_m02_8();
		float L_9 = (&___matrix0)->get_m20_2();
		float L_10 = V_1;
		V_3 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9))/(float)L_10));
		float L_11 = (&___matrix0)->get_m10_1();
		float L_12 = (&___matrix0)->get_m01_4();
		float L_13 = V_1;
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12))/(float)L_13));
		float L_14 = V_2;
		float L_15 = V_3;
		float L_16 = V_4;
		float L_17 = V_0;
		Quaternion_t2301928331  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Quaternion__ctor_m435141806((&L_18), L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Vector3 Anima2D.MathUtils::GetPosition(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  MathUtils_GetPosition_m1280138155 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___matrix0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (&___matrix0)->get_m03_12();
		V_0 = L_0;
		float L_1 = (&___matrix0)->get_m13_13();
		V_1 = L_1;
		float L_2 = (&___matrix0)->get_m23_14();
		V_2 = L_2;
		float L_3 = V_0;
		float L_4 = V_1;
		float L_5 = V_2;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Anima2D.MathUtils::GetScale(UnityEngine.Matrix4x4)
extern "C"  Vector3_t3722313464  MathUtils_GetScale_m285242809 (RuntimeObject * __this /* static, unused */, Matrix4x4_t1817901843  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_GetScale_m285242809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = (&___m0)->get_m00_0();
		float L_1 = (&___m0)->get_m00_0();
		float L_2 = (&___m0)->get_m01_4();
		float L_3 = (&___m0)->get_m01_4();
		float L_4 = (&___m0)->get_m02_8();
		float L_5 = (&___m0)->get_m02_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		V_0 = L_6;
		float L_7 = (&___m0)->get_m10_1();
		float L_8 = (&___m0)->get_m10_1();
		float L_9 = (&___m0)->get_m11_5();
		float L_10 = (&___m0)->get_m11_5();
		float L_11 = (&___m0)->get_m12_9();
		float L_12 = (&___m0)->get_m12_9();
		float L_13 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))), (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)))));
		V_1 = L_13;
		float L_14 = (&___m0)->get_m20_2();
		float L_15 = (&___m0)->get_m20_2();
		float L_16 = (&___m0)->get_m21_6();
		float L_17 = (&___m0)->get_m21_6();
		float L_18 = (&___m0)->get_m22_10();
		float L_19 = (&___m0)->get_m22_10();
		float L_20 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), (float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)))), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))));
		V_2 = L_20;
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23 = V_2;
		Vector3_t3722313464  L_24;
		memset(&L_24, 0, sizeof(L_24));
		Vector3__ctor_m3353183577((&L_24), L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.Rect Anima2D.MathUtils::ClampRect(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  Rect_t2360479859  MathUtils_ClampRect_m1493228901 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, Rect_t2360479859  ___frame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_ClampRect_m1493228901_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t2360479859 ));
		float L_0 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		float L_1 = Rect_get_width_m3421484486((&___frame1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_0, (0.0f), (((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)(1.0f)))))), /*hidden argument*/NULL);
		Rect_set_xMin_m2413290617((&V_0), L_2, /*hidden argument*/NULL);
		float L_3 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		float L_4 = Rect_get_height_m1358425599((&___frame1), /*hidden argument*/NULL);
		float L_5 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_3, (0.0f), (((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)(1.0f)))))), /*hidden argument*/NULL);
		Rect_set_yMin_m2724127720((&V_0), L_5, /*hidden argument*/NULL);
		float L_6 = Rect_get_xMax_m3018144503((&___rect0), /*hidden argument*/NULL);
		float L_7 = Rect_get_width_m3421484486((&___frame1), /*hidden argument*/NULL);
		float L_8 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_6, (1.0f), (((float)((float)L_7))), /*hidden argument*/NULL);
		Rect_set_xMax_m1720695099((&V_0), L_8, /*hidden argument*/NULL);
		float L_9 = Rect_get_yMax_m743455479((&___rect0), /*hidden argument*/NULL);
		float L_10 = Rect_get_height_m1358425599((&___frame1), /*hidden argument*/NULL);
		float L_11 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_9, (1.0f), (((float)((float)L_10))), /*hidden argument*/NULL);
		Rect_set_yMax_m2031532394((&V_0), L_11, /*hidden argument*/NULL);
		Rect_t2360479859  L_12 = V_0;
		return L_12;
	}
}
// UnityEngine.Vector2 Anima2D.MathUtils::ClampPositionInRect(UnityEngine.Vector2,UnityEngine.Rect)
extern "C"  Vector2_t2156229523  MathUtils_ClampPositionInRect_m1661806423 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___position0, Rect_t2360479859  ___frame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_ClampPositionInRect_m1661806423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___position0)->get_x_0();
		float L_1 = Rect_get_xMin_m581135837((&___frame1), /*hidden argument*/NULL);
		float L_2 = Rect_get_xMax_m3018144503((&___frame1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		float L_4 = (&___position0)->get_y_1();
		float L_5 = Rect_get_yMin_m2601414109((&___frame1), /*hidden argument*/NULL);
		float L_6 = Rect_get_yMax_m743455479((&___frame1), /*hidden argument*/NULL);
		float L_7 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m3970636864((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect Anima2D.MathUtils::OrderMinMax(UnityEngine.Rect)
extern "C"  Rect_t2360479859  MathUtils_OrderMinMax_m4152450733 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  ___rect0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		float L_1 = Rect_get_xMax_m3018144503((&___rect0), /*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0031;
		}
	}
	{
		float L_2 = Rect_get_xMin_m581135837((&___rect0), /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_xMax_m3018144503((&___rect0), /*hidden argument*/NULL);
		Rect_set_xMin_m2413290617((&___rect0), L_3, /*hidden argument*/NULL);
		float L_4 = V_0;
		Rect_set_xMax_m1720695099((&___rect0), L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		float L_5 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		float L_6 = Rect_get_yMax_m743455479((&___rect0), /*hidden argument*/NULL);
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0062;
		}
	}
	{
		float L_7 = Rect_get_yMin_m2601414109((&___rect0), /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = Rect_get_yMax_m743455479((&___rect0), /*hidden argument*/NULL);
		Rect_set_yMin_m2724127720((&___rect0), L_8, /*hidden argument*/NULL);
		float L_9 = V_1;
		Rect_set_yMax_m2031532394((&___rect0), L_9, /*hidden argument*/NULL);
	}

IL_0062:
	{
		Rect_t2360479859  L_10 = ___rect0;
		return L_10;
	}
}
// System.Single Anima2D.MathUtils::RoundToMultipleOf(System.Single,System.Single)
extern "C"  float MathUtils_RoundToMultipleOf_m3820290264 (RuntimeObject * __this /* static, unused */, float ___value0, float ___roundingValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_RoundToMultipleOf_m3820290264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___roundingValue1;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000d;
		}
	}
	{
		float L_1 = ___value0;
		return L_1;
	}

IL_000d:
	{
		float L_2 = ___value0;
		float L_3 = ___roundingValue1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = bankers_roundf(((float)((float)L_2/(float)L_3)));
		float L_5 = ___roundingValue1;
		return ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5));
	}
}
// System.Single Anima2D.MathUtils::GetClosestPowerOfTen(System.Single)
extern "C"  float MathUtils_GetClosestPowerOfTen_m1194299851 (RuntimeObject * __this /* static, unused */, float ___positiveNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_GetClosestPowerOfTen_m1194299851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___positiveNumber0;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		return (1.0f);
	}

IL_0011:
	{
		float L_1 = ___positiveNumber0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = log10f(L_1);
		int32_t L_3 = Mathf_RoundToInt_m1874334613(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		float L_4 = powf((10.0f), (((float)((float)L_3))));
		return L_4;
	}
}
// System.Single Anima2D.MathUtils::RoundBasedOnMinimumDifference(System.Single,System.Single)
extern "C"  float MathUtils_RoundBasedOnMinimumDifference_m812276225 (RuntimeObject * __this /* static, unused */, float ___valueToRound0, float ___minDifference1, const RuntimeMethod* method)
{
	{
		float L_0 = ___minDifference1;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0012;
		}
	}
	{
		float L_1 = ___valueToRound0;
		float L_2 = MathUtils_DiscardLeastSignificantDecimal_m1416504335(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		float L_3 = ___valueToRound0;
		float L_4 = ___minDifference1;
		int32_t L_5 = MathUtils_GetNumberOfDecimalsForMinimumDifference_m453584236(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		double L_6 = Math_Round_m4215079316(NULL /*static, unused*/, (((double)((double)L_3))), L_5, 1, /*hidden argument*/NULL);
		return (((float)((float)L_6)));
	}
}
// System.Single Anima2D.MathUtils::DiscardLeastSignificantDecimal(System.Single)
extern "C"  float MathUtils_DiscardLeastSignificantDecimal_m1416504335 (RuntimeObject * __this /* static, unused */, float ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_DiscardLeastSignificantDecimal_m1416504335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___v0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = fabsf(L_0);
		float L_2 = log10f(L_1);
		int32_t L_3 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, (((int32_t)((int32_t)((float)il2cpp_codegen_subtract((float)(5.0f), (float)L_2))))), 0, ((int32_t)15), /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = ___v0;
		int32_t L_5 = V_0;
		double L_6 = Math_Round_m4215079316(NULL /*static, unused*/, (((double)((double)L_4))), L_5, 1, /*hidden argument*/NULL);
		return (((float)((float)L_6)));
	}
}
// System.Int32 Anima2D.MathUtils::GetNumberOfDecimalsForMinimumDifference(System.Single)
extern "C"  int32_t MathUtils_GetNumberOfDecimalsForMinimumDifference_m453584236 (RuntimeObject * __this /* static, unused */, float ___minDifference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_GetNumberOfDecimalsForMinimumDifference_m453584236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___minDifference0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = log10f(L_0);
		int32_t L_2 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		int32_t L_3 = Mathf_Clamp_m2756574208(NULL /*static, unused*/, ((-L_2)), 0, ((int32_t)15), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 Anima2D.MathUtils::Unskin(UnityEngine.Vector3,UnityEngine.Matrix4x4,UnityEngine.BoneWeight,UnityEngine.Matrix4x4[],UnityEngine.Transform[])
extern "C"  Vector3_t3722313464  MathUtils_Unskin_m707256460 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___skinedPosition0, Matrix4x4_t1817901843  ___localToWorld1, BoneWeight_t1955788027  ___boneWeight2, Matrix4x4U5BU5D_t2302988098* ___bindposes3, TransformU5BU5D_t807237628* ___bones4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathUtils_Unskin_m707256460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Matrix4x4_t1817901843  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Matrix4x4_t1817901843  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Matrix4x4_t1817901843  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Matrix4x4_t1817901843  V_4;
	memset(&V_4, 0, sizeof(V_4));
	int32_t V_5 = 0;
	Matrix4x4_t1817901843 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Matrix4x4_t1817901843  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		TransformU5BU5D_t807237628* L_0 = ___bones4;
		int32_t L_1 = BoneWeight_get_boneIndex0_m1574980135((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_t3600365921 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Matrix4x4_t1817901843  L_4 = Transform_get_localToWorldMatrix_m4155710351(L_3, /*hidden argument*/NULL);
		Matrix4x4U5BU5D_t2302988098* L_5 = ___bindposes3;
		int32_t L_6 = BoneWeight_get_boneIndex0_m1574980135((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_7 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_4, (*(Matrix4x4_t1817901843 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))), /*hidden argument*/NULL);
		V_0 = L_7;
		TransformU5BU5D_t807237628* L_8 = ___bones4;
		int32_t L_9 = BoneWeight_get_boneIndex1_m1574914599((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Transform_t3600365921 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Matrix4x4_t1817901843  L_12 = Transform_get_localToWorldMatrix_m4155710351(L_11, /*hidden argument*/NULL);
		Matrix4x4U5BU5D_t2302988098* L_13 = ___bindposes3;
		int32_t L_14 = BoneWeight_get_boneIndex1_m1574914599((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_13);
		Matrix4x4_t1817901843  L_15 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_12, (*(Matrix4x4_t1817901843 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))), /*hidden argument*/NULL);
		V_1 = L_15;
		TransformU5BU5D_t807237628* L_16 = ___bones4;
		int32_t L_17 = BoneWeight_get_boneIndex2_m1574849063((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Transform_t3600365921 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Matrix4x4_t1817901843  L_20 = Transform_get_localToWorldMatrix_m4155710351(L_19, /*hidden argument*/NULL);
		Matrix4x4U5BU5D_t2302988098* L_21 = ___bindposes3;
		int32_t L_22 = BoneWeight_get_boneIndex2_m1574849063((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_21);
		Matrix4x4_t1817901843  L_23 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_20, (*(Matrix4x4_t1817901843 *)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))), /*hidden argument*/NULL);
		V_2 = L_23;
		TransformU5BU5D_t807237628* L_24 = ___bones4;
		int32_t L_25 = BoneWeight_get_boneIndex3_m1574783527((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_t3600365921 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Matrix4x4_t1817901843  L_28 = Transform_get_localToWorldMatrix_m4155710351(L_27, /*hidden argument*/NULL);
		Matrix4x4U5BU5D_t2302988098* L_29 = ___bindposes3;
		int32_t L_30 = BoneWeight_get_boneIndex3_m1574783527((&___boneWeight2), /*hidden argument*/NULL);
		NullCheck(L_29);
		Matrix4x4_t1817901843  L_31 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_28, (*(Matrix4x4_t1817901843 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))), /*hidden argument*/NULL);
		V_3 = L_31;
		Matrix4x4_t1817901843  L_32 = Matrix4x4_get_identity_m1406790249(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_32;
		V_5 = 0;
		goto IL_0161;
	}

IL_00ab:
	{
		Matrix4x4_t1817901843 * L_33 = (&V_0);
		V_6 = (Matrix4x4_t1817901843 *)L_33;
		int32_t L_34 = V_5;
		int32_t L_35 = L_34;
		V_7 = L_35;
		Matrix4x4_t1817901843 * L_36 = V_6;
		int32_t L_37 = V_7;
		float L_38 = Matrix4x4_get_Item_m567451091(L_36, L_37, /*hidden argument*/NULL);
		float L_39 = BoneWeight_get_weight0_m749725712((&___boneWeight2), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m1906605342(L_33, L_35, ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_40 = (&V_1);
		V_6 = (Matrix4x4_t1817901843 *)L_40;
		int32_t L_41 = V_5;
		int32_t L_42 = L_41;
		V_8 = L_42;
		Matrix4x4_t1817901843 * L_43 = V_6;
		int32_t L_44 = V_8;
		float L_45 = Matrix4x4_get_Item_m567451091(L_43, L_44, /*hidden argument*/NULL);
		float L_46 = BoneWeight_get_weight1_m3088377872((&___boneWeight2), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m1906605342(L_40, L_42, ((float)il2cpp_codegen_multiply((float)L_45, (float)L_46)), /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_47 = (&V_2);
		V_6 = (Matrix4x4_t1817901843 *)L_47;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_9 = L_49;
		Matrix4x4_t1817901843 * L_50 = V_6;
		int32_t L_51 = V_9;
		float L_52 = Matrix4x4_get_Item_m567451091(L_50, L_51, /*hidden argument*/NULL);
		float L_53 = BoneWeight_get_weight2_m367388688((&___boneWeight2), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m1906605342(L_47, L_49, ((float)il2cpp_codegen_multiply((float)L_52, (float)L_53)), /*hidden argument*/NULL);
		Matrix4x4_t1817901843 * L_54 = (&V_3);
		V_6 = (Matrix4x4_t1817901843 *)L_54;
		int32_t L_55 = V_5;
		int32_t L_56 = L_55;
		V_10 = L_56;
		Matrix4x4_t1817901843 * L_57 = V_6;
		int32_t L_58 = V_10;
		float L_59 = Matrix4x4_get_Item_m567451091(L_57, L_58, /*hidden argument*/NULL);
		float L_60 = BoneWeight_get_weight3_m2706040848((&___boneWeight2), /*hidden argument*/NULL);
		Matrix4x4_set_Item_m1906605342(L_54, L_56, ((float)il2cpp_codegen_multiply((float)L_59, (float)L_60)), /*hidden argument*/NULL);
		int32_t L_61 = V_5;
		int32_t L_62 = V_5;
		float L_63 = Matrix4x4_get_Item_m567451091((&V_0), L_62, /*hidden argument*/NULL);
		int32_t L_64 = V_5;
		float L_65 = Matrix4x4_get_Item_m567451091((&V_1), L_64, /*hidden argument*/NULL);
		int32_t L_66 = V_5;
		float L_67 = Matrix4x4_get_Item_m567451091((&V_2), L_66, /*hidden argument*/NULL);
		int32_t L_68 = V_5;
		float L_69 = Matrix4x4_get_Item_m567451091((&V_3), L_68, /*hidden argument*/NULL);
		Matrix4x4_set_Item_m1906605342((&V_4), L_61, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_63, (float)L_65)), (float)L_67)), (float)L_69)), /*hidden argument*/NULL);
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0161:
	{
		int32_t L_71 = V_5;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_00ab;
		}
	}
	{
		Matrix4x4_t1817901843  L_72 = Matrix4x4_get_inverse_m1870592360((&V_4), /*hidden argument*/NULL);
		V_11 = L_72;
		Vector3_t3722313464  L_73 = ___skinedPosition0;
		Vector3_t3722313464  L_74 = Matrix4x4_MultiplyPoint3x4_m4145063176((&V_11), L_73, /*hidden argument*/NULL);
		Vector3_t3722313464  L_75 = Matrix4x4_MultiplyPoint3x4_m4145063176((&___localToWorld1), L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.Pose::.ctor()
extern "C"  void Pose__ctor_m1931895952 (Pose_t3511490975 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.Pose/PoseEntry::.ctor()
extern "C"  void PoseEntry__ctor_m2764462491 (PoseEntry_t139858374 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.PoseManager::.ctor()
extern "C"  void PoseManager__ctor_m2936838748 (PoseManager_t4097669563 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.SpriteMesh::.ctor()
extern "C"  void SpriteMesh__ctor_m3320232787 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Sprite Anima2D.SpriteMesh::get_sprite()
extern "C"  Sprite_t280657092 * SpriteMesh_get_sprite_m636723952 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method)
{
	{
		Sprite_t280657092 * L_0 = __this->get_m_Sprite_4();
		return L_0;
	}
}
// UnityEngine.Mesh Anima2D.SpriteMesh::get_sharedMesh()
extern "C"  Mesh_t3648964284 * SpriteMesh_get_sharedMesh_m3157703814 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method)
{
	{
		Mesh_t3648964284 * L_0 = __this->get_m_SharedMesh_5();
		return L_0;
	}
}
// UnityEngine.Material[] Anima2D.SpriteMesh::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t561872642* SpriteMesh_get_sharedMaterials_m1046039914 (SpriteMesh_t4133440749 * __this, const RuntimeMethod* method)
{
	{
		MaterialU5BU5D_t561872642* L_0 = __this->get_m_SharedMaterials_6();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.SpriteMeshAnimation::.ctor()
extern "C"  void SpriteMeshAnimation__ctor_m476111114 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.SpriteMesh[] Anima2D.SpriteMeshAnimation::get_frames()
extern "C"  SpriteMeshU5BU5D_t497469632* SpriteMeshAnimation_get_frames_m2085960977 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method)
{
	{
		SpriteMeshU5BU5D_t497469632* L_0 = __this->get_m_Frames_3();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshAnimation::set_frames(Anima2D.SpriteMesh[])
extern "C"  void SpriteMeshAnimation_set_frames_m2712122 (SpriteMeshAnimation_t3515039005 * __this, SpriteMeshU5BU5D_t497469632* ___value0, const RuntimeMethod* method)
{
	{
		SpriteMeshU5BU5D_t497469632* L_0 = ___value0;
		__this->set_m_Frames_3(L_0);
		return;
	}
}
// Anima2D.SpriteMeshInstance Anima2D.SpriteMeshAnimation::get_cachedSpriteMeshInstance()
extern "C"  SpriteMeshInstance_t871590551 * SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteMeshInstance_t871590551 * L_0 = __this->get_m_SpriteMeshInstance_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SpriteMeshInstance_t871590551 * L_2 = Component_GetComponent_TisSpriteMeshInstance_t871590551_m2096025117(__this, /*hidden argument*/Component_GetComponent_TisSpriteMeshInstance_t871590551_m2096025117_RuntimeMethod_var);
		__this->set_m_SpriteMeshInstance_5(L_2);
	}

IL_001c:
	{
		SpriteMeshInstance_t871590551 * L_3 = __this->get_m_SpriteMeshInstance_5();
		return L_3;
	}
}
// System.Int32 Anima2D.SpriteMeshAnimation::get_frame()
extern "C"  int32_t SpriteMeshAnimation_get_frame_m2515126366 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_Frame_2();
		return (((int32_t)((int32_t)L_0)));
	}
}
// System.Void Anima2D.SpriteMeshAnimation::set_frame(System.Int32)
extern "C"  void SpriteMeshAnimation_set_frame_m2669905110 (SpriteMeshAnimation_t3515039005 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Frame_2((((float)((float)L_0))));
		return;
	}
}
// System.Void Anima2D.SpriteMeshAnimation::LateUpdate()
extern "C"  void SpriteMeshAnimation_LateUpdate_m1610323722 (SpriteMeshAnimation_t3515039005 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshAnimation_LateUpdate_m1610323722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_m_OldFrame_4();
		int32_t L_1 = SpriteMeshAnimation_get_frame_m2515126366(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0071;
		}
	}
	{
		SpriteMeshU5BU5D_t497469632* L_2 = __this->get_m_Frames_3();
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		SpriteMeshU5BU5D_t497469632* L_3 = __this->get_m_Frames_3();
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		SpriteMeshU5BU5D_t497469632* L_4 = __this->get_m_Frames_3();
		NullCheck(L_4);
		int32_t L_5 = SpriteMeshAnimation_get_frame_m2515126366(__this, /*hidden argument*/NULL);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) <= ((int32_t)L_5)))
		{
			goto IL_0071;
		}
	}
	{
		SpriteMeshInstance_t871590551 * L_6 = SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_8 = SpriteMeshAnimation_get_frame_m2515126366(__this, /*hidden argument*/NULL);
		__this->set_m_OldFrame_4(L_8);
		SpriteMeshInstance_t871590551 * L_9 = SpriteMeshAnimation_get_cachedSpriteMeshInstance_m2146286211(__this, /*hidden argument*/NULL);
		SpriteMeshU5BU5D_t497469632* L_10 = __this->get_m_Frames_3();
		int32_t L_11 = SpriteMeshAnimation_get_frame_m2515126366(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_12 = L_11;
		SpriteMesh_t4133440749 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		SpriteMeshInstance_set_spriteMesh_m313332660(L_9, L_13, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Anima2D.SpriteMeshInstance::.ctor()
extern "C"  void SpriteMeshInstance__ctor_m535658594 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance__ctor_m535658594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Color_3(L_0);
		List_1_t242407092 * L_1 = (List_1_t242407092 *)il2cpp_codegen_object_new(List_1_t242407092_il2cpp_TypeInfo_var);
		List_1__ctor_m3411318880(L_1, /*hidden argument*/List_1__ctor_m3411318880_RuntimeMethod_var);
		__this->set_m_CachedBones_9(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.SpriteMesh Anima2D.SpriteMeshInstance::get_spriteMesh()
extern "C"  SpriteMesh_t4133440749 * SpriteMeshInstance_get_spriteMesh_m4268136452 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		SpriteMesh_t4133440749 * L_0 = __this->get_m_SpriteMesh_2();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_spriteMesh(Anima2D.SpriteMesh)
extern "C"  void SpriteMeshInstance_set_spriteMesh_m313332660 (SpriteMeshInstance_t871590551 * __this, SpriteMesh_t4133440749 * ___value0, const RuntimeMethod* method)
{
	{
		SpriteMesh_t4133440749 * L_0 = ___value0;
		__this->set_m_SpriteMesh_2(L_0);
		return;
	}
}
// UnityEngine.Material Anima2D.SpriteMeshInstance::get_sharedMaterial()
extern "C"  Material_t340375123 * SpriteMeshInstance_get_sharedMaterial_m2224449747 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		MaterialU5BU5D_t561872642* L_0 = __this->get_m_Materials_4();
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		MaterialU5BU5D_t561872642* L_1 = __this->get_m_Materials_4();
		NullCheck(L_1);
		int32_t L_2 = 0;
		Material_t340375123 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}

IL_0017:
	{
		return (Material_t340375123 *)NULL;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_sharedMaterial(UnityEngine.Material)
extern "C"  void SpriteMeshInstance_set_sharedMaterial_m1463599232 (SpriteMeshInstance_t871590551 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_set_sharedMaterial_m1463599232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MaterialU5BU5D_t561872642* L_0 = ((MaterialU5BU5D_t561872642*)SZArrayNew(MaterialU5BU5D_t561872642_il2cpp_TypeInfo_var, (uint32_t)1));
		Material_t340375123 * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Material_t340375123 *)L_1);
		__this->set_m_Materials_4(L_0);
		return;
	}
}
// UnityEngine.Material[] Anima2D.SpriteMeshInstance::get_sharedMaterials()
extern "C"  MaterialU5BU5D_t561872642* SpriteMeshInstance_get_sharedMaterials_m1675244170 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		MaterialU5BU5D_t561872642* L_0 = __this->get_m_Materials_4();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void SpriteMeshInstance_set_sharedMaterials_m751104311 (SpriteMeshInstance_t871590551 * __this, MaterialU5BU5D_t561872642* ___value0, const RuntimeMethod* method)
{
	{
		MaterialU5BU5D_t561872642* L_0 = ___value0;
		__this->set_m_Materials_4(L_0);
		return;
	}
}
// UnityEngine.Color Anima2D.SpriteMeshInstance::get_color()
extern "C"  Color_t2555686324  SpriteMeshInstance_get_color_m52558017 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = __this->get_m_Color_3();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_color(UnityEngine.Color)
extern "C"  void SpriteMeshInstance_set_color_m3427049872 (SpriteMeshInstance_t871590551 * __this, Color_t2555686324  ___value0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___value0;
		__this->set_m_Color_3(L_0);
		return;
	}
}
// System.Int32 Anima2D.SpriteMeshInstance::get_sortingLayerID()
extern "C"  int32_t SpriteMeshInstance_get_sortingLayerID_m1993069740 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_SortingLayerID_5();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_sortingLayerID(System.Int32)
extern "C"  void SpriteMeshInstance_set_sortingLayerID_m469326806 (SpriteMeshInstance_t871590551 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_SortingLayerID_5(L_0);
		return;
	}
}
// System.String Anima2D.SpriteMeshInstance::get_sortingLayerName()
extern "C"  String_t* SpriteMeshInstance_get_sortingLayerName_m479530502 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_sortingLayerName_m479530502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Renderer_t2627027031 * L_2 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Renderer_get_sortingLayerName_m3953662825(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001c:
	{
		return _stringLiteral1948333211;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_sortingLayerName(System.String)
extern "C"  void SpriteMeshInstance_set_sortingLayerName_m1169334417 (SpriteMeshInstance_t871590551 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_set_sortingLayerName_m1169334417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Renderer_t2627027031 * L_2 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		Renderer_set_sortingLayerName_m3885968216(L_2, L_3, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_4 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Renderer_get_sortingLayerID_m3902855301(L_4, /*hidden argument*/NULL);
		SpriteMeshInstance_set_sortingLayerID_m469326806(__this, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Int32 Anima2D.SpriteMeshInstance::get_sortingOrder()
extern "C"  int32_t SpriteMeshInstance_get_sortingOrder_m1206238421 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_SortingOrder_6();
		return L_0;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_sortingOrder(System.Int32)
extern "C"  void SpriteMeshInstance_set_sortingOrder_m3301908554 (SpriteMeshInstance_t871590551 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_SortingOrder_6(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<Anima2D.Bone2D> Anima2D.SpriteMeshInstance::get_bones()
extern "C"  List_1_t242407092 * SpriteMeshInstance_get_bones_m419870594 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_bones_m419870594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bone2D_t3065299646 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		Bone2DU5BU5D_t2775241867* L_0 = __this->get_m_Bones_7();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		Bone2DU5BU5D_t2775241867* L_1 = __this->get_m_Bones_7();
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		List_1_t242407092 * L_2 = __this->get_m_CachedBones_9();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m2615777027(L_2, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_003a;
		}
	}
	{
		Bone2DU5BU5D_t2775241867* L_4 = __this->get_m_Bones_7();
		List_1_t242407092 * L_5 = (List_1_t242407092 *)il2cpp_codegen_object_new(List_1_t242407092_il2cpp_TypeInfo_var);
		List_1__ctor_m3575663598(L_5, (RuntimeObject*)(RuntimeObject*)L_4, /*hidden argument*/List_1__ctor_m3575663598_RuntimeMethod_var);
		SpriteMeshInstance_set_bones_m2901801063(__this, L_5, /*hidden argument*/NULL);
	}

IL_003a:
	{
		TransformU5BU5D_t807237628* L_6 = __this->get_m_BoneTransforms_8();
		if (!L_6)
		{
			goto IL_00b7;
		}
	}
	{
		List_1_t242407092 * L_7 = __this->get_m_CachedBones_9();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m2615777027(L_7, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		TransformU5BU5D_t807237628* L_9 = __this->get_m_BoneTransforms_8();
		NullCheck(L_9);
		if ((((int32_t)L_8) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_00b7;
		}
	}
	{
		TransformU5BU5D_t807237628* L_10 = __this->get_m_BoneTransforms_8();
		NullCheck(L_10);
		List_1_t242407092 * L_11 = (List_1_t242407092 *)il2cpp_codegen_object_new(List_1_t242407092_il2cpp_TypeInfo_var);
		List_1__ctor_m3980914492(L_11, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/List_1__ctor_m3980914492_RuntimeMethod_var);
		__this->set_m_CachedBones_9(L_11);
		V_0 = 0;
		goto IL_00a9;
	}

IL_0077:
	{
		V_1 = (Bone2D_t3065299646 *)NULL;
		TransformU5BU5D_t807237628* L_12 = __this->get_m_BoneTransforms_8();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Transform_t3600365921 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		TransformU5BU5D_t807237628* L_17 = __this->get_m_BoneTransforms_8();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_t3600365921 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Bone2D_t3065299646 * L_21 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_20, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		V_1 = L_21;
	}

IL_0099:
	{
		List_1_t242407092 * L_22 = __this->get_m_CachedBones_9();
		Bone2D_t3065299646 * L_23 = V_1;
		NullCheck(L_22);
		List_1_Add_m121867798(L_22, L_23, /*hidden argument*/List_1_Add_m121867798_RuntimeMethod_var);
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00a9:
	{
		int32_t L_25 = V_0;
		TransformU5BU5D_t807237628* L_26 = __this->get_m_BoneTransforms_8();
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_0077;
		}
	}

IL_00b7:
	{
		V_2 = 0;
		goto IL_0149;
	}

IL_00be:
	{
		List_1_t242407092 * L_27 = __this->get_m_CachedBones_9();
		int32_t L_28 = V_2;
		NullCheck(L_27);
		Bone2D_t3065299646 * L_29 = List_1_get_Item_m677199212(L_27, L_28, /*hidden argument*/List_1_get_Item_m677199212_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0104;
		}
	}
	{
		TransformU5BU5D_t807237628* L_31 = __this->get_m_BoneTransforms_8();
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Transform_t3600365921 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		List_1_t242407092 * L_35 = __this->get_m_CachedBones_9();
		int32_t L_36 = V_2;
		NullCheck(L_35);
		Bone2D_t3065299646 * L_37 = List_1_get_Item_m677199212(L_35, L_36, /*hidden argument*/List_1_get_Item_m677199212_RuntimeMethod_var);
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = Component_get_transform_m3162698980(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_34, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0104;
		}
	}
	{
		List_1_t242407092 * L_40 = __this->get_m_CachedBones_9();
		int32_t L_41 = V_2;
		NullCheck(L_40);
		List_1_set_Item_m1382492940(L_40, L_41, (Bone2D_t3065299646 *)NULL, /*hidden argument*/List_1_set_Item_m1382492940_RuntimeMethod_var);
	}

IL_0104:
	{
		List_1_t242407092 * L_42 = __this->get_m_CachedBones_9();
		int32_t L_43 = V_2;
		NullCheck(L_42);
		Bone2D_t3065299646 * L_44 = List_1_get_Item_m677199212(L_42, L_43, /*hidden argument*/List_1_get_Item_m677199212_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_45 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0145;
		}
	}
	{
		TransformU5BU5D_t807237628* L_46 = __this->get_m_BoneTransforms_8();
		int32_t L_47 = V_2;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Transform_t3600365921 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_50 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		List_1_t242407092 * L_51 = __this->get_m_CachedBones_9();
		int32_t L_52 = V_2;
		TransformU5BU5D_t807237628* L_53 = __this->get_m_BoneTransforms_8();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		Transform_t3600365921 * L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		Bone2D_t3065299646 * L_57 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(L_56, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		NullCheck(L_51);
		List_1_set_Item_m1382492940(L_51, L_52, L_57, /*hidden argument*/List_1_set_Item_m1382492940_RuntimeMethod_var);
	}

IL_0145:
	{
		int32_t L_58 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1));
	}

IL_0149:
	{
		int32_t L_59 = V_2;
		List_1_t242407092 * L_60 = __this->get_m_CachedBones_9();
		NullCheck(L_60);
		int32_t L_61 = List_1_get_Count_m2615777027(L_60, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		if ((((int32_t)L_59) < ((int32_t)L_61)))
		{
			goto IL_00be;
		}
	}
	{
		List_1_t242407092 * L_62 = __this->get_m_CachedBones_9();
		return L_62;
	}
}
// System.Void Anima2D.SpriteMeshInstance::set_bones(System.Collections.Generic.List`1<Anima2D.Bone2D>)
extern "C"  void SpriteMeshInstance_set_bones_m2901801063 (SpriteMeshInstance_t871590551 * __this, List_1_t242407092 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_set_bones_m2901801063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bone2D_t3065299646 * V_1 = NULL;
	{
		__this->set_m_Bones_7((Bone2DU5BU5D_t2775241867*)NULL);
		List_1_t242407092 * L_0 = ___value0;
		List_1_t242407092 * L_1 = (List_1_t242407092 *)il2cpp_codegen_object_new(List_1_t242407092_il2cpp_TypeInfo_var);
		List_1__ctor_m3575663598(L_1, L_0, /*hidden argument*/List_1__ctor_m3575663598_RuntimeMethod_var);
		__this->set_m_CachedBones_9(L_1);
		List_1_t242407092 * L_2 = __this->get_m_CachedBones_9();
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m2615777027(L_2, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		__this->set_m_BoneTransforms_8(((TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		V_0 = 0;
		goto IL_005a;
	}

IL_0030:
	{
		List_1_t242407092 * L_4 = __this->get_m_CachedBones_9();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Bone2D_t3065299646 * L_6 = List_1_get_Item_m677199212(L_4, L_5, /*hidden argument*/List_1_get_Item_m677199212_RuntimeMethod_var);
		V_1 = L_6;
		Bone2D_t3065299646 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		TransformU5BU5D_t807237628* L_9 = __this->get_m_BoneTransforms_8();
		int32_t L_10 = V_0;
		Bone2D_t3065299646 * L_11 = V_1;
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Transform_t3600365921 *)L_12);
	}

IL_0056:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005a:
	{
		int32_t L_14 = V_0;
		List_1_t242407092 * L_15 = __this->get_m_CachedBones_9();
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_m2615777027(L_15, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_0030;
		}
	}
	{
		SkinnedMeshRenderer_t245602842 * L_17 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		SkinnedMeshRenderer_t245602842 * L_19 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(__this, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_20 = __this->get_m_BoneTransforms_8();
		NullCheck(L_19);
		SkinnedMeshRenderer_set_bones_m4136734710(L_19, L_20, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
// UnityEngine.MaterialPropertyBlock Anima2D.SpriteMeshInstance::get_materialPropertyBlock()
extern "C"  MaterialPropertyBlock_t3213117958 * SpriteMeshInstance_get_materialPropertyBlock_m2070813736 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_materialPropertyBlock_m2070813736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MaterialPropertyBlock_t3213117958 * L_0 = __this->get_m_MaterialPropertyBlock_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		MaterialPropertyBlock_t3213117958 * L_1 = (MaterialPropertyBlock_t3213117958 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t3213117958_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m3898279695(L_1, /*hidden argument*/NULL);
		__this->set_m_MaterialPropertyBlock_10(L_1);
	}

IL_0016:
	{
		MaterialPropertyBlock_t3213117958 * L_2 = __this->get_m_MaterialPropertyBlock_10();
		return L_2;
	}
}
// UnityEngine.Renderer Anima2D.SpriteMeshInstance::get_cachedRenderer()
extern "C"  Renderer_t2627027031 * SpriteMeshInstance_get_cachedRenderer_m2274103141 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_cachedRenderer_m2274103141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Renderer_t2627027031 * L_0 = __this->get_mCachedRenderer_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Renderer_t2627027031 * L_2 = Component_GetComponent_TisRenderer_t2627027031_m2651633905(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t2627027031_m2651633905_RuntimeMethod_var);
		__this->set_mCachedRenderer_11(L_2);
	}

IL_001c:
	{
		Renderer_t2627027031 * L_3 = __this->get_mCachedRenderer_11();
		return L_3;
	}
}
// UnityEngine.MeshFilter Anima2D.SpriteMeshInstance::get_cachedMeshFilter()
extern "C"  MeshFilter_t3523625662 * SpriteMeshInstance_get_cachedMeshFilter_m3379629522 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_cachedMeshFilter_m3379629522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshFilter_t3523625662 * L_0 = __this->get_mCachedMeshFilter_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		MeshFilter_t3523625662 * L_2 = Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var);
		__this->set_mCachedMeshFilter_12(L_2);
	}

IL_001c:
	{
		MeshFilter_t3523625662 * L_3 = __this->get_mCachedMeshFilter_12();
		return L_3;
	}
}
// UnityEngine.SkinnedMeshRenderer Anima2D.SpriteMeshInstance::get_cachedSkinnedRenderer()
extern "C"  SkinnedMeshRenderer_t245602842 * SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SkinnedMeshRenderer_t245602842 * L_0 = __this->get_mCachedSkinnedRenderer_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SkinnedMeshRenderer_t245602842 * L_2 = Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185(__this, /*hidden argument*/Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185_RuntimeMethod_var);
		__this->set_mCachedSkinnedRenderer_13(L_2);
	}

IL_001c:
	{
		SkinnedMeshRenderer_t245602842 * L_3 = __this->get_mCachedSkinnedRenderer_13();
		return L_3;
	}
}
// UnityEngine.Texture2D Anima2D.SpriteMeshInstance::get_spriteTexture()
extern "C"  Texture2D_t3840446185 * SpriteMeshInstance_get_spriteTexture_m1488351362 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_spriteTexture_m1488351362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteMesh_t4133440749 * L_0 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		SpriteMesh_t4133440749 * L_2 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Sprite_t280657092 * L_3 = SpriteMesh_get_sprite_m636723952(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		SpriteMesh_t4133440749 * L_5 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Sprite_t280657092 * L_6 = SpriteMesh_get_sprite_m636723952(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Texture2D_t3840446185 * L_7 = Sprite_get_texture_m3976398399(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0036:
	{
		return (Texture2D_t3840446185 *)NULL;
	}
}
// UnityEngine.Mesh Anima2D.SpriteMeshInstance::get_sharedMesh()
extern "C"  Mesh_t3648964284 * SpriteMeshInstance_get_sharedMesh_m3404105658 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_sharedMesh_m3404105658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t3648964284 * L_0 = __this->get_m_InitialMesh_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Mesh_t3648964284 * L_2 = __this->get_m_InitialMesh_14();
		return L_2;
	}

IL_0017:
	{
		return (Mesh_t3648964284 *)NULL;
	}
}
// UnityEngine.Mesh Anima2D.SpriteMeshInstance::get_mesh()
extern "C"  Mesh_t3648964284 * SpriteMeshInstance_get_mesh_m4183687531 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_get_mesh_m4183687531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t3648964284 * L_0 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Mesh_t3648964284 * L_2 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Mesh_t3648964284 * L_3 = Object_Instantiate_TisMesh_t3648964284_m1392175164(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisMesh_t3648964284_m1392175164_RuntimeMethod_var);
		return L_3;
	}

IL_001c:
	{
		return (Mesh_t3648964284 *)NULL;
	}
}
// System.Void Anima2D.SpriteMeshInstance::OnDestroy()
extern "C"  void SpriteMeshInstance_OnDestroy_m223902123 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_OnDestroy_m223902123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Mesh_t3648964284 * L_0 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Mesh_t3648964284 * L_2 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::Awake()
extern "C"  void SpriteMeshInstance_Awake_m1263874503 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	{
		SpriteMeshInstance_UpdateCurrentMesh_m145774061(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::UpdateInitialMesh()
extern "C"  void SpriteMeshInstance_UpdateInitialMesh_m3583121261 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_UpdateInitialMesh_m3583121261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_InitialMesh_14((Mesh_t3648964284 *)NULL);
		SpriteMesh_t4133440749 * L_0 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		SpriteMesh_t4133440749 * L_2 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Mesh_t3648964284 * L_3 = SpriteMesh_get_sharedMesh_m3157703814(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		SpriteMesh_t4133440749 * L_5 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Mesh_t3648964284 * L_6 = SpriteMesh_get_sharedMesh_m3157703814(L_5, /*hidden argument*/NULL);
		__this->set_m_InitialMesh_14(L_6);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::UpdateCurrentMesh()
extern "C"  void SpriteMeshInstance_UpdateCurrentMesh_m145774061 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_UpdateCurrentMesh_m145774061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3U5BU5D_t1718750761* V_5 = NULL;
	{
		SpriteMeshInstance_UpdateInitialMesh_m3583121261(__this, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_0 = __this->get_m_InitialMesh_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_01df;
		}
	}
	{
		Mesh_t3648964284 * L_2 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		Mesh_t3648964284 * L_4 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_4, /*hidden argument*/NULL);
		__this->set_m_CurrentMesh_15(L_4);
		Mesh_t3648964284 * L_5 = __this->get_m_CurrentMesh_15();
		NullCheck(L_5);
		Object_set_hideFlags_m1648752846(L_5, ((int32_t)52), /*hidden argument*/NULL);
		Mesh_t3648964284 * L_6 = __this->get_m_CurrentMesh_15();
		NullCheck(L_6);
		Mesh_MarkDynamic_m813264685(L_6, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Mesh_t3648964284 * L_7 = __this->get_m_CurrentMesh_15();
		NullCheck(L_7);
		Mesh_Clear_m2630385472(L_7, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_8 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_9 = __this->get_m_InitialMesh_14();
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_set_name_m291480324(L_8, L_10, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_11 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_12 = __this->get_m_InitialMesh_14();
		NullCheck(L_12);
		Vector3U5BU5D_t1718750761* L_13 = Mesh_get_vertices_m3585684815(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Mesh_set_vertices_m2084450642(L_11, L_13, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_14 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_15 = __this->get_m_InitialMesh_14();
		NullCheck(L_15);
		Vector3U5BU5D_t1718750761* L_16 = Mesh_get_normals_m4099615978(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Mesh_set_normals_m332514528(L_14, L_16, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_17 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_18 = __this->get_m_InitialMesh_14();
		NullCheck(L_18);
		BoneWeightU5BU5D_t1776052410* L_19 = Mesh_get_boneWeights_m371091495(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Mesh_set_boneWeights_m3094710230(L_17, L_19, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_20 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_21 = __this->get_m_InitialMesh_14();
		NullCheck(L_21);
		Matrix4x4U5BU5D_t2302988098* L_22 = Mesh_get_bindposes_m597973920(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Mesh_set_bindposes_m506051887(L_20, L_22, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_23 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_24 = __this->get_m_InitialMesh_14();
		NullCheck(L_24);
		Vector2U5BU5D_t1457185986* L_25 = Mesh_get_uv_m4017248(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		Mesh_set_uv_m1258646872(L_23, L_25, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_26 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_27 = __this->get_m_InitialMesh_14();
		NullCheck(L_27);
		Bounds_t2266837910  L_28 = Mesh_get_bounds_m2004960313(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Mesh_set_bounds_m901235523(L_26, L_28, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_29 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_30 = __this->get_m_InitialMesh_14();
		NullCheck(L_30);
		ColorU5BU5D_t941916413* L_31 = Mesh_get_colors_m1375263373(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		Mesh_set_colors_m2218481242(L_29, L_31, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0127;
	}

IL_010b:
	{
		Mesh_t3648964284 * L_32 = __this->get_m_CurrentMesh_15();
		Mesh_t3648964284 * L_33 = __this->get_m_InitialMesh_14();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t385246372* L_35 = Mesh_GetTriangles_m973693202(L_33, L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_0;
		NullCheck(L_32);
		Mesh_SetTriangles_m3871477336(L_32, L_35, L_36, /*hidden argument*/NULL);
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0127:
	{
		int32_t L_38 = V_0;
		Mesh_t3648964284 * L_39 = __this->get_m_InitialMesh_14();
		NullCheck(L_39);
		int32_t L_40 = Mesh_get_subMeshCount_m3992802841(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_010b;
		}
	}
	{
		Mesh_t3648964284 * L_41 = __this->get_m_CurrentMesh_15();
		NullCheck(L_41);
		Mesh_ClearBlendShapes_m3194924980(L_41, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_01bc;
	}

IL_014a:
	{
		Mesh_t3648964284 * L_42 = __this->get_m_InitialMesh_14();
		int32_t L_43 = V_1;
		NullCheck(L_42);
		String_t* L_44 = Mesh_GetBlendShapeName_m2641015160(L_42, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
		V_3 = 0;
		goto IL_01a6;
	}

IL_015e:
	{
		Mesh_t3648964284 * L_45 = __this->get_m_InitialMesh_14();
		int32_t L_46 = V_1;
		int32_t L_47 = V_3;
		NullCheck(L_45);
		float L_48 = Mesh_GetBlendShapeFrameWeight_m196188021(L_45, L_46, L_47, /*hidden argument*/NULL);
		V_4 = L_48;
		Mesh_t3648964284 * L_49 = __this->get_m_InitialMesh_14();
		NullCheck(L_49);
		int32_t L_50 = Mesh_get_vertexCount_m884140614(L_49, /*hidden argument*/NULL);
		V_5 = ((Vector3U5BU5D_t1718750761*)SZArrayNew(Vector3U5BU5D_t1718750761_il2cpp_TypeInfo_var, (uint32_t)L_50));
		Mesh_t3648964284 * L_51 = __this->get_m_InitialMesh_14();
		int32_t L_52 = V_1;
		int32_t L_53 = V_3;
		Vector3U5BU5D_t1718750761* L_54 = V_5;
		NullCheck(L_51);
		Mesh_GetBlendShapeFrameVertices_m2207147822(L_51, L_52, L_53, L_54, (Vector3U5BU5D_t1718750761*)(Vector3U5BU5D_t1718750761*)NULL, (Vector3U5BU5D_t1718750761*)(Vector3U5BU5D_t1718750761*)NULL, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_55 = __this->get_m_CurrentMesh_15();
		String_t* L_56 = V_2;
		float L_57 = V_4;
		Vector3U5BU5D_t1718750761* L_58 = V_5;
		NullCheck(L_55);
		Mesh_AddBlendShapeFrame_m2920294038(L_55, L_56, L_57, L_58, (Vector3U5BU5D_t1718750761*)(Vector3U5BU5D_t1718750761*)NULL, (Vector3U5BU5D_t1718750761*)(Vector3U5BU5D_t1718750761*)NULL, /*hidden argument*/NULL);
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_01a6:
	{
		int32_t L_60 = V_3;
		Mesh_t3648964284 * L_61 = __this->get_m_InitialMesh_14();
		int32_t L_62 = V_1;
		NullCheck(L_61);
		int32_t L_63 = Mesh_GetBlendShapeFrameCount_m1794976068(L_61, L_62, /*hidden argument*/NULL);
		if ((((int32_t)L_60) < ((int32_t)L_63)))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_64 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_01bc:
	{
		int32_t L_65 = V_1;
		Mesh_t3648964284 * L_66 = __this->get_m_InitialMesh_14();
		NullCheck(L_66);
		int32_t L_67 = Mesh_get_blendShapeCount_m1891235216(L_66, /*hidden argument*/NULL);
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_014a;
		}
	}
	{
		Mesh_t3648964284 * L_68 = __this->get_m_CurrentMesh_15();
		NullCheck(L_68);
		Object_set_hideFlags_m1648752846(L_68, ((int32_t)52), /*hidden argument*/NULL);
		goto IL_0201;
	}

IL_01df:
	{
		__this->set_m_InitialMesh_14((Mesh_t3648964284 *)NULL);
		Mesh_t3648964284 * L_69 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_70 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_69, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_0201;
		}
	}
	{
		Mesh_t3648964284 * L_71 = __this->get_m_CurrentMesh_15();
		NullCheck(L_71);
		Mesh_Clear_m2630385472(L_71, /*hidden argument*/NULL);
	}

IL_0201:
	{
		Mesh_t3648964284 * L_72 = __this->get_m_CurrentMesh_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_73 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_026e;
		}
	}
	{
		SpriteMesh_t4133440749 * L_74 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_75 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_0262;
		}
	}
	{
		SpriteMesh_t4133440749 * L_76 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		Sprite_t280657092 * L_77 = SpriteMesh_get_sprite_m636723952(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_78 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0262;
		}
	}
	{
		SpriteMesh_t4133440749 * L_79 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_79);
		Sprite_t280657092 * L_80 = SpriteMesh_get_sprite_m636723952(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		bool L_81 = Sprite_get_packed_m1179604684(L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_0262;
		}
	}
	{
		Mesh_t3648964284 * L_82 = __this->get_m_CurrentMesh_15();
		SpriteMesh_t4133440749 * L_83 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_83);
		Sprite_t280657092 * L_84 = SpriteMesh_get_sprite_m636723952(L_83, /*hidden argument*/NULL);
		SpriteMeshInstance_SetSpriteUVs_m545111398(__this, L_82, L_84, /*hidden argument*/NULL);
	}

IL_0262:
	{
		Mesh_t3648964284 * L_85 = __this->get_m_CurrentMesh_15();
		NullCheck(L_85);
		Mesh_UploadMeshData_m969465843(L_85, (bool)0, /*hidden argument*/NULL);
	}

IL_026e:
	{
		SpriteMeshInstance_UpdateRenderers_m2089936899(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::SetSpriteUVs(UnityEngine.Mesh,UnityEngine.Sprite)
extern "C"  void SpriteMeshInstance_SetSpriteUVs_m545111398 (SpriteMeshInstance_t871590551 * __this, Mesh_t3648964284 * ___mesh0, Sprite_t280657092 * ___sprite1, const RuntimeMethod* method)
{
	Vector2U5BU5D_t1457185986* V_0 = NULL;
	{
		Sprite_t280657092 * L_0 = ___sprite1;
		NullCheck(L_0);
		Vector2U5BU5D_t1457185986* L_1 = Sprite_get_uv_m2963075876(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Mesh_t3648964284 * L_2 = ___mesh0;
		NullCheck(L_2);
		int32_t L_3 = Mesh_get_vertexCount_m884140614(L_2, /*hidden argument*/NULL);
		Vector2U5BU5D_t1457185986* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))))))
		{
			goto IL_0021;
		}
	}
	{
		Mesh_t3648964284 * L_5 = ___mesh0;
		Sprite_t280657092 * L_6 = ___sprite1;
		NullCheck(L_6);
		Vector2U5BU5D_t1457185986* L_7 = Sprite_get_uv_m2963075876(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Mesh_set_uv_m1258646872(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::UpdateRenderers()
extern "C"  void SpriteMeshInstance_UpdateRenderers_m2089936899 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_UpdateRenderers_m2089936899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	{
		V_0 = (Mesh_t3648964284 *)NULL;
		Mesh_t3648964284 * L_0 = __this->get_m_InitialMesh_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Mesh_t3648964284 * L_2 = __this->get_m_CurrentMesh_15();
		V_0 = L_2;
	}

IL_0019:
	{
		SkinnedMeshRenderer_t245602842 * L_3 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		SkinnedMeshRenderer_t245602842 * L_5 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(__this, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_6 = V_0;
		NullCheck(L_5);
		SkinnedMeshRenderer_set_sharedMesh_m2397334786(L_5, L_6, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_003a:
	{
		MeshFilter_t3523625662 * L_7 = SpriteMeshInstance_get_cachedMeshFilter_m3379629522(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		MeshFilter_t3523625662 * L_9 = SpriteMeshInstance_get_cachedMeshFilter_m3379629522(__this, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_10 = V_0;
		NullCheck(L_9);
		MeshFilter_set_sharedMesh_m2173122548(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::LateUpdate()
extern "C"  void SpriteMeshInstance_LateUpdate_m934550358 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_LateUpdate_m934550358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteMesh_t4133440749 * L_0 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		SpriteMesh_t4133440749 * L_2 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		SpriteMesh_t4133440749 * L_4 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Mesh_t3648964284 * L_5 = SpriteMesh_get_sharedMesh_m3157703814(L_4, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_6 = __this->get_m_InitialMesh_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}

IL_003b:
	{
		SpriteMeshInstance_UpdateCurrentMesh_m145774061(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void Anima2D.SpriteMeshInstance::OnWillRenderObject()
extern "C"  void SpriteMeshInstance_OnWillRenderObject_m587681222 (SpriteMeshInstance_t871590551 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteMeshInstance_OnWillRenderObject_m587681222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteMeshInstance_UpdateRenderers_m2089936899(__this, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_0 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f5;
		}
	}
	{
		Renderer_t2627027031 * L_2 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		int32_t L_3 = SpriteMeshInstance_get_sortingLayerID_m1993069740(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Renderer_set_sortingLayerID_m849284518(L_2, L_3, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_4 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		int32_t L_5 = SpriteMeshInstance_get_sortingOrder_m1206238421(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Renderer_set_sortingOrder_m549573253(L_4, L_5, /*hidden argument*/NULL);
		MaterialU5BU5D_t561872642* L_6 = __this->get_m_Materials_4();
		if (!L_6)
		{
			goto IL_0067;
		}
	}
	{
		MaterialU5BU5D_t561872642* L_7 = __this->get_m_Materials_4();
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		Renderer_t2627027031 * L_8 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		MaterialU5BU5D_t561872642* L_9 = __this->get_m_Materials_4();
		NullCheck(L_8);
		Renderer_set_sharedMaterials_m2162241463(L_8, L_9, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0067:
	{
		SpriteMesh_t4133440749 * L_10 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009d;
		}
	}
	{
		SpriteMesh_t4133440749 * L_12 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		MaterialU5BU5D_t561872642* L_13 = SpriteMesh_get_sharedMaterials_m1046039914(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009d;
		}
	}
	{
		Renderer_t2627027031 * L_14 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		SpriteMesh_t4133440749 * L_15 = SpriteMeshInstance_get_spriteMesh_m4268136452(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		MaterialU5BU5D_t561872642* L_16 = SpriteMesh_get_sharedMaterials_m1046039914(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Renderer_set_sharedMaterials_m2162241463(L_14, L_16, /*hidden argument*/NULL);
	}

IL_009d:
	{
		MaterialPropertyBlock_t3213117958 * L_17 = SpriteMeshInstance_get_materialPropertyBlock_m2070813736(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00f5;
		}
	}
	{
		Texture2D_t3840446185 * L_18 = SpriteMeshInstance_get_spriteTexture_m1488351362(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ce;
		}
	}
	{
		MaterialPropertyBlock_t3213117958 * L_20 = SpriteMeshInstance_get_materialPropertyBlock_m2070813736(__this, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_21 = SpriteMeshInstance_get_spriteTexture_m1488351362(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		MaterialPropertyBlock_SetTexture_m3017316857(L_20, _stringLiteral3184621405, L_21, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		MaterialPropertyBlock_t3213117958 * L_22 = SpriteMeshInstance_get_materialPropertyBlock_m2070813736(__this, /*hidden argument*/NULL);
		Color_t2555686324  L_23 = SpriteMeshInstance_get_color_m52558017(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		MaterialPropertyBlock_SetColor_m3590470453(L_22, _stringLiteral3957048425, L_23, /*hidden argument*/NULL);
		Renderer_t2627027031 * L_24 = SpriteMeshInstance_get_cachedRenderer_m2274103141(__this, /*hidden argument*/NULL);
		MaterialPropertyBlock_t3213117958 * L_25 = SpriteMeshInstance_get_materialPropertyBlock_m2070813736(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		Renderer_SetPropertyBlock_m2471545580(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterMotion::.ctor()
extern "C"  void CharacterMotion__ctor_m3278726567 (CharacterMotion_t2600360077 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CharacterMotion::Start()
extern "C"  void CharacterMotion_Start_m1593363961 (CharacterMotion_t2600360077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterMotion_Start_m1593363961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_2(L_0);
		return;
	}
}
// System.Void CharacterMotion::Update()
extern "C"  void CharacterMotion_Update_m1870177380 (CharacterMotion_t2600360077 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CharacterMotion_Update_m1870177380_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_localEulerAngles_m2136926248(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		(&V_1)->set_y_2((180.0f));
		goto IL_004a;
	}

IL_0033:
	{
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		(&V_1)->set_y_2((0.0f));
	}

IL_004a:
	{
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_7 = Quaternion_Euler_m1803555822(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localRotation_m19445462(L_5, L_7, /*hidden argument*/NULL);
		Animator_t434523843 * L_8 = __this->get_animator_2();
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		NullCheck(L_8);
		Animator_SetFloat_m1701463607(L_8, _stringLiteral922537089, L_10, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CoinController::.ctor()
extern "C"  void CoinController__ctor_m943410627 (CoinController_t4170731786 * __this, const RuntimeMethod* method)
{
	{
		__this->set_countdown_6((3.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoinController::Awake()
extern "C"  void CoinController_Awake_m1111392222 (CoinController_t4170731786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoinController_Awake_m1111392222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_coinEffect_2();
		NullCheck(L_0);
		ParticleSystem_t1800779281 * L_1 = GameObject_GetComponent_TisParticleSystem_t1800779281_m2109449193(L_0, /*hidden argument*/GameObject_GetComponent_TisParticleSystem_t1800779281_m2109449193_RuntimeMethod_var);
		__this->set_explosion_3(L_1);
		AudioSource_t3935305588 * L_2 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_source_5(L_2);
		AudioSource_t3935305588 * L_3 = __this->get_source_5();
		AudioClip_t3680889665 * L_4 = __this->get_sound_4();
		NullCheck(L_3);
		AudioSource_set_clip_m31653938(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_5 = __this->get_source_5();
		NullCheck(L_5);
		AudioSource_set_playOnAwake_m1824967994(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoinController::Update()
extern "C"  void CoinController_Update_m3056097701 (CoinController_t4170731786 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void CoinController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void CoinController_OnTriggerEnter2D_m2905873734 (CoinController_t4170731786 * __this, Collider2D_t2806799626 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CoinController_OnTriggerEnter2D_m2905873734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		AudioSource_t3935305588 * L_0 = __this->get_source_5();
		AudioClip_t3680889665 * L_1 = __this->get_sound_4();
		NullCheck(L_0);
		AudioSource_PlayOneShot_m1688286683(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_2, (0.3f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_coinEffect_2();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t2301928331  L_7 = Transform_get_rotation_m3502953881(L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_8 = Object_Instantiate_TisGameObject_t1113636619_m2517112845(NULL /*static, unused*/, L_3, L_5, L_7, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m2517112845_RuntimeMethod_var);
		V_0 = L_8;
		GameObject_t1113636619 * L_9 = V_0;
		Object_Destroy_m3118546832(NULL /*static, unused*/, L_9, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CustomCamera.FollowCamera2D::.ctor()
extern "C"  void FollowCamera2D__ctor_m1049388504 (FollowCamera2D_t4192405139 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowCamera2D__ctor_m1049388504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_dampTime_4((0.28f));
		__this->set_followType_5(1);
		__this->set_cameraCenterX_6((0.5f));
		__this->set_cameraCenterY_7((0.5f));
		__this->set_smoothSpeed_19((0.15f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_21(L_0);
		Vector3_t3722313464  L_1 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_tempVec_24(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomCamera.FollowCamera2D::Start()
extern "C"  void FollowCamera2D_Start_m3962840092 (FollowCamera2D_t4192405139 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowCamera2D_Start_m3962840092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FollowCamera2D_t4192405139 * G_B2_0 = NULL;
	FollowCamera2D_t4192405139 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	FollowCamera2D_t4192405139 * G_B3_1 = NULL;
	FollowCamera2D_t4192405139 * G_B5_0 = NULL;
	FollowCamera2D_t4192405139 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	FollowCamera2D_t4192405139 * G_B6_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Component_GetComponent_TisCamera_t4157153871_m1557787507(__this, /*hidden argument*/Component_GetComponent_TisCamera_t4157153871_m1557787507_RuntimeMethod_var);
		__this->set_camera_20(L_0);
		Camera_t4157153871 * L_1 = __this->get_camera_20();
		NullCheck(L_1);
		float L_2 = Camera_get_orthographicSize_m3903216845(L_1, /*hidden argument*/NULL);
		__this->set_vertExtent_22(L_2);
		float L_3 = __this->get_vertExtent_22();
		int32_t L_4 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_horzExtent_23(((float)((float)((float)il2cpp_codegen_multiply((float)L_3, (float)(((float)((float)L_4)))))/(float)(((float)((float)L_5))))));
		Camera_t4157153871 * L_6 = __this->get_camera_20();
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (0.5f), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_8 = Camera_ViewportToWorldPoint_m4277738824(L_6, L_7, /*hidden argument*/NULL);
		Camera_t4157153871 * L_9 = __this->get_camera_20();
		float L_10 = __this->get_cameraCenterX_6();
		float L_11 = __this->get_cameraCenterY_7();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_10, L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_13 = Camera_ViewportToWorldPoint_m4277738824(L_9, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_14 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_8, L_13, /*hidden argument*/NULL);
		__this->set_deltaCenterVec_31(L_14);
		int32_t L_15 = __this->get_followType_5();
		__this->set_isFollowHorizontal_27((bool)((((int32_t)((int32_t)((int32_t)L_15&(int32_t)1))) == ((int32_t)1))? 1 : 0));
		int32_t L_16 = __this->get_followType_5();
		__this->set_isFollowVertical_28((bool)((((int32_t)((int32_t)((int32_t)L_16&(int32_t)2))) == ((int32_t)2))? 1 : 0));
		int32_t L_17 = __this->get_boundType_8();
		__this->set_isBoundHorizontal_25((bool)((((int32_t)((int32_t)((int32_t)L_17&(int32_t)1))) == ((int32_t)1))? 1 : 0));
		int32_t L_18 = __this->get_boundType_8();
		__this->set_isBoundVertical_26((bool)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)2))) == ((int32_t)2))? 1 : 0));
		int32_t L_19 = __this->get_deadZoneType_13();
		G_B1_0 = __this;
		if ((!(((uint32_t)((int32_t)((int32_t)L_19&(int32_t)1))) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			goto IL_00dd;
		}
	}
	{
		bool L_20 = __this->get_isFollowHorizontal_27();
		G_B3_0 = ((int32_t)(L_20));
		G_B3_1 = G_B1_0;
		goto IL_00de;
	}

IL_00dd:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_00de:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_isDeadZoneHorizontal_29((bool)G_B3_0);
		int32_t L_21 = __this->get_deadZoneType_13();
		G_B4_0 = __this;
		if ((!(((uint32_t)((int32_t)((int32_t)L_21&(int32_t)2))) == ((uint32_t)2))))
		{
			G_B5_0 = __this;
			goto IL_00fa;
		}
	}
	{
		bool L_22 = __this->get_isFollowVertical_28();
		G_B6_0 = ((int32_t)(L_22));
		G_B6_1 = G_B4_0;
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_00fb:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_isDeadZoneVertical_30((bool)G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_tempVec_24(L_23);
		return;
	}
}
// System.Void CustomCamera.FollowCamera2D::LateUpdate()
extern "C"  void FollowCamera2D_LateUpdate_m1034451288 (FollowCamera2D_t4192405139 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FollowCamera2D_LateUpdate_m1034451288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t3722313464  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3722313464  V_15;
	memset(&V_15, 0, sizeof(V_15));
	int32_t G_B6_0 = 0;
	{
		Camera_t4157153871 * L_0 = __this->get_camera_20();
		Transform_t3600365921 * L_1 = __this->get_diamond_3();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_3 = Camera_WorldToViewportPoint_m1538355680(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_z_3();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		float L_5 = (&V_0)->get_x_1();
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		float L_6 = (&V_0)->get_x_1();
		if ((!(((float)L_6) < ((float)(1.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		float L_7 = (&V_0)->get_y_2();
		if ((!(((float)L_7) > ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}
	{
		float L_8 = (&V_0)->get_y_2();
		G_B6_0 = ((((float)L_8) < ((float)(1.0f)))? 1 : 0);
		goto IL_006c;
	}

IL_006b:
	{
		G_B6_0 = 0;
	}

IL_006c:
	{
		V_1 = (bool)G_B6_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00dd;
		}
	}
	{
		__this->set_find_32((bool)1);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = __this->get_diamond_3();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = (&V_3)->get_x_1();
		Transform_t3600365921 * L_15 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_position_m36019626(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		float L_17 = (&V_4)->get_y_2();
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		float L_20 = (&V_5)->get_z_3();
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), L_14, L_17, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_smoothSpeed_19();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_23 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_11, L_21, L_22, /*hidden argument*/NULL);
		V_2 = L_23;
		Transform_t3600365921 * L_24 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_25 = V_2;
		NullCheck(L_24);
		Transform_set_position_m3387557959(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		Transform_t3600365921 * L_26 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_27 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_03c0;
		}
	}
	{
		bool L_28 = __this->get_find_32();
		if (L_28)
		{
			goto IL_03c0;
		}
	}
	{
		Transform_t3600365921 * L_29 = __this->get_target_2();
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		Camera_t4157153871 * L_31 = __this->get_camera_20();
		float L_32 = __this->get_cameraCenterX_6();
		float L_33 = __this->get_cameraCenterY_7();
		Vector3_t3722313464  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m3353183577((&L_34), L_32, L_33, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t3722313464  L_35 = Camera_ViewportToWorldPoint_m4277738824(L_31, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_36 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_30, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		bool L_37 = __this->get_isFollowHorizontal_27();
		if (L_37)
		{
			goto IL_0142;
		}
	}
	{
		(&V_6)->set_x_1((0.0f));
	}

IL_0142:
	{
		bool L_38 = __this->get_isFollowVertical_28();
		if (L_38)
		{
			goto IL_0159;
		}
	}
	{
		(&V_6)->set_y_2((0.0f));
	}

IL_0159:
	{
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Transform_get_position_m36019626(L_39, /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		V_7 = L_42;
		bool L_43 = __this->get_hardDeadZone_14();
		if (L_43)
		{
			goto IL_01a1;
		}
	}
	{
		Transform_t3600365921 * L_44 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t3722313464  L_45 = Transform_get_position_m36019626(L_44, /*hidden argument*/NULL);
		Vector3_t3722313464  L_46 = V_7;
		Vector3_t3722313464 * L_47 = __this->get_address_of_velocity_21();
		float L_48 = __this->get_dampTime_4();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_49 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		__this->set_tempVec_24(L_49);
		goto IL_01e8;
	}

IL_01a1:
	{
		Vector3_t3722313464 * L_50 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_51 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t3722313464  L_52 = Transform_get_position_m36019626(L_51, /*hidden argument*/NULL);
		V_8 = L_52;
		float L_53 = (&V_8)->get_x_1();
		Transform_t3600365921 * L_54 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t3722313464  L_55 = Transform_get_position_m36019626(L_54, /*hidden argument*/NULL);
		V_9 = L_55;
		float L_56 = (&V_9)->get_y_2();
		Transform_t3600365921 * L_57 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t3722313464  L_58 = Transform_get_position_m36019626(L_57, /*hidden argument*/NULL);
		V_10 = L_58;
		float L_59 = (&V_10)->get_z_3();
		Vector3_Set_m1737058353(L_50, L_53, L_56, L_59, /*hidden argument*/NULL);
	}

IL_01e8:
	{
		bool L_60 = __this->get_isDeadZoneHorizontal_29();
		if (!L_60)
		{
			goto IL_027c;
		}
	}
	{
		float L_61 = (&V_6)->get_x_1();
		float L_62 = __this->get_rightDeadBound_16();
		if ((!(((float)L_61) > ((float)L_62))))
		{
			goto IL_0237;
		}
	}
	{
		Vector3_t3722313464 * L_63 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_64 = __this->get_target_2();
		NullCheck(L_64);
		Vector3_t3722313464  L_65 = Transform_get_position_m36019626(L_64, /*hidden argument*/NULL);
		V_11 = L_65;
		float L_66 = (&V_11)->get_x_1();
		float L_67 = __this->get_rightDeadBound_16();
		Vector3_t3722313464 * L_68 = __this->get_address_of_deltaCenterVec_31();
		float L_69 = L_68->get_x_1();
		L_63->set_x_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_66, (float)L_67)), (float)L_69)));
	}

IL_0237:
	{
		float L_70 = (&V_6)->get_x_1();
		float L_71 = __this->get_leftDeadBound_15();
		if ((!(((float)L_70) < ((float)((-L_71))))))
		{
			goto IL_027c;
		}
	}
	{
		Vector3_t3722313464 * L_72 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_73 = __this->get_target_2();
		NullCheck(L_73);
		Vector3_t3722313464  L_74 = Transform_get_position_m36019626(L_73, /*hidden argument*/NULL);
		V_12 = L_74;
		float L_75 = (&V_12)->get_x_1();
		float L_76 = __this->get_leftDeadBound_15();
		Vector3_t3722313464 * L_77 = __this->get_address_of_deltaCenterVec_31();
		float L_78 = L_77->get_x_1();
		L_72->set_x_1(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_75, (float)L_76)), (float)L_78)));
	}

IL_027c:
	{
		bool L_79 = __this->get_isDeadZoneVertical_30();
		if (!L_79)
		{
			goto IL_0310;
		}
	}
	{
		float L_80 = (&V_6)->get_y_2();
		float L_81 = __this->get_upperDeadBound_17();
		if ((!(((float)L_80) > ((float)L_81))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector3_t3722313464 * L_82 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_83 = __this->get_target_2();
		NullCheck(L_83);
		Vector3_t3722313464  L_84 = Transform_get_position_m36019626(L_83, /*hidden argument*/NULL);
		V_13 = L_84;
		float L_85 = (&V_13)->get_y_2();
		float L_86 = __this->get_upperDeadBound_17();
		Vector3_t3722313464 * L_87 = __this->get_address_of_deltaCenterVec_31();
		float L_88 = L_87->get_y_2();
		L_82->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_85, (float)L_86)), (float)L_88)));
	}

IL_02cb:
	{
		float L_89 = (&V_6)->get_y_2();
		float L_90 = __this->get_lowerDeadBound_18();
		if ((!(((float)L_89) < ((float)((-L_90))))))
		{
			goto IL_0310;
		}
	}
	{
		Vector3_t3722313464 * L_91 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_92 = __this->get_target_2();
		NullCheck(L_92);
		Vector3_t3722313464  L_93 = Transform_get_position_m36019626(L_92, /*hidden argument*/NULL);
		V_14 = L_93;
		float L_94 = (&V_14)->get_y_2();
		float L_95 = __this->get_lowerDeadBound_18();
		Vector3_t3722313464 * L_96 = __this->get_address_of_deltaCenterVec_31();
		float L_97 = L_96->get_y_2();
		L_91->set_y_2(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_94, (float)L_95)), (float)L_97)));
	}

IL_0310:
	{
		bool L_98 = __this->get_isBoundHorizontal_25();
		if (!L_98)
		{
			goto IL_0350;
		}
	}
	{
		Vector3_t3722313464 * L_99 = __this->get_address_of_tempVec_24();
		Vector3_t3722313464 * L_100 = __this->get_address_of_tempVec_24();
		float L_101 = L_100->get_x_1();
		float L_102 = __this->get_leftBound_9();
		float L_103 = __this->get_horzExtent_23();
		float L_104 = __this->get_rightBound_10();
		float L_105 = __this->get_horzExtent_23();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_106 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_101, ((float)il2cpp_codegen_add((float)L_102, (float)L_103)), ((float)il2cpp_codegen_subtract((float)L_104, (float)L_105)), /*hidden argument*/NULL);
		L_99->set_x_1(L_106);
	}

IL_0350:
	{
		bool L_107 = __this->get_isBoundVertical_26();
		if (!L_107)
		{
			goto IL_0390;
		}
	}
	{
		Vector3_t3722313464 * L_108 = __this->get_address_of_tempVec_24();
		Vector3_t3722313464 * L_109 = __this->get_address_of_tempVec_24();
		float L_110 = L_109->get_y_2();
		float L_111 = __this->get_lowerBound_12();
		float L_112 = __this->get_vertExtent_22();
		float L_113 = __this->get_upperBound_11();
		float L_114 = __this->get_vertExtent_22();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_115 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_110, ((float)il2cpp_codegen_add((float)L_111, (float)L_112)), ((float)il2cpp_codegen_subtract((float)L_113, (float)L_114)), /*hidden argument*/NULL);
		L_108->set_y_2(L_115);
	}

IL_0390:
	{
		Vector3_t3722313464 * L_116 = __this->get_address_of_tempVec_24();
		Transform_t3600365921 * L_117 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_117);
		Vector3_t3722313464  L_118 = Transform_get_position_m36019626(L_117, /*hidden argument*/NULL);
		V_15 = L_118;
		float L_119 = (&V_15)->get_z_3();
		L_116->set_z_3(L_119);
		Transform_t3600365921 * L_120 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_121 = __this->get_tempVec_24();
		NullCheck(L_120);
		Transform_set_position_m3387557959(L_120, L_121, /*hidden argument*/NULL);
	}

IL_03c0:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Follow::.ctor()
extern "C"  void Follow__ctor_m3715768376 (Follow_t1013500665 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Follow::LateUpdate()
extern "C"  void Follow_LateUpdate_m215595299 (Follow_t1013500665 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Follow_LateUpdate_m215595299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = __this->get_target_2();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_offset_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m3387557959(L_2, L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Personagem::.ctor()
extern "C"  void Personagem__ctor_m1236315038 (Personagem_t2484933062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem__ctor_m1236315038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_MaxSpeed_2((10.0f));
		__this->set_m_JumpForce_3((400.0f));
		__this->set_m_FacingRight_11((bool)1);
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_faceRight_16(L_0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_faceLeft_17(L_1);
		__this->set_ponto_19(1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_get_one_m738793577(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_touchOrigin_21(L_2);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Personagem::Awake()
extern "C"  void Personagem_Awake_m1233854383 (Personagem_t2484933062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_Awake_m1233854383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_m_Anim_9(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_10(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_Find_m1729760951(L_2, _stringLiteral1396832867, /*hidden argument*/NULL);
		__this->set_m_GroundCheck_6(L_3);
		return;
	}
}
// System.Void Personagem::FixedUpdate()
extern "C"  void Personagem_FixedUpdate_m2796799114 (Personagem_t2484933062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_FixedUpdate_m2796799114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t1693969295* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = __this->get_canPlay_15();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_1 = CrossPlatformInputManager_GetButtonDown_m1689635996(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1169671306, /*hidden argument*/NULL);
	}

IL_0024:
	{
		__this->set_m_Grounded_8((bool)0);
		Transform_t3600365921 * L_2 = __this->get_m_GroundCheck_6();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_5 = __this->get_m_WhatIsGround_5();
		int32_t L_6 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t1693969295* L_7 = Physics2D_OverlapCircleAll_m638049410(NULL /*static, unused*/, L_4, (0.2f), L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_007b;
	}

IL_0058:
	{
		Collider2DU5BU5D_t1693969295* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Collider2D_t2806799626 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		__this->set_m_Grounded_8((bool)1);
	}

IL_0077:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_16 = V_1;
		Collider2DU5BU5D_t1693969295* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		Animator_t434523843 * L_18 = __this->get_m_Anim_9();
		bool L_19 = __this->get_m_Grounded_8();
		NullCheck(L_18);
		Animator_SetBool_m234840832(L_18, _stringLiteral3128803744, L_19, /*hidden argument*/NULL);
		Animator_t434523843 * L_20 = __this->get_m_Anim_9();
		Rigidbody2D_t939494601 * L_21 = __this->get_m_Rigidbody2D_10();
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = Rigidbody2D_get_velocity_m366589732(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		float L_23 = (&V_2)->get_y_1();
		NullCheck(L_20);
		Animator_SetFloat_m1701463607(L_20, _stringLiteral2154097237, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Personagem::Move(System.Boolean)
extern "C"  void Personagem_Move_m1933571148 (Personagem_t2484933062 * __this, bool ____jump0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_Move_m1933571148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_stop_14();
		if (L_0)
		{
			goto IL_00c0;
		}
	}
	{
		bool L_1 = __this->get_m_Grounded_8();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->get_m_AirControl_4();
		if (!L_2)
		{
			goto IL_0067;
		}
	}

IL_0021:
	{
		Animator_t434523843 * L_3 = __this->get_m_Anim_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_4 = Mathf_Abs_m2460432655(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		NullCheck(L_3);
		Animator_SetFloat_m1701463607(L_3, _stringLiteral3556802456, (((float)((float)L_4))), /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_5 = __this->get_m_Rigidbody2D_10();
		float L_6 = __this->get_m_MaxSpeed_2();
		Rigidbody2D_t939494601 * L_7 = __this->get_m_Rigidbody2D_10();
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = Rigidbody2D_get_velocity_m366589732(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_y_1();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), ((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_6)), L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m2898400508(L_5, L_10, /*hidden argument*/NULL);
	}

IL_0067:
	{
		bool L_11 = __this->get_m_Grounded_8();
		if (!L_11)
		{
			goto IL_00c0;
		}
	}
	{
		bool L_12 = ____jump0;
		if (!L_12)
		{
			goto IL_00c0;
		}
	}
	{
		Animator_t434523843 * L_13 = __this->get_m_Anim_9();
		NullCheck(L_13);
		bool L_14 = Animator_GetBool_m2865822416(L_13, _stringLiteral3128803744, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c0;
		}
	}
	{
		__this->set_m_Grounded_8((bool)0);
		Animator_t434523843 * L_15 = __this->get_m_Anim_9();
		NullCheck(L_15);
		Animator_SetBool_m234840832(L_15, _stringLiteral3128803744, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_16 = __this->get_m_Rigidbody2D_10();
		float L_17 = __this->get_m_JumpForce_3();
		Vector2_t2156229523  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector2__ctor_m3970636864((&L_18), (0.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Rigidbody2D_AddForce_m1113499586(L_16, L_18, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Personagem::Flip()
extern "C"  void Personagem_Flip_m4136928815 (Personagem_t2484933062 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_FacingRight_11();
		__this->set_m_FacingRight_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		bool L_1 = __this->get_m_FacingRight_11();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_v_faceRight_16();
		NullCheck(L_2);
		Transform_set_eulerAngles_m135219616(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0030:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_v_faceLeft_17();
		NullCheck(L_4);
		Transform_set_eulerAngles_m135219616(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void Personagem::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Personagem_OnTriggerEnter2D_m4159617493 (Personagem_t2484933062 * __this, Collider2D_t2806799626 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_OnTriggerEnter2D_m4159617493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral1222920746, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = __this->get_scoreCount_20();
		int32_t L_5 = __this->get_ponto_19();
		__this->set_scoreCount_20(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		Text_t1901882714 * L_6 = __this->get_scoreText_18();
		int32_t L_7 = __this->get_scoreCount_20();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1514128375, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
	}

IL_004d:
	{
		Collider2D_t2806799626 * L_11 = ___col0;
		NullCheck(L_11);
		GameObject_t1113636619 * L_12 = Component_get_gameObject_m442555142(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = GameObject_get_tag_m3951609671(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral4278381006, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		__this->set_stop_14((bool)1);
		Animator_t434523843 * L_15 = __this->get_m_Anim_9();
		NullCheck(L_15);
		Animator_SetBool_m234840832(L_15, _stringLiteral808263398, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_16 = Personagem_continueGame_m305075124(__this, (4.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_16, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void Personagem::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void Personagem_OnCollisionEnter2D_m2089781811 (Personagem_t2484933062 * __this, Collision2D_t2842956331 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_OnCollisionEnter2D_m2089781811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t2842956331 * L_0 = ___collision0;
		NullCheck(L_0);
		Collider2D_t2806799626 * L_1 = Collision2D_get_collider_m4087612183(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Component_get_tag_m2716693327(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2368881920, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		__this->set_m_MaxSpeed_2((0.0f));
		RuntimeObject* L_4 = Personagem_dyingAnimation_m2095675355(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_5 = __this->get_m_Rigidbody2D_10();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), (400.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_7 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_AddForce_m1113499586(L_5, L_7, /*hidden argument*/NULL);
		Animator_t434523843 * L_8 = __this->get_m_Anim_9();
		NullCheck(L_8);
		Animator_SetBool_m234840832(L_8, _stringLiteral1208260867, (bool)1, /*hidden argument*/NULL);
		BoxCollider2D_t3581341831 * L_9 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		CircleCollider2D_t662546754 * L_10 = Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992(__this, /*hidden argument*/Component_GetComponent_TisCircleCollider2D_t662546754_m1597288992_RuntimeMethod_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_007d:
	{
		return;
	}
}
// System.Collections.IEnumerator Personagem::dyingAnimation()
extern "C"  RuntimeObject* Personagem_dyingAnimation_m2095675355 (Personagem_t2484933062 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_dyingAnimation_m2095675355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CdyingAnimationU3Ec__Iterator0_t276251559 * V_0 = NULL;
	{
		U3CdyingAnimationU3Ec__Iterator0_t276251559 * L_0 = (U3CdyingAnimationU3Ec__Iterator0_t276251559 *)il2cpp_codegen_object_new(U3CdyingAnimationU3Ec__Iterator0_t276251559_il2cpp_TypeInfo_var);
		U3CdyingAnimationU3Ec__Iterator0__ctor_m1168986108(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CdyingAnimationU3Ec__Iterator0_t276251559 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CdyingAnimationU3Ec__Iterator0_t276251559 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator Personagem::continueGame(System.Single)
extern "C"  RuntimeObject* Personagem_continueGame_m305075124 (Personagem_t2484933062 * __this, float ___wait0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Personagem_continueGame_m305075124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CcontinueGameU3Ec__Iterator1_t1070021004 * V_0 = NULL;
	{
		U3CcontinueGameU3Ec__Iterator1_t1070021004 * L_0 = (U3CcontinueGameU3Ec__Iterator1_t1070021004 *)il2cpp_codegen_object_new(U3CcontinueGameU3Ec__Iterator1_t1070021004_il2cpp_TypeInfo_var);
		U3CcontinueGameU3Ec__Iterator1__ctor_m2989830071(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CcontinueGameU3Ec__Iterator1_t1070021004 * L_1 = V_0;
		float L_2 = ___wait0;
		NullCheck(L_1);
		L_1->set_wait_0(L_2);
		U3CcontinueGameU3Ec__Iterator1_t1070021004 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CcontinueGameU3Ec__Iterator1_t1070021004 * L_4 = V_0;
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Personagem/<continueGame>c__Iterator1::.ctor()
extern "C"  void U3CcontinueGameU3Ec__Iterator1__ctor_m2989830071 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Personagem/<continueGame>c__Iterator1::MoveNext()
extern "C"  bool U3CcontinueGameU3Ec__Iterator1_MoveNext_m1740114933 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcontinueGameU3Ec__Iterator1_MoveNext_m1740114933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0021:
	{
		float L_2 = __this->get_wait_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_005b;
	}

IL_0046:
	{
		Personagem_t2484933062 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		L_5->set_canPlay_15((bool)1);
		__this->set_U24PC_4((-1));
	}

IL_0059:
	{
		return (bool)0;
	}

IL_005b:
	{
		return (bool)1;
	}
}
// System.Object Personagem/<continueGame>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CcontinueGameU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4246711716 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object Personagem/<continueGame>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CcontinueGameU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1492971007 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void Personagem/<continueGame>c__Iterator1::Dispose()
extern "C"  void U3CcontinueGameU3Ec__Iterator1_Dispose_m728103637 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void Personagem/<continueGame>c__Iterator1::Reset()
extern "C"  void U3CcontinueGameU3Ec__Iterator1_Reset_m3663176255 (U3CcontinueGameU3Ec__Iterator1_t1070021004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CcontinueGameU3Ec__Iterator1_Reset_m3663176255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Personagem/<dyingAnimation>c__Iterator0::.ctor()
extern "C"  void U3CdyingAnimationU3Ec__Iterator0__ctor_m1168986108 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Personagem/<dyingAnimation>c__Iterator0::MoveNext()
extern "C"  bool U3CdyingAnimationU3Ec__Iterator0_MoveNext_m4174947813 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdyingAnimationU3Ec__Iterator0_MoveNext_m4174947813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_00d0;
			}
		}
	}
	{
		goto IL_00d7;
	}

IL_0025:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0044;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0044:
	{
		goto IL_00d9;
	}

IL_0049:
	{
		Personagem_t2484933062 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = L_4->get_gameOver_12();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		Personagem_t2484933062 * L_6 = __this->get_U24this_0();
		Personagem_t2484933062 * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = L_7->get_gameOver_12();
		NullCheck(L_8);
		Animator_t434523843 * L_9 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_8, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_animGameOver_13(L_9);
		Personagem_t2484933062 * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		Animator_t434523843 * L_11 = L_10->get_animGameOver_13();
		NullCheck(L_11);
		Animator_SetBool_m234840832(L_11, _stringLiteral1350712178, (bool)1, /*hidden argument*/NULL);
		Personagem_t2484933062 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		Rigidbody2D_t939494601 * L_13 = L_12->get_m_Rigidbody2D_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Personagem_t2484933062 * L_14 = __this->get_U24this_0();
		Personagem_t2484933062 * L_15 = __this->get_U24this_0();
		NullCheck(L_15);
		RuntimeObject* L_16 = Personagem_continueGame_m305075124(L_15, (3.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Coroutine_t3829159415 * L_17 = MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
		__this->set_U24current_1(L_17);
		bool L_18 = __this->get_U24disposing_2();
		if (L_18)
		{
			goto IL_00cb;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00cb:
	{
		goto IL_00d9;
	}

IL_00d0:
	{
		__this->set_U24PC_3((-1));
	}

IL_00d7:
	{
		return (bool)0;
	}

IL_00d9:
	{
		return (bool)1;
	}
}
// System.Object Personagem/<dyingAnimation>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CdyingAnimationU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m885604425 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Personagem/<dyingAnimation>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CdyingAnimationU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m681567712 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Personagem/<dyingAnimation>c__Iterator0::Dispose()
extern "C"  void U3CdyingAnimationU3Ec__Iterator0_Dispose_m3652710104 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Personagem/<dyingAnimation>c__Iterator0::Reset()
extern "C"  void U3CdyingAnimationU3Ec__Iterator0_Reset_m2503698900 (U3CdyingAnimationU3Ec__Iterator0_t276251559 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CdyingAnimationU3Ec__Iterator0_Reset_m2503698900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInput::.ctor()
extern "C"  void PlayerInput__ctor_m3968448643 (PlayerInput_t2642816418 * __this, const RuntimeMethod* method)
{
	{
		__this->set_wait_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerInput::Awake()
extern "C"  void PlayerInput_Awake_m3282777395 (PlayerInput_t2642816418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_Awake_m3282777395_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Personagem_t2484933062 * L_0 = Component_GetComponent_TisPersonagem_t2484933062_m3028378119(__this, /*hidden argument*/Component_GetComponent_TisPersonagem_t2484933062_m3028378119_RuntimeMethod_var);
		__this->set_c_movement_2(L_0);
		return;
	}
}
// System.Void PlayerInput::Run()
extern "C"  void PlayerInput_Run_m1967769897 (PlayerInput_t2642816418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_Run_m1967769897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_wait_4((bool)0);
		GameObject_t1113636619 * L_0 = __this->get_button_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerInput::Update()
extern "C"  void PlayerInput_Update_m3783425746 (PlayerInput_t2642816418 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerInput_Update_m3783425746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_wait_4();
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = __this->get_isJumping_3();
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t191731427_il2cpp_TypeInfo_var);
		bool L_2 = CrossPlatformInputManager_GetButtonDown_m1689635996(NULL /*static, unused*/, _stringLiteral3228161487, /*hidden argument*/NULL);
		__this->set_isJumping_3(L_2);
	}

IL_0026:
	{
		return;
	}
}
// System.Void PlayerInput::FixedUpdate()
extern "C"  void PlayerInput_FixedUpdate_m4033840946 (PlayerInput_t2642816418 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_wait_4();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Personagem_t2484933062 * L_1 = __this->get_c_movement_2();
		bool L_2 = __this->get_isJumping_3();
		NullCheck(L_1);
		Personagem_Move_m1933571148(L_1, L_2, /*hidden argument*/NULL);
		__this->set_isJumping_3((bool)0);
	}

IL_0023:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m3994561284 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_JumpForce_3((400.0f));
		__this->set_m_FacingRight_11((bool)1);
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_faceRight_12(L_0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_v_faceLeft_13(L_1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Awake()
extern "C"  void PlayerMovement_Awake_m4232364429 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Awake_m4232364429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_m_Anim_9(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m2731142064(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m2731142064_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_10(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Transform_Find_m1729760951(L_2, _stringLiteral1396832867, /*hidden argument*/NULL);
		__this->set_m_GroundCheck_6(L_3);
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
extern "C"  void PlayerMovement_FixedUpdate_m2788581829 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_FixedUpdate_m2788581829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider2DU5BU5D_t1693969295* V_0 = NULL;
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		__this->set_m_Grounded_8((bool)0);
		Transform_t3600365921 * L_0 = __this->get_m_GroundCheck_6();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		LayerMask_t3493934918  L_3 = __this->get_m_WhatIsGround_5();
		int32_t L_4 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t1693969295* L_5 = Physics2D_OverlapCircleAll_m638049410(NULL /*static, unused*/, L_2, (0.2f), L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		V_1 = 0;
		goto IL_0057;
	}

IL_0034:
	{
		Collider2DU5BU5D_t1693969295* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Collider2D_t2806799626 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_m_Grounded_8((bool)1);
	}

IL_0053:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_14 = V_1;
		Collider2DU5BU5D_t1693969295* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		Animator_t434523843 * L_16 = __this->get_m_Anim_9();
		bool L_17 = __this->get_m_Grounded_8();
		NullCheck(L_16);
		Animator_SetBool_m234840832(L_16, _stringLiteral3128803744, L_17, /*hidden argument*/NULL);
		Animator_t434523843 * L_18 = __this->get_m_Anim_9();
		Rigidbody2D_t939494601 * L_19 = __this->get_m_Rigidbody2D_10();
		NullCheck(L_19);
		Vector2_t2156229523  L_20 = Rigidbody2D_get_velocity_m366589732(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_1();
		NullCheck(L_18);
		Animator_SetFloat_m1701463607(L_18, _stringLiteral2154097237, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Move(System.Single,System.Boolean)
extern "C"  void PlayerMovement_Move_m3300450923 (PlayerMovement_t2731566919 * __this, float ____move0, bool ____jump1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Move_m3300450923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_m_Grounded_8();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_m_AirControl_4();
		if (!L_1)
		{
			goto IL_0094;
		}
	}

IL_0016:
	{
		Animator_t434523843 * L_2 = __this->get_m_Anim_9();
		float L_3 = ____move0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = fabsf(L_3);
		NullCheck(L_2);
		Animator_SetFloat_m1701463607(L_2, _stringLiteral3556802456, L_4, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_5 = __this->get_m_Rigidbody2D_10();
		float L_6 = ____move0;
		float L_7 = __this->get_m_MaxSpeed_2();
		Rigidbody2D_t939494601 * L_8 = __this->get_m_Rigidbody2D_10();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = Rigidbody2D_get_velocity_m366589732(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_y_1();
		Vector2_t2156229523  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3970636864((&L_11), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m2898400508(L_5, L_11, /*hidden argument*/NULL);
		float L_12 = ____move0;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		bool L_13 = __this->get_m_FacingRight_11();
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		PlayerMovement_Flip_m550244153(__this, /*hidden argument*/NULL);
		goto IL_0094;
	}

IL_0078:
	{
		float L_14 = ____move0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		bool L_15 = __this->get_m_FacingRight_11();
		if (!L_15)
		{
			goto IL_0094;
		}
	}
	{
		PlayerMovement_Flip_m550244153(__this, /*hidden argument*/NULL);
	}

IL_0094:
	{
		bool L_16 = __this->get_m_Grounded_8();
		if (!L_16)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_17 = ____jump1;
		if (!L_17)
		{
			goto IL_00ed;
		}
	}
	{
		Animator_t434523843 * L_18 = __this->get_m_Anim_9();
		NullCheck(L_18);
		bool L_19 = Animator_GetBool_m2865822416(L_18, _stringLiteral3128803744, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ed;
		}
	}
	{
		__this->set_m_Grounded_8((bool)0);
		Animator_t434523843 * L_20 = __this->get_m_Anim_9();
		NullCheck(L_20);
		Animator_SetBool_m234840832(L_20, _stringLiteral3128803744, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t939494601 * L_21 = __this->get_m_Rigidbody2D_10();
		float L_22 = __this->get_m_JumpForce_3();
		Vector2_t2156229523  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector2__ctor_m3970636864((&L_23), (0.0f), L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Rigidbody2D_AddForce_m1113499586(L_21, L_23, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		return;
	}
}
// System.Void PlayerMovement::Flip()
extern "C"  void PlayerMovement_Flip_m550244153 (PlayerMovement_t2731566919 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_FacingRight_11();
		__this->set_m_FacingRight_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		bool L_1 = __this->get_m_FacingRight_11();
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = __this->get_v_faceRight_12();
		NullCheck(L_2);
		Transform_set_eulerAngles_m135219616(L_2, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0030:
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_v_faceLeft_13();
		NullCheck(L_4);
		Transform_set_eulerAngles_m135219616(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneController::.ctor()
extern "C"  void SceneController__ctor_m1529108788 (SceneController_t2849316448 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneController::LoadScene(System.String)
extern "C"  void SceneController_LoadScene_m1384659874 (SceneController_t2849316448 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScrollingBackground::.ctor()
extern "C"  void ScrollingBackground__ctor_m2211413541 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method)
{
	{
		__this->set_viewZone_5((10.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollingBackground::Start()
extern "C"  void ScrollingBackground_Start_m2940145547 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_Start_m2940145547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		__this->set_cameraTransform_3(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Transform_get_childCount_m3145433196(L_2, /*hidden argument*/NULL);
		__this->set_layers_4(((TransformU5BU5D_t807237628*)SZArrayNew(TransformU5BU5D_t807237628_il2cpp_TypeInfo_var, (uint32_t)L_3)));
		V_0 = 0;
		goto IL_0045;
	}

IL_002d:
	{
		TransformU5BU5D_t807237628* L_4 = __this->get_layers_4();
		int32_t L_5 = V_0;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_t3600365921 * L_8 = Transform_GetChild_m1092972975(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Transform_t3600365921 *)L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0045:
	{
		int32_t L_10 = V_0;
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = Transform_get_childCount_m3145433196(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_002d;
		}
	}
	{
		__this->set_leftIndex_6(0);
		TransformU5BU5D_t807237628* L_13 = __this->get_layers_4();
		NullCheck(L_13);
		__this->set_rightIndex_7(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)1)));
		return;
	}
}
// System.Void ScrollingBackground::update()
extern "C"  void ScrollingBackground_update_m3829282191 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_update_m3829282191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ScrollingBackground_ScrollLeft_m1688182640(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ScrollingBackground_ScrollRight_m2373045031(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void ScrollingBackground::ScrollLeft()
extern "C"  void ScrollingBackground_ScrollLeft_m1688182640 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_ScrollLeft_m1688182640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_rightIndex_7();
		V_0 = L_0;
		TransformU5BU5D_t807237628* L_1 = __this->get_layers_4();
		int32_t L_2 = __this->get_rightIndex_7();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_t3600365921 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_6 = __this->get_layers_4();
		int32_t L_7 = __this->get_leftIndex_6();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_t3600365921 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = __this->get_backgroundSize_2();
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, ((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_rightIndex_7();
		__this->set_leftIndex_6(L_14);
		int32_t L_15 = __this->get_rightIndex_7();
		__this->set_rightIndex_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = __this->get_rightIndex_7();
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		TransformU5BU5D_t807237628* L_17 = __this->get_layers_4();
		NullCheck(L_17);
		__this->set_rightIndex_7(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))), (int32_t)1)));
	}

IL_007a:
	{
		return;
	}
}
// System.Void ScrollingBackground::ScrollRight()
extern "C"  void ScrollingBackground_ScrollRight_m2373045031 (ScrollingBackground_t4272380809 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingBackground_ScrollRight_m2373045031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_leftIndex_6();
		V_0 = L_0;
		TransformU5BU5D_t807237628* L_1 = __this->get_layers_4();
		int32_t L_2 = __this->get_leftIndex_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_t3600365921 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		TransformU5BU5D_t807237628* L_6 = __this->get_layers_4();
		int32_t L_7 = __this->get_rightIndex_7();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_t3600365921 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = __this->get_backgroundSize_2();
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_5, ((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_m3387557959(L_4, L_13, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_leftIndex_6();
		__this->set_rightIndex_7(L_14);
		int32_t L_15 = __this->get_leftIndex_6();
		__this->set_leftIndex_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		int32_t L_16 = __this->get_leftIndex_6();
		TransformU5BU5D_t807237628* L_17 = __this->get_layers_4();
		NullCheck(L_17);
		if ((!(((uint32_t)L_16) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length))))))))
		{
			goto IL_0078;
		}
	}
	{
		__this->set_leftIndex_6(0);
	}

IL_0078:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShipTrigger::.ctor()
extern "C"  void ShipTrigger__ctor_m4251130157 (ShipTrigger_t3587195811 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShipTrigger::Awake()
extern "C"  void ShipTrigger_Awake_m3156122597 (ShipTrigger_t3587195811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShipTrigger_Awake_m3156122597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_ship_2();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Animator_t434523843 * L_2 = GameObject_GetComponent_TisAnimator_t434523843_m440019408(L_1, /*hidden argument*/GameObject_GetComponent_TisAnimator_t434523843_m440019408_RuntimeMethod_var);
		__this->set_anim_3(L_2);
		return;
	}
}
// System.Void ShipTrigger::LateUpdate()
extern "C"  void ShipTrigger_LateUpdate_m2905475744 (ShipTrigger_t3587195811 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ShipTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void ShipTrigger_OnTriggerEnter2D_m4028286140 (ShipTrigger_t3587195811 * __this, Collider2D_t2806799626 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShipTrigger_OnTriggerEnter2D_m4028286140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m3951609671(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_2, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Animator_t434523843 * L_4 = __this->get_anim_3();
		NullCheck(L_4);
		Animator_SetBool_m234840832(L_4, _stringLiteral2366488617, (bool)1, /*hidden argument*/NULL);
	}

IL_002b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkinnedMeshCombiner::.ctor()
extern "C"  void SkinnedMeshCombiner__ctor_m2016806385 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// Anima2D.SpriteMeshInstance[] SkinnedMeshCombiner::get_spriteMeshInstances()
extern "C"  SpriteMeshInstanceU5BU5D_t371572014* SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	{
		SpriteMeshInstanceU5BU5D_t371572014* L_0 = __this->get_m_SpriteMeshInstances_2();
		return L_0;
	}
}
// UnityEngine.MaterialPropertyBlock SkinnedMeshCombiner::get_materialPropertyBlock()
extern "C"  MaterialPropertyBlock_t3213117958 * SkinnedMeshCombiner_get_materialPropertyBlock_m225435828 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkinnedMeshCombiner_get_materialPropertyBlock_m225435828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MaterialPropertyBlock_t3213117958 * L_0 = __this->get_m_MaterialPropertyBlock_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		MaterialPropertyBlock_t3213117958 * L_1 = (MaterialPropertyBlock_t3213117958 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t3213117958_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m3898279695(L_1, /*hidden argument*/NULL);
		__this->set_m_MaterialPropertyBlock_3(L_1);
	}

IL_0016:
	{
		MaterialPropertyBlock_t3213117958 * L_2 = __this->get_m_MaterialPropertyBlock_3();
		return L_2;
	}
}
// UnityEngine.SkinnedMeshRenderer SkinnedMeshCombiner::get_cachedSkinnedRenderer()
extern "C"  SkinnedMeshRenderer_t245602842 * SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SkinnedMeshRenderer_t245602842 * L_0 = __this->get_m_CachedSkinnedRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		SkinnedMeshRenderer_t245602842 * L_2 = Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185(__this, /*hidden argument*/Component_GetComponent_TisSkinnedMeshRenderer_t245602842_m2124923185_RuntimeMethod_var);
		__this->set_m_CachedSkinnedRenderer_4(L_2);
	}

IL_001c:
	{
		SkinnedMeshRenderer_t245602842 * L_3 = __this->get_m_CachedSkinnedRenderer_4();
		return L_3;
	}
}
// System.Void SkinnedMeshCombiner::Start()
extern "C"  void SkinnedMeshCombiner_Start_m2864758147 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkinnedMeshCombiner_Start_m2864758147_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	List_1_t777473367 * V_3 = NULL;
	List_1_t3427862769 * V_4 = NULL;
	List_1_t2460578222 * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SpriteMeshInstance_t871590551 * V_8 = NULL;
	Int32U5BU5D_t385246372* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	SpriteMeshInstance_t871590551 * V_12 = NULL;
	SkinnedMeshRenderer_t245602842 * V_13 = NULL;
	BoneWeightU5BU5D_t1776052410* V_14 = NULL;
	int32_t V_15 = 0;
	BoneWeight_t1955788027  V_16;
	memset(&V_16, 0, sizeof(V_16));
	BoneWeight_t1955788027  V_17;
	memset(&V_17, 0, sizeof(V_17));
	TransformU5BU5D_t807237628* V_18 = NULL;
	int32_t V_19 = 0;
	Transform_t3600365921 * V_20 = NULL;
	CombineInstance_t988503480  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Mesh_t3648964284 * V_22 = NULL;
	List_1_t3289976585 * V_23 = NULL;
	int32_t V_24 = 0;
	SkinnedMeshRenderer_t245602842 * V_25 = NULL;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_rotation_m3502953881(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_localScale_m129152068(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m3387557959(L_6, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_9 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m3524318132(L_8, L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_11, /*hidden argument*/NULL);
		List_1_t777473367 * L_12 = (List_1_t777473367 *)il2cpp_codegen_object_new(List_1_t777473367_il2cpp_TypeInfo_var);
		List_1__ctor_m2885667311(L_12, /*hidden argument*/List_1__ctor_m2885667311_RuntimeMethod_var);
		V_3 = L_12;
		List_1_t3427862769 * L_13 = (List_1_t3427862769 *)il2cpp_codegen_object_new(List_1_t3427862769_il2cpp_TypeInfo_var);
		List_1__ctor_m4265960327(L_13, /*hidden argument*/List_1__ctor_m4265960327_RuntimeMethod_var);
		V_4 = L_13;
		List_1_t2460578222 * L_14 = (List_1_t2460578222 *)il2cpp_codegen_object_new(List_1_t2460578222_il2cpp_TypeInfo_var);
		List_1__ctor_m1616453381(L_14, /*hidden argument*/List_1__ctor_m1616453381_RuntimeMethod_var);
		V_5 = L_14;
		V_6 = 0;
		V_7 = 0;
		goto IL_00a6;
	}

IL_0073:
	{
		SpriteMeshInstanceU5BU5D_t371572014* L_15 = SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737(__this, /*hidden argument*/NULL);
		int32_t L_16 = V_7;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SpriteMeshInstance_t871590551 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_8 = L_18;
		SpriteMeshInstance_t871590551 * L_19 = V_8;
		NullCheck(L_19);
		SkinnedMeshRenderer_t245602842 * L_20 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_22 = V_6;
		SpriteMeshInstance_t871590551 * L_23 = V_8;
		NullCheck(L_23);
		Mesh_t3648964284 * L_24 = SpriteMeshInstance_get_mesh_m4183687531(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = Mesh_get_subMeshCount_m3992802841(L_24, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_25));
	}

IL_00a0:
	{
		int32_t L_26 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00a6:
	{
		int32_t L_27 = V_7;
		SpriteMeshInstanceU5BU5D_t371572014* L_28 = SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_29 = V_6;
		V_9 = ((Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)L_29));
		V_10 = 0;
		V_11 = 0;
		goto IL_0228;
	}

IL_00c9:
	{
		SpriteMeshInstanceU5BU5D_t371572014* L_30 = SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737(__this, /*hidden argument*/NULL);
		int32_t L_31 = V_11;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		SpriteMeshInstance_t871590551 * L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_12 = L_33;
		SpriteMeshInstance_t871590551 * L_34 = V_12;
		NullCheck(L_34);
		SkinnedMeshRenderer_t245602842 * L_35 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0222;
		}
	}
	{
		SpriteMeshInstance_t871590551 * L_37 = V_12;
		NullCheck(L_37);
		SkinnedMeshRenderer_t245602842 * L_38 = SpriteMeshInstance_get_cachedSkinnedRenderer_m1202946881(L_37, /*hidden argument*/NULL);
		V_13 = L_38;
		SpriteMeshInstance_t871590551 * L_39 = V_12;
		NullCheck(L_39);
		Mesh_t3648964284 * L_40 = SpriteMeshInstance_get_sharedMesh_m3404105658(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		BoneWeightU5BU5D_t1776052410* L_41 = Mesh_get_boneWeights_m371091495(L_40, /*hidden argument*/NULL);
		V_14 = L_41;
		V_15 = 0;
		goto IL_0167;
	}

IL_0104:
	{
		BoneWeightU5BU5D_t1776052410* L_42 = V_14;
		int32_t L_43 = V_15;
		NullCheck(L_42);
		V_16 = (*(BoneWeight_t1955788027 *)((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43))));
		BoneWeight_t1955788027  L_44 = V_16;
		V_17 = L_44;
		BoneWeight_t1955788027 * L_45 = (&V_17);
		int32_t L_46 = BoneWeight_get_boneIndex0_m1574980135(L_45, /*hidden argument*/NULL);
		int32_t L_47 = V_10;
		BoneWeight_set_boneIndex0_m1320779249(L_45, ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)), /*hidden argument*/NULL);
		BoneWeight_t1955788027 * L_48 = (&V_17);
		int32_t L_49 = BoneWeight_get_boneIndex1_m1574914599(L_48, /*hidden argument*/NULL);
		int32_t L_50 = V_10;
		BoneWeight_set_boneIndex1_m1320814988(L_48, ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), /*hidden argument*/NULL);
		BoneWeight_t1955788027 * L_51 = (&V_17);
		int32_t L_52 = BoneWeight_get_boneIndex2_m1574849063(L_51, /*hidden argument*/NULL);
		int32_t L_53 = V_10;
		BoneWeight_set_boneIndex2_m1320977735(L_51, ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_53)), /*hidden argument*/NULL);
		BoneWeight_t1955788027 * L_54 = (&V_17);
		int32_t L_55 = BoneWeight_get_boneIndex3_m1574783527(L_54, /*hidden argument*/NULL);
		int32_t L_56 = V_10;
		BoneWeight_set_boneIndex3_m1321014602(L_54, ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_56)), /*hidden argument*/NULL);
		List_1_t3427862769 * L_57 = V_4;
		BoneWeight_t1955788027  L_58 = V_17;
		NullCheck(L_57);
		List_1_Add_m286682117(L_57, L_58, /*hidden argument*/List_1_Add_m286682117_RuntimeMethod_var);
		int32_t L_59 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0167:
	{
		int32_t L_60 = V_15;
		BoneWeightU5BU5D_t1776052410* L_61 = V_14;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_61)->max_length)))))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_62 = V_10;
		SpriteMeshInstance_t871590551 * L_63 = V_12;
		NullCheck(L_63);
		List_1_t242407092 * L_64 = SpriteMeshInstance_get_bones_m419870594(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = List_1_get_Count_m2615777027(L_64, /*hidden argument*/List_1_get_Count_m2615777027_RuntimeMethod_var);
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_65));
		SkinnedMeshRenderer_t245602842 * L_66 = V_13;
		NullCheck(L_66);
		TransformU5BU5D_t807237628* L_67 = SkinnedMeshRenderer_get_bones_m333719399(L_66, /*hidden argument*/NULL);
		V_18 = L_67;
		V_19 = 0;
		goto IL_01a9;
	}

IL_0194:
	{
		TransformU5BU5D_t807237628* L_68 = V_18;
		int32_t L_69 = V_19;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Transform_t3600365921 * L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_20 = L_71;
		List_1_t777473367 * L_72 = V_3;
		Transform_t3600365921 * L_73 = V_20;
		NullCheck(L_72);
		List_1_Add_m4073477735(L_72, L_73, /*hidden argument*/List_1_Add_m4073477735_RuntimeMethod_var);
		int32_t L_74 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01a9:
	{
		int32_t L_75 = V_19;
		TransformU5BU5D_t807237628* L_76 = V_18;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_76)->max_length)))))))
		{
			goto IL_0194;
		}
	}
	{
		il2cpp_codegen_initobj((&V_21), sizeof(CombineInstance_t988503480 ));
		Mesh_t3648964284 * L_77 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_77, /*hidden argument*/NULL);
		V_22 = L_77;
		SkinnedMeshRenderer_t245602842 * L_78 = V_13;
		Mesh_t3648964284 * L_79 = V_22;
		NullCheck(L_78);
		SkinnedMeshRenderer_BakeMesh_m2270373039(L_78, L_79, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_80 = V_22;
		SpriteMeshInstance_t871590551 * L_81 = V_12;
		NullCheck(L_81);
		SpriteMesh_t4133440749 * L_82 = SpriteMeshInstance_get_spriteMesh_m4268136452(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		Sprite_t280657092 * L_83 = SpriteMesh_get_sprite_m636723952(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector2U5BU5D_t1457185986* L_84 = Sprite_get_uv_m2963075876(L_83, /*hidden argument*/NULL);
		NullCheck(L_80);
		Mesh_set_uv_m1258646872(L_80, L_84, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_85 = V_22;
		CombineInstance_set_mesh_m2654073640((&V_21), L_85, /*hidden argument*/NULL);
		Int32U5BU5D_t385246372* L_86 = V_9;
		int32_t L_87 = V_11;
		Mesh_t3648964284 * L_88 = CombineInstance_get_mesh_m1043161935((&V_21), /*hidden argument*/NULL);
		NullCheck(L_88);
		int32_t L_89 = Mesh_get_vertexCount_m884140614(L_88, /*hidden argument*/NULL);
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (int32_t)L_89);
		SkinnedMeshRenderer_t245602842 * L_90 = V_13;
		NullCheck(L_90);
		Matrix4x4_t1817901843  L_91 = Renderer_get_localToWorldMatrix_m3040367362(L_90, /*hidden argument*/NULL);
		CombineInstance_set_transform_m2807984981((&V_21), L_91, /*hidden argument*/NULL);
		List_1_t2460578222 * L_92 = V_5;
		CombineInstance_t988503480  L_93 = V_21;
		NullCheck(L_92);
		List_1_Add_m173306783(L_92, L_93, /*hidden argument*/List_1_Add_m173306783_RuntimeMethod_var);
		SkinnedMeshRenderer_t245602842 * L_94 = V_13;
		NullCheck(L_94);
		GameObject_t1113636619 * L_95 = Component_get_gameObject_m442555142(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		GameObject_SetActive_m796801857(L_95, (bool)0, /*hidden argument*/NULL);
	}

IL_0222:
	{
		int32_t L_96 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
	}

IL_0228:
	{
		int32_t L_97 = V_11;
		SpriteMeshInstanceU5BU5D_t371572014* L_98 = __this->get_m_SpriteMeshInstances_2();
		NullCheck(L_98);
		if ((((int32_t)L_97) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_98)->max_length)))))))
		{
			goto IL_00c9;
		}
	}
	{
		List_1_t3289976585 * L_99 = (List_1_t3289976585 *)il2cpp_codegen_object_new(List_1_t3289976585_il2cpp_TypeInfo_var);
		List_1__ctor_m4110693992(L_99, /*hidden argument*/List_1__ctor_m4110693992_RuntimeMethod_var);
		V_23 = L_99;
		V_24 = 0;
		goto IL_0270;
	}

IL_0246:
	{
		List_1_t3289976585 * L_100 = V_23;
		List_1_t777473367 * L_101 = V_3;
		int32_t L_102 = V_24;
		NullCheck(L_101);
		Transform_t3600365921 * L_103 = List_1_get_Item_m3022113929(L_101, L_102, /*hidden argument*/List_1_get_Item_m3022113929_RuntimeMethod_var);
		NullCheck(L_103);
		Matrix4x4_t1817901843  L_104 = Transform_get_worldToLocalMatrix_m399704877(L_103, /*hidden argument*/NULL);
		Transform_t3600365921 * L_105 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_105);
		Matrix4x4_t1817901843  L_106 = Transform_get_worldToLocalMatrix_m399704877(L_105, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t1817901843_il2cpp_TypeInfo_var);
		Matrix4x4_t1817901843  L_107 = Matrix4x4_op_Multiply_m1876492807(NULL /*static, unused*/, L_104, L_106, /*hidden argument*/NULL);
		NullCheck(L_100);
		List_1_Add_m885543020(L_100, L_107, /*hidden argument*/List_1_Add_m885543020_RuntimeMethod_var);
		int32_t L_108 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0270:
	{
		int32_t L_109 = V_24;
		List_1_t777473367 * L_110 = V_3;
		NullCheck(L_110);
		int32_t L_111 = List_1_get_Count_m3787308655(L_110, /*hidden argument*/List_1_get_Count_m3787308655_RuntimeMethod_var);
		if ((((int32_t)L_109) < ((int32_t)L_111)))
		{
			goto IL_0246;
		}
	}
	{
		GameObject_t1113636619 * L_112 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		SkinnedMeshRenderer_t245602842 * L_113 = GameObject_AddComponent_TisSkinnedMeshRenderer_t245602842_m791335368(L_112, /*hidden argument*/GameObject_AddComponent_TisSkinnedMeshRenderer_t245602842_m791335368_RuntimeMethod_var);
		V_25 = L_113;
		SkinnedMeshRenderer_t245602842 * L_114 = V_25;
		Mesh_t3648964284 * L_115 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_115, /*hidden argument*/NULL);
		NullCheck(L_114);
		SkinnedMeshRenderer_set_sharedMesh_m2397334786(L_114, L_115, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_116 = V_25;
		NullCheck(L_116);
		Mesh_t3648964284 * L_117 = SkinnedMeshRenderer_get_sharedMesh_m1611698282(L_116, /*hidden argument*/NULL);
		List_1_t2460578222 * L_118 = V_5;
		NullCheck(L_118);
		CombineInstanceU5BU5D_t4267154537* L_119 = List_1_ToArray_m3743205544(L_118, /*hidden argument*/List_1_ToArray_m3743205544_RuntimeMethod_var);
		NullCheck(L_117);
		Mesh_CombineMeshes_m1492745156(L_117, L_119, (bool)1, (bool)1, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_120 = V_25;
		List_1_t777473367 * L_121 = V_3;
		NullCheck(L_121);
		TransformU5BU5D_t807237628* L_122 = List_1_ToArray_m2774846862(L_121, /*hidden argument*/List_1_ToArray_m2774846862_RuntimeMethod_var);
		NullCheck(L_120);
		SkinnedMeshRenderer_set_bones_m4136734710(L_120, L_122, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_123 = V_25;
		NullCheck(L_123);
		Mesh_t3648964284 * L_124 = SkinnedMeshRenderer_get_sharedMesh_m1611698282(L_123, /*hidden argument*/NULL);
		List_1_t3427862769 * L_125 = V_4;
		NullCheck(L_125);
		BoneWeightU5BU5D_t1776052410* L_126 = List_1_ToArray_m48270846(L_125, /*hidden argument*/List_1_ToArray_m48270846_RuntimeMethod_var);
		NullCheck(L_124);
		Mesh_set_boneWeights_m3094710230(L_124, L_126, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_127 = V_25;
		NullCheck(L_127);
		Mesh_t3648964284 * L_128 = SkinnedMeshRenderer_get_sharedMesh_m1611698282(L_127, /*hidden argument*/NULL);
		List_1_t3289976585 * L_129 = V_23;
		NullCheck(L_129);
		Matrix4x4U5BU5D_t2302988098* L_130 = List_1_ToArray_m520311481(L_129, /*hidden argument*/List_1_ToArray_m520311481_RuntimeMethod_var);
		NullCheck(L_128);
		Mesh_set_bindposes_m506051887(L_128, L_130, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_131 = V_25;
		NullCheck(L_131);
		Mesh_t3648964284 * L_132 = SkinnedMeshRenderer_get_sharedMesh_m1611698282(L_131, /*hidden argument*/NULL);
		NullCheck(L_132);
		Mesh_RecalculateBounds_m39931642(L_132, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_133 = V_25;
		SpriteMeshInstanceU5BU5D_t371572014* L_134 = SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737(__this, /*hidden argument*/NULL);
		NullCheck(L_134);
		int32_t L_135 = 0;
		SpriteMeshInstance_t871590551 * L_136 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		NullCheck(L_136);
		MaterialU5BU5D_t561872642* L_137 = SpriteMeshInstance_get_sharedMaterials_m1675244170(L_136, /*hidden argument*/NULL);
		NullCheck(L_133);
		Renderer_set_materials_m2234097603(L_133, L_137, /*hidden argument*/NULL);
		Transform_t3600365921 * L_138 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_139 = V_0;
		NullCheck(L_138);
		Transform_set_position_m3387557959(L_138, L_139, /*hidden argument*/NULL);
		Transform_t3600365921 * L_140 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_141 = V_1;
		NullCheck(L_140);
		Transform_set_rotation_m3524318132(L_140, L_141, /*hidden argument*/NULL);
		Transform_t3600365921 * L_142 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_143 = V_2;
		NullCheck(L_142);
		Transform_set_localScale_m3053443106(L_142, L_143, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SkinnedMeshCombiner::OnWillRenderObject()
extern "C"  void SkinnedMeshCombiner_OnWillRenderObject_m3058691989 (SkinnedMeshCombiner_t3660097279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SkinnedMeshCombiner_OnWillRenderObject_m3058691989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SkinnedMeshRenderer_t245602842 * L_0 = SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		MaterialPropertyBlock_t3213117958 * L_2 = SkinnedMeshCombiner_get_materialPropertyBlock_m225435828(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		MaterialPropertyBlock_t3213117958 * L_3 = SkinnedMeshCombiner_get_materialPropertyBlock_m225435828(__this, /*hidden argument*/NULL);
		SpriteMeshInstanceU5BU5D_t371572014* L_4 = SkinnedMeshCombiner_get_spriteMeshInstances_m2247079737(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		SpriteMeshInstance_t871590551 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		SpriteMesh_t4133440749 * L_7 = SpriteMeshInstance_get_spriteMesh_m4268136452(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Sprite_t280657092 * L_8 = SpriteMesh_get_sprite_m636723952(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_t3840446185 * L_9 = Sprite_get_texture_m3976398399(L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		MaterialPropertyBlock_SetTexture_m3017316857(L_3, _stringLiteral3184621405, L_9, /*hidden argument*/NULL);
		SkinnedMeshRenderer_t245602842 * L_10 = SkinnedMeshCombiner_get_cachedSkinnedRenderer_m1594837622(__this, /*hidden argument*/NULL);
		MaterialPropertyBlock_t3213117958 * L_11 = SkinnedMeshCombiner_get_materialPropertyBlock_m225435828(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Renderer_SetPropertyBlock_m2471545580(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SlidePlayer::.ctor()
extern "C"  void SlidePlayer__ctor_m953482069 (SlidePlayer_t280460050 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SlidePlayer::Awake()
extern "C"  void SlidePlayer_Awake_m3338052965 (SlidePlayer_t280460050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SlidePlayer_Awake_m3338052965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Personagem_t2484933062 * L_0 = Component_GetComponent_TisPersonagem_t2484933062_m3028378119(__this, /*hidden argument*/Component_GetComponent_TisPersonagem_t2484933062_m3028378119_RuntimeMethod_var);
		__this->set_personagem_2(L_0);
		return;
	}
}
// System.Void SlidePlayer::Update()
extern "C"  void SlidePlayer_Update_m1121714743 (SlidePlayer_t280460050 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void SlidePlayer::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void SlidePlayer_OnCollisionEnter2D_m2216427897 (SlidePlayer_t280460050 * __this, Collision2D_t2842956331 * ___coll0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteCycle::.ctor()
extern "C"  void SpriteCycle__ctor_m819653663 (SpriteCycle_t1418532713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteCycle__ctor_m819653663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t412733603 * L_0 = (List_1_t412733603 *)il2cpp_codegen_object_new(List_1_t412733603_il2cpp_TypeInfo_var);
		List_1__ctor_m830205897(L_0, /*hidden argument*/List_1__ctor_m830205897_RuntimeMethod_var);
		__this->set_spriteRenderers_2(L_0);
		__this->set_totalWidth_4((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single SpriteCycle::get_position()
extern "C"  float SpriteCycle_get_position_m1956987463 (SpriteCycle_t1418532713 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_mPosition_5();
		return L_0;
	}
}
// System.Void SpriteCycle::set_position(System.Single)
extern "C"  void SpriteCycle_set_position_m3982230784 (SpriteCycle_t1418532713 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteCycle_set_position_m3982230784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	SpriteRenderer_t3235626157 * V_4 = NULL;
	Bounds_t2266837910  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Bounds_t2266837910  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	SpriteRenderer_t3235626157 * V_11 = NULL;
	Vector3_t3722313464  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Bounds_t2266837910  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_t3722313464  V_14;
	memset(&V_14, 0, sizeof(V_14));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_localScale_m129152068(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		V_0 = L_2;
		float L_3 = ___value0;
		__this->set_mPosition_5(L_3);
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		float L_5 = __this->get_mPosition_5();
		float L_6 = V_0;
		__this->set_mPosition_5(((float)((float)L_5/(float)L_6)));
	}

IL_0034:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_7;
		__this->set_totalWidth_4((0.0f));
		V_3 = 0;
		goto IL_00df;
	}

IL_004c:
	{
		List_1_t412733603 * L_8 = __this->get_spriteRenderers_2();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		SpriteRenderer_t3235626157 * L_10 = List_1_get_Item_m4070698242(L_8, L_9, /*hidden argument*/List_1_get_Item_m4070698242_RuntimeMethod_var);
		V_4 = L_10;
		SpriteRenderer_t3235626157 * L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00db;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_13 = V_4;
		NullCheck(L_13);
		Sprite_t280657092 * L_14 = SpriteRenderer_get_sprite_m663386871(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00db;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_16 = V_4;
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_2;
		NullCheck(L_17);
		Transform_set_localPosition_m4128471975(L_17, L_18, /*hidden argument*/NULL);
		Vector3_t3722313464 * L_19 = (&V_2);
		float L_20 = L_19->get_x_1();
		SpriteRenderer_t3235626157 * L_21 = V_4;
		NullCheck(L_21);
		Sprite_t280657092 * L_22 = SpriteRenderer_get_sprite_m663386871(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Bounds_t2266837910  L_23 = Sprite_get_bounds_m2438297458(L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		Vector3_t3722313464  L_24 = Bounds_get_size_m1178783246((&V_5), /*hidden argument*/NULL);
		V_6 = L_24;
		float L_25 = (&V_6)->get_x_1();
		L_19->set_x_1(((float)il2cpp_codegen_add((float)L_20, (float)L_25)));
		float L_26 = __this->get_totalWidth_4();
		SpriteRenderer_t3235626157 * L_27 = V_4;
		NullCheck(L_27);
		Sprite_t280657092 * L_28 = SpriteRenderer_get_sprite_m663386871(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Bounds_t2266837910  L_29 = Sprite_get_bounds_m2438297458(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		Vector3_t3722313464  L_30 = Bounds_get_size_m1178783246((&V_7), /*hidden argument*/NULL);
		V_8 = L_30;
		float L_31 = (&V_8)->get_x_1();
		__this->set_totalWidth_4(((float)il2cpp_codegen_add((float)L_26, (float)L_31)));
	}

IL_00db:
	{
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00df:
	{
		int32_t L_33 = V_3;
		List_1_t412733603 * L_34 = __this->get_spriteRenderers_2();
		NullCheck(L_34);
		int32_t L_35 = List_1_get_Count_m785256684(L_34, /*hidden argument*/List_1_get_Count_m785256684_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_004c;
		}
	}
	{
		float L_36 = __this->get_mPosition_5();
		float L_37 = __this->get_totalWidth_4();
		V_9 = (fmodf(L_36, L_37));
		V_10 = 0;
		goto IL_01eb;
	}

IL_0107:
	{
		List_1_t412733603 * L_38 = __this->get_spriteRenderers_2();
		int32_t L_39 = V_10;
		NullCheck(L_38);
		SpriteRenderer_t3235626157 * L_40 = List_1_get_Item_m4070698242(L_38, L_39, /*hidden argument*/List_1_get_Item_m4070698242_RuntimeMethod_var);
		V_11 = L_40;
		SpriteRenderer_t3235626157 * L_41 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_42 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01e5;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_43 = V_11;
		NullCheck(L_43);
		Sprite_t280657092 * L_44 = SpriteRenderer_get_sprite_m663386871(L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_45 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01e5;
		}
	}
	{
		SpriteRenderer_t3235626157 * L_46 = V_11;
		NullCheck(L_46);
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Vector3_t3722313464  L_48 = Transform_get_localPosition_m4234289348(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_49 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_50 = V_9;
		Vector3_t3722313464  L_51 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_49, L_50, /*hidden argument*/NULL);
		Vector3_t3722313464  L_52 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_48, L_51, /*hidden argument*/NULL);
		V_12 = L_52;
		float L_53 = (&V_12)->get_x_1();
		SpriteRenderer_t3235626157 * L_54 = V_11;
		NullCheck(L_54);
		Sprite_t280657092 * L_55 = SpriteRenderer_get_sprite_m663386871(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Bounds_t2266837910  L_56 = Sprite_get_bounds_m2438297458(L_55, /*hidden argument*/NULL);
		V_13 = L_56;
		Vector3_t3722313464  L_57 = Bounds_get_size_m1178783246((&V_13), /*hidden argument*/NULL);
		V_14 = L_57;
		float L_58 = (&V_14)->get_x_1();
		if ((!(((float)L_53) <= ((float)((-L_58))))))
		{
			goto IL_0196;
		}
	}
	{
		Vector3_t3722313464 * L_59 = (&V_12);
		float L_60 = L_59->get_x_1();
		float L_61 = __this->get_totalWidth_4();
		L_59->set_x_1(((float)il2cpp_codegen_add((float)L_60, (float)L_61)));
		goto IL_01bc;
	}

IL_0196:
	{
		float L_62 = (&V_12)->get_x_1();
		float L_63 = __this->get_totalWidth_4();
		if ((!(((float)L_62) > ((float)L_63))))
		{
			goto IL_01bc;
		}
	}
	{
		Vector3_t3722313464 * L_64 = (&V_12);
		float L_65 = L_64->get_x_1();
		float L_66 = __this->get_totalWidth_4();
		L_64->set_x_1(((float)il2cpp_codegen_subtract((float)L_65, (float)L_66)));
	}

IL_01bc:
	{
		Vector3_t3722313464 * L_67 = (&V_12);
		float L_68 = L_67->get_x_1();
		float L_69 = __this->get_offset_3();
		float L_70 = __this->get_totalWidth_4();
		L_67->set_x_1(((float)il2cpp_codegen_subtract((float)L_68, (float)((float)il2cpp_codegen_multiply((float)L_69, (float)L_70)))));
		SpriteRenderer_t3235626157 * L_71 = V_11;
		NullCheck(L_71);
		Transform_t3600365921 * L_72 = Component_get_transform_m3162698980(L_71, /*hidden argument*/NULL);
		Vector3_t3722313464  L_73 = V_12;
		NullCheck(L_72);
		Transform_set_localPosition_m4128471975(L_72, L_73, /*hidden argument*/NULL);
	}

IL_01e5:
	{
		int32_t L_74 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01eb:
	{
		int32_t L_75 = V_10;
		List_1_t412733603 * L_76 = __this->get_spriteRenderers_2();
		NullCheck(L_76);
		int32_t L_77 = List_1_get_Count_m785256684(L_76, /*hidden argument*/List_1_get_Count_m785256684_RuntimeMethod_var);
		if ((((int32_t)L_75) < ((int32_t)L_77)))
		{
			goto IL_0107;
		}
	}
	{
		return;
	}
}
// System.Void SpriteCycle::Awake()
extern "C"  void SpriteCycle_Awake_m550688271 (SpriteCycle_t1418532713 * __this, const RuntimeMethod* method)
{
	{
		SpriteCycle_set_position_m3982230784(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpriteCycle::OnValidate()
extern "C"  void SpriteCycle_OnValidate_m1683560171 (SpriteCycle_t1418532713 * __this, const RuntimeMethod* method)
{
	{
		SpriteCycle_set_position_m3982230784(__this, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpriteCycleParallax::.ctor()
extern "C"  void SpriteCycleParallax__ctor_m2907074956 (SpriteCycleParallax_t2394620404 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpriteCycleParallax::Awake()
extern "C"  void SpriteCycleParallax_Awake_m2826328948 (SpriteCycleParallax_t2394620404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteCycleParallax_Awake_m2826328948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteCycle_t1418532713 * L_0 = Component_GetComponent_TisSpriteCycle_t1418532713_m2396289970(__this, /*hidden argument*/Component_GetComponent_TisSpriteCycle_t1418532713_m2396289970_RuntimeMethod_var);
		__this->set_spriteCicle_4(L_0);
		return;
	}
}
// System.Void SpriteCycleParallax::Start()
extern "C"  void SpriteCycleParallax_Start_m4168498358 (SpriteCycleParallax_t2394620404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteCycleParallax_Start_m4168498358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Camera_t4157153871 * L_2 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		__this->set_target_2(L_5);
	}

IL_002f:
	{
		return;
	}
}
// System.Void SpriteCycleParallax::Update()
extern "C"  void SpriteCycleParallax_Update_m1428878624 (SpriteCycleParallax_t2394620404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteCycleParallax_Update_m1428878624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Transform_t3600365921 * L_0 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0088;
		}
	}
	{
		SpriteCycle_t1418532713 * L_2 = __this->get_spriteCicle_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		SpriteCycle_t1418532713 * L_4 = __this->get_spriteCicle_4();
		Transform_t3600365921 * L_5 = __this->get_target_2();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_x_1();
		Vector2_t2156229523 * L_8 = __this->get_address_of_factor_3();
		float L_9 = L_8->get_x_0();
		NullCheck(L_4);
		SpriteCycle_set_position_m3982230784(L_4, ((float)il2cpp_codegen_multiply((float)L_7, (float)L_9)), /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_localPosition_m4234289348(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		Transform_t3600365921 * L_12 = __this->get_target_2();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (&V_2)->get_y_2();
		Vector2_t2156229523 * L_15 = __this->get_address_of_factor_3();
		float L_16 = L_15->get_y_1();
		(&V_1)->set_y_2(((float)il2cpp_codegen_multiply((float)L_14, (float)L_16)));
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = V_1;
		NullCheck(L_17);
		Transform_set_localPosition_m4128471975(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0088:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringBone::.ctor()
extern "C"  void SpringBone__ctor_m1258977027 (SpringBone_t3999458348 * __this, const RuntimeMethod* method)
{
	{
		__this->set_radius_2((0.05f));
		__this->set_stiffnessForce_4((0.01f));
		__this->set_dragForce_5((0.4f));
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (-0.0001f), (0.0f), /*hidden argument*/NULL);
		__this->set_springForce_6(L_0);
		__this->set_threshold_8((0.01f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.SpringBone::Awake()
extern "C"  void SpringBone_Awake_m1302885438 (SpringBone_t3999458348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringBone_Awake_m1302885438_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Bone2D_t3065299646 * L_0 = Component_GetComponent_TisBone2D_t3065299646_m2974933587(__this, /*hidden argument*/Component_GetComponent_TisBone2D_t3065299646_m2974933587_RuntimeMethod_var);
		__this->set_m_Bone_17(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		__this->set_trs_12(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t2301928331  L_3 = Transform_get_localRotation_m3487911431(L_2, /*hidden argument*/NULL);
		__this->set_localRotation_11(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		SpringManager_t418696745 * L_5 = SpringBone_GetParentSpringManager_m374075626(__this, L_4, /*hidden argument*/NULL);
		__this->set_managerRef_16(L_5);
		return;
	}
}
// UnityChan.SpringManager UnityChan.SpringBone::GetParentSpringManager(UnityEngine.Transform)
extern "C"  SpringManager_t418696745 * SpringBone_GetParentSpringManager_m374075626 (SpringBone_t3999458348 * __this, Transform_t3600365921 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringBone_GetParentSpringManager_m374075626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpringManager_t418696745 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = ___t0;
		NullCheck(L_0);
		SpringManager_t418696745 * L_1 = Component_GetComponent_TisSpringManager_t418696745_m3257063217(L_0, /*hidden argument*/Component_GetComponent_TisSpringManager_t418696745_m3257063217_RuntimeMethod_var);
		V_0 = L_1;
		SpringManager_t418696745 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		SpringManager_t418696745 * L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		Transform_t3600365921 * L_5 = ___t0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Transform_get_parent_m835071599(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Transform_t3600365921 * L_8 = ___t0;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Transform_get_parent_m835071599(L_8, /*hidden argument*/NULL);
		SpringManager_t418696745 * L_10 = SpringBone_GetParentSpringManager_m374075626(__this, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0033:
	{
		return (SpringManager_t418696745 *)NULL;
	}
}
// System.Void UnityChan.SpringBone::Start()
extern "C"  void SpringBone_Start_m349999897 (SpringBone_t3999458348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringBone_Start_m349999897_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_trs_12();
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Bone2D_t3065299646 * L_2 = __this->get_m_Bone_17();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Bone2D_get_endPosition_m905033947(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_4 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		__this->set_springLength_10(L_4);
		Bone2D_t3065299646 * L_5 = __this->get_m_Bone_17();
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Bone2D_get_endPosition_m905033947(L_5, /*hidden argument*/NULL);
		__this->set_currTipPos_13(L_6);
		Bone2D_t3065299646 * L_7 = __this->get_m_Bone_17();
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Bone2D_get_endPosition_m905033947(L_7, /*hidden argument*/NULL);
		__this->set_prevTipPos_14(L_8);
		return;
	}
}
// System.Void UnityChan.SpringBone::UpdateSpring()
extern "C"  void SpringBone_UpdateSpring_m2224985026 (SpringBone_t3999458348 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringBone_UpdateSpring_m2224985026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Quaternion_t2301928331  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Quaternion_t2301928331  V_10;
	memset(&V_10, 0, sizeof(V_10));
	{
		Transform_t3600365921 * L_0 = __this->get_trs_12();
		__this->set_org_15(L_0);
		bool L_1 = __this->get_isAnimated_9();
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		Transform_t3600365921 * L_2 = __this->get_trs_12();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_3 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_4 = __this->get_localRotation_11();
		Quaternion_t2301928331  L_5 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localRotation_m19445462(L_2, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7));
		Transform_t3600365921 * L_8 = __this->get_trs_12();
		NullCheck(L_8);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_stiffnessForce_4();
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		float L_14 = V_0;
		Vector3_t3722313464  L_15 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		Vector3_t3722313464  L_16 = V_1;
		Vector3_t3722313464  L_17 = __this->get_prevTipPos_14();
		Vector3_t3722313464  L_18 = __this->get_currTipPos_13();
		Vector3_t3722313464  L_19 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_dragForce_5();
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		Vector3_t3722313464  L_23 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_16, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Vector3_t3722313464  L_25 = V_1;
		Vector3_t3722313464  L_26 = __this->get_springForce_6();
		float L_27 = V_0;
		Vector3_t3722313464  L_28 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		Vector3_t3722313464  L_30 = __this->get_currTipPos_13();
		V_2 = L_30;
		Vector3_t3722313464  L_31 = __this->get_currTipPos_13();
		Vector3_t3722313464  L_32 = __this->get_prevTipPos_14();
		Vector3_t3722313464  L_33 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = __this->get_currTipPos_13();
		Vector3_t3722313464  L_35 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		Vector3_t3722313464  L_36 = V_1;
		float L_37 = V_0;
		Vector3_t3722313464  L_38 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector3_t3722313464  L_39 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_35, L_38, /*hidden argument*/NULL);
		__this->set_currTipPos_13(L_39);
		Vector3_t3722313464  L_40 = __this->get_currTipPos_13();
		Transform_t3600365921 * L_41 = __this->get_trs_12();
		NullCheck(L_41);
		Vector3_t3722313464  L_42 = Transform_get_position_m36019626(L_41, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		Vector3_t3722313464  L_44 = Vector3_get_normalized_m2454957984((&V_3), /*hidden argument*/NULL);
		float L_45 = __this->get_springLength_10();
		Vector3_t3722313464  L_46 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
		Transform_t3600365921 * L_47 = __this->get_trs_12();
		NullCheck(L_47);
		Vector3_t3722313464  L_48 = Transform_get_position_m36019626(L_47, /*hidden argument*/NULL);
		Vector3_t3722313464  L_49 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_46, L_48, /*hidden argument*/NULL);
		__this->set_currTipPos_13(L_49);
		V_4 = 0;
		goto IL_01fe;
	}

IL_011d:
	{
		Vector3_t3722313464  L_50 = __this->get_currTipPos_13();
		SpringColliderU5BU5D_t338282993* L_51 = __this->get_colliders_7();
		int32_t L_52 = V_4;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		SpringCollider_t2692606160 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		Transform_t3600365921 * L_55 = Component_get_transform_m3162698980(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Vector3_t3722313464  L_56 = Transform_get_position_m36019626(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_57 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_50, L_56, /*hidden argument*/NULL);
		float L_58 = __this->get_radius_2();
		SpringColliderU5BU5D_t338282993* L_59 = __this->get_colliders_7();
		int32_t L_60 = V_4;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		SpringCollider_t2692606160 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		float L_63 = L_62->get_radius_2();
		if ((!(((float)L_57) <= ((float)((float)il2cpp_codegen_add((float)L_58, (float)L_63))))))
		{
			goto IL_01f8;
		}
	}
	{
		Vector3_t3722313464  L_64 = __this->get_currTipPos_13();
		SpringColliderU5BU5D_t338282993* L_65 = __this->get_colliders_7();
		int32_t L_66 = V_4;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		SpringCollider_t2692606160 * L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_68);
		Transform_t3600365921 * L_69 = Component_get_transform_m3162698980(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t3722313464  L_70 = Transform_get_position_m36019626(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_71 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_64, L_70, /*hidden argument*/NULL);
		V_6 = L_71;
		Vector3_t3722313464  L_72 = Vector3_get_normalized_m2454957984((&V_6), /*hidden argument*/NULL);
		V_5 = L_72;
		SpringColliderU5BU5D_t338282993* L_73 = __this->get_colliders_7();
		int32_t L_74 = V_4;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		SpringCollider_t2692606160 * L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		Transform_t3600365921 * L_77 = Component_get_transform_m3162698980(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Vector3_t3722313464  L_78 = Transform_get_position_m36019626(L_77, /*hidden argument*/NULL);
		Vector3_t3722313464  L_79 = V_5;
		float L_80 = __this->get_radius_2();
		SpringColliderU5BU5D_t338282993* L_81 = __this->get_colliders_7();
		int32_t L_82 = V_4;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		SpringCollider_t2692606160 * L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_84);
		float L_85 = L_84->get_radius_2();
		Vector3_t3722313464  L_86 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_79, ((float)il2cpp_codegen_add((float)L_80, (float)L_85)), /*hidden argument*/NULL);
		Vector3_t3722313464  L_87 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_78, L_86, /*hidden argument*/NULL);
		__this->set_currTipPos_13(L_87);
		Vector3_t3722313464  L_88 = __this->get_currTipPos_13();
		Transform_t3600365921 * L_89 = __this->get_trs_12();
		NullCheck(L_89);
		Vector3_t3722313464  L_90 = Transform_get_position_m36019626(L_89, /*hidden argument*/NULL);
		Vector3_t3722313464  L_91 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_88, L_90, /*hidden argument*/NULL);
		V_7 = L_91;
		Vector3_t3722313464  L_92 = Vector3_get_normalized_m2454957984((&V_7), /*hidden argument*/NULL);
		float L_93 = __this->get_springLength_10();
		Vector3_t3722313464  L_94 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/NULL);
		Transform_t3600365921 * L_95 = __this->get_trs_12();
		NullCheck(L_95);
		Vector3_t3722313464  L_96 = Transform_get_position_m36019626(L_95, /*hidden argument*/NULL);
		Vector3_t3722313464  L_97 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_94, L_96, /*hidden argument*/NULL);
		__this->set_currTipPos_13(L_97);
	}

IL_01f8:
	{
		int32_t L_98 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)1));
	}

IL_01fe:
	{
		int32_t L_99 = V_4;
		SpringColliderU5BU5D_t338282993* L_100 = __this->get_colliders_7();
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_100)->max_length)))))))
		{
			goto IL_011d;
		}
	}
	{
		Vector3_t3722313464  L_101 = V_2;
		__this->set_prevTipPos_14(L_101);
		Transform_t3600365921 * L_102 = __this->get_trs_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_103 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_102);
		Vector3_t3722313464  L_104 = Transform_TransformDirection_m3784028109(L_102, L_103, /*hidden argument*/NULL);
		V_8 = L_104;
		Vector3_t3722313464  L_105 = V_8;
		Vector3_t3722313464  L_106 = __this->get_currTipPos_13();
		Transform_t3600365921 * L_107 = __this->get_trs_12();
		NullCheck(L_107);
		Vector3_t3722313464  L_108 = Transform_get_position_m36019626(L_107, /*hidden argument*/NULL);
		Vector3_t3722313464  L_109 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_106, L_108, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_110 = Quaternion_FromToRotation_m3769621427(NULL /*static, unused*/, L_105, L_109, /*hidden argument*/NULL);
		V_9 = L_110;
		Quaternion_t2301928331  L_111 = V_9;
		Transform_t3600365921 * L_112 = __this->get_trs_12();
		NullCheck(L_112);
		Quaternion_t2301928331  L_113 = Transform_get_rotation_m3502953881(L_112, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_114 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_111, L_113, /*hidden argument*/NULL);
		V_10 = L_114;
		Transform_t3600365921 * L_115 = __this->get_trs_12();
		Transform_t3600365921 * L_116 = __this->get_org_15();
		NullCheck(L_116);
		Quaternion_t2301928331  L_117 = Transform_get_rotation_m3502953881(L_116, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_118 = V_10;
		SpringManager_t418696745 * L_119 = __this->get_managerRef_16();
		NullCheck(L_119);
		float L_120 = L_119->get_dynamicRatio_2();
		Quaternion_t2301928331  L_121 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_117, L_118, L_120, /*hidden argument*/NULL);
		NullCheck(L_115);
		Transform_set_rotation_m3524318132(L_115, L_121, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringCollider::.ctor()
extern "C"  void SpringCollider__ctor_m1288377321 (SpringCollider_t2692606160 * __this, const RuntimeMethod* method)
{
	{
		__this->set_radius_2((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.SpringCollider::OnDrawGizmosSelected()
extern "C"  void SpringCollider_OnDrawGizmosSelected_m1856361767 (SpringCollider_t2692606160 * __this, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_2();
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityChan.SpringManager::.ctor()
extern "C"  void SpringManager__ctor_m2548500466 (SpringManager_t418696745 * __this, const RuntimeMethod* method)
{
	{
		__this->set_dynamicRatio_2((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.SpringManager::Start()
extern "C"  void SpringManager_Start_m3726747388 (SpringManager_t418696745 * __this, const RuntimeMethod* method)
{
	{
		SpringManager_UpdateParameters_m1005264700(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.SpringManager::LateUpdate()
extern "C"  void SpringManager_LateUpdate_m309848293 (SpringManager_t418696745 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringManager_LateUpdate_m309848293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = __this->get_dynamicRatio_2();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 0;
		goto IL_0052;
	}

IL_0017:
	{
		float L_1 = __this->get_dynamicRatio_2();
		SpringBoneU5BU5D_t636815781* L_2 = __this->get_springBones_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		SpringBone_t3999458348 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		float L_6 = L_5->get_threshold_8();
		if ((!(((float)L_1) > ((float)L_6))))
		{
			goto IL_004e;
		}
	}
	{
		SpringBoneU5BU5D_t636815781* L_7 = __this->get_springBones_7();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		SpringBone_t3999458348 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		SpringBoneU5BU5D_t636815781* L_12 = __this->get_springBones_7();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SpringBone_t3999458348 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		SpringBone_UpdateSpring_m2224985026(L_15, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0052:
	{
		int32_t L_17 = V_0;
		SpringBoneU5BU5D_t636815781* L_18 = __this->get_springBones_7();
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0017;
		}
	}

IL_0060:
	{
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameters()
extern "C"  void SpringManager_UpdateParameters_m1005264700 (SpringManager_t418696745 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpringManager_UpdateParameters_m1005264700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_stiffnessForce_3();
		AnimationCurve_t3046754366 * L_1 = __this->get_stiffnessCurve_4();
		SpringManager_UpdateParameter_m3997421808(__this, _stringLiteral1394121689, L_0, L_1, /*hidden argument*/NULL);
		float L_2 = __this->get_dragForce_5();
		AnimationCurve_t3046754366 * L_3 = __this->get_dragCurve_6();
		SpringManager_UpdateParameter_m3997421808(__this, _stringLiteral3088203694, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityChan.SpringManager::UpdateParameter(System.String,System.Single,UnityEngine.AnimationCurve)
extern "C"  void SpringManager_UpdateParameter_m3997421808 (SpringManager_t418696745 * __this, String_t* ___fieldName0, float ___baseValue1, AnimationCurve_t3046754366 * ___curve2, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::.ctor()
extern "C"  void WaypointProgressTracker__ctor_m429867024 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lookAheadForTargetOffset_3((5.0f));
		__this->set_lookAheadForTargetFactor_4((0.1f));
		__this->set_lookAheadForSpeedOffset_5((10.0f));
		__this->set_lookAheadForSpeedFactor_6((0.2f));
		__this->set_pointToPointThreshold_8((4.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_targetPoint()
extern "C"  RoutePoint_t3880028948  WaypointProgressTracker_get_targetPoint_m2274041596 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CtargetPointU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_targetPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C"  void WaypointProgressTracker_set_targetPoint_m3708066232 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CtargetPointU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_speedPoint()
extern "C"  RoutePoint_t3880028948  WaypointProgressTracker_get_speedPoint_m2145707157 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CspeedPointU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_speedPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C"  void WaypointProgressTracker_set_speedPoint_m1627538866 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CspeedPointU3Ek__BackingField_10(L_0);
		return;
	}
}
// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::get_progressPoint()
extern "C"  RoutePoint_t3880028948  WaypointProgressTracker_get_progressPoint_m155183176 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = __this->get_U3CprogressPointU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::set_progressPoint(UnityStandardAssets.Utility.WaypointCircuit/RoutePoint)
extern "C"  void WaypointProgressTracker_set_progressPoint_m1349256587 (WaypointProgressTracker_t1841386251 * __this, RoutePoint_t3880028948  ___value0, const RuntimeMethod* method)
{
	{
		RoutePoint_t3880028948  L_0 = ___value0;
		__this->set_U3CprogressPointU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Start()
extern "C"  void WaypointProgressTracker_Start_m4115249106 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_Start_m4115249106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_target_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = Object_get_name_m4211327027(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, _stringLiteral4223137674, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_4, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		__this->set_target_12(L_5);
	}

IL_0031:
	{
		WaypointProgressTracker_Reset_m520452544(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Reset()
extern "C"  void WaypointProgressTracker_Reset_m520452544 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	{
		__this->set_progressDistance_13((0.0f));
		__this->set_progressNum_14(0);
		int32_t L_0 = __this->get_progressStyle_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0062;
		}
	}
	{
		Transform_t3600365921 * L_1 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_2 = __this->get_circuit_2();
		NullCheck(L_2);
		TransformU5BU5D_t807237628* L_3 = WaypointCircuit_get_Waypoints_m731492792(L_2, /*hidden argument*/NULL);
		int32_t L_4 = __this->get_progressNum_14();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_t3600365921 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_7, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_9 = __this->get_circuit_2();
		NullCheck(L_9);
		TransformU5BU5D_t807237628* L_10 = WaypointCircuit_get_Waypoints_m731492792(L_9, /*hidden argument*/NULL);
		int32_t L_11 = __this->get_progressNum_14();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_t3600365921 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_rotation_m3524318132(L_8, L_14, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::Update()
extern "C"  void WaypointProgressTracker_Update_m424770052 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_Update_m424770052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RoutePoint_t3880028948  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RoutePoint_t3880028948  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	RoutePoint_t3880028948  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RoutePoint_t3880028948  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	RoutePoint_t3880028948  V_8;
	memset(&V_8, 0, sizeof(V_8));
	RoutePoint_t3880028948  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		int32_t L_0 = __this->get_progressStyle_7();
		if (L_0)
		{
			goto IL_0151;
		}
	}
	{
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		float L_2 = __this->get_speed_16();
		Vector3_t3722313464  L_3 = __this->get_lastPosition_15();
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector3_get_magnitude_m27958459((&V_0), /*hidden argument*/NULL);
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_2, ((float)((float)L_7/(float)L_8)), L_9, /*hidden argument*/NULL);
		__this->set_speed_16(L_10);
	}

IL_0054:
	{
		Transform_t3600365921 * L_11 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_12 = __this->get_circuit_2();
		float L_13 = __this->get_progressDistance_13();
		float L_14 = __this->get_lookAheadForTargetOffset_3();
		float L_15 = __this->get_lookAheadForTargetFactor_4();
		float L_16 = __this->get_speed_16();
		NullCheck(L_12);
		RoutePoint_t3880028948  L_17 = WaypointCircuit_GetRoutePoint_m785398240(L_12, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_14)), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))), /*hidden argument*/NULL);
		V_1 = L_17;
		Vector3_t3722313464  L_18 = (&V_1)->get_position_0();
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_18, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_20 = __this->get_circuit_2();
		float L_21 = __this->get_progressDistance_13();
		float L_22 = __this->get_lookAheadForSpeedOffset_5();
		float L_23 = __this->get_lookAheadForSpeedFactor_6();
		float L_24 = __this->get_speed_16();
		NullCheck(L_20);
		RoutePoint_t3880028948  L_25 = WaypointCircuit_GetRoutePoint_m785398240(L_20, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_21, (float)L_22)), (float)((float)il2cpp_codegen_multiply((float)L_23, (float)L_24)))), /*hidden argument*/NULL);
		V_2 = L_25;
		Vector3_t3722313464  L_26 = (&V_2)->get_direction_1();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_27 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m3524318132(L_19, L_27, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_28 = __this->get_circuit_2();
		float L_29 = __this->get_progressDistance_13();
		NullCheck(L_28);
		RoutePoint_t3880028948  L_30 = WaypointCircuit_GetRoutePoint_m785398240(L_28, L_29, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m1349256587(__this, L_30, /*hidden argument*/NULL);
		RoutePoint_t3880028948  L_31 = WaypointProgressTracker_get_progressPoint_m155183176(__this, /*hidden argument*/NULL);
		V_4 = L_31;
		Vector3_t3722313464  L_32 = (&V_4)->get_position_0();
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		Vector3_t3722313464  L_36 = V_3;
		RoutePoint_t3880028948  L_37 = WaypointProgressTracker_get_progressPoint_m155183176(__this, /*hidden argument*/NULL);
		V_5 = L_37;
		Vector3_t3722313464  L_38 = (&V_5)->get_direction_1();
		float L_39 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_36, L_38, /*hidden argument*/NULL);
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_013b;
		}
	}
	{
		float L_40 = __this->get_progressDistance_13();
		float L_41 = Vector3_get_magnitude_m27958459((&V_3), /*hidden argument*/NULL);
		__this->set_progressDistance_13(((float)il2cpp_codegen_add((float)L_40, (float)((float)il2cpp_codegen_multiply((float)L_41, (float)(0.5f))))));
	}

IL_013b:
	{
		Transform_t3600365921 * L_42 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Vector3_t3722313464  L_43 = Transform_get_position_m36019626(L_42, /*hidden argument*/NULL);
		__this->set_lastPosition_15(L_43);
		goto IL_025d;
	}

IL_0151:
	{
		Transform_t3600365921 * L_44 = __this->get_target_12();
		NullCheck(L_44);
		Vector3_t3722313464  L_45 = Transform_get_position_m36019626(L_44, /*hidden argument*/NULL);
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t3722313464  L_47 = Transform_get_position_m36019626(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_48 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		float L_49 = Vector3_get_magnitude_m27958459((&V_6), /*hidden argument*/NULL);
		float L_50 = __this->get_pointToPointThreshold_8();
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_019c;
		}
	}
	{
		int32_t L_51 = __this->get_progressNum_14();
		WaypointCircuit_t445075330 * L_52 = __this->get_circuit_2();
		NullCheck(L_52);
		TransformU5BU5D_t807237628* L_53 = WaypointCircuit_get_Waypoints_m731492792(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		__this->set_progressNum_14(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))));
	}

IL_019c:
	{
		Transform_t3600365921 * L_54 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_55 = __this->get_circuit_2();
		NullCheck(L_55);
		TransformU5BU5D_t807237628* L_56 = WaypointCircuit_get_Waypoints_m731492792(L_55, /*hidden argument*/NULL);
		int32_t L_57 = __this->get_progressNum_14();
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Transform_t3600365921 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Vector3_t3722313464  L_60 = Transform_get_position_m36019626(L_59, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_set_position_m3387557959(L_54, L_60, /*hidden argument*/NULL);
		Transform_t3600365921 * L_61 = __this->get_target_12();
		WaypointCircuit_t445075330 * L_62 = __this->get_circuit_2();
		NullCheck(L_62);
		TransformU5BU5D_t807237628* L_63 = WaypointCircuit_get_Waypoints_m731492792(L_62, /*hidden argument*/NULL);
		int32_t L_64 = __this->get_progressNum_14();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Transform_t3600365921 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		Quaternion_t2301928331  L_67 = Transform_get_rotation_m3502953881(L_66, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_rotation_m3524318132(L_61, L_67, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_68 = __this->get_circuit_2();
		float L_69 = __this->get_progressDistance_13();
		NullCheck(L_68);
		RoutePoint_t3880028948  L_70 = WaypointCircuit_GetRoutePoint_m785398240(L_68, L_69, /*hidden argument*/NULL);
		WaypointProgressTracker_set_progressPoint_m1349256587(__this, L_70, /*hidden argument*/NULL);
		RoutePoint_t3880028948  L_71 = WaypointProgressTracker_get_progressPoint_m155183176(__this, /*hidden argument*/NULL);
		V_8 = L_71;
		Vector3_t3722313464  L_72 = (&V_8)->get_position_0();
		Transform_t3600365921 * L_73 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Vector3_t3722313464  L_74 = Transform_get_position_m36019626(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_75 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_72, L_74, /*hidden argument*/NULL);
		V_7 = L_75;
		Vector3_t3722313464  L_76 = V_7;
		RoutePoint_t3880028948  L_77 = WaypointProgressTracker_get_progressPoint_m155183176(__this, /*hidden argument*/NULL);
		V_9 = L_77;
		Vector3_t3722313464  L_78 = (&V_9)->get_direction_1();
		float L_79 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_76, L_78, /*hidden argument*/NULL);
		if ((!(((float)L_79) < ((float)(0.0f)))))
		{
			goto IL_024c;
		}
	}
	{
		float L_80 = __this->get_progressDistance_13();
		float L_81 = Vector3_get_magnitude_m27958459((&V_7), /*hidden argument*/NULL);
		__this->set_progressDistance_13(((float)il2cpp_codegen_add((float)L_80, (float)L_81)));
	}

IL_024c:
	{
		Transform_t3600365921 * L_82 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t3722313464  L_83 = Transform_get_position_m36019626(L_82, /*hidden argument*/NULL);
		__this->set_lastPosition_15(L_83);
	}

IL_025d:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Utility.WaypointProgressTracker::OnDrawGizmos()
extern "C"  void WaypointProgressTracker_OnDrawGizmos_m3598730726 (WaypointProgressTracker_t1841386251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointProgressTracker_OnDrawGizmos_m3598730726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		Color_t2555686324  L_1 = Color_get_green_m490390750(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = __this->get_target_12();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
		WaypointCircuit_t445075330 * L_6 = __this->get_circuit_2();
		float L_7 = __this->get_progressDistance_13();
		NullCheck(L_6);
		Vector3_t3722313464  L_8 = WaypointCircuit_GetRoutePosition_m1956640709(L_6, L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_8, (1.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_9 = Color_get_yellow_m1287957903(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = __this->get_target_12();
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = __this->get_target_12();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Transform_t3600365921 * L_14 = __this->get_target_12();
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = Transform_get_forward_m747522392(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_11, L_16, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
