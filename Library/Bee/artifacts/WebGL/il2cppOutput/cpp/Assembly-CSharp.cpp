#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<WaveConfigSO>
struct List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// WaveConfigSO[]
struct WaveConfigSOU5BU5D_t33EB63509A8A28722BC728332450FE755DFB3298;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraShake
struct CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageDealer
struct DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386;
// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Health
struct Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// Pathfinder
struct Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Shooter
struct Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// SpriteScroller
struct SpriteScroller_t7059AD78CCE7EF289703970534D779FA7383AA97;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIDisplay
struct UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB;
// UIGameOver
struct UIGameOver_tF34D0F8F57AF84A2F74A857D2E8B22B792EE508B;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaveConfigSO
struct WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CameraShake/<Shake>d__5
struct U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831;
// EnemySpawner/<SpawnEnemyWaves>d__6
struct U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B;
// LevelManager/<WaitAndLoad>d__7
struct U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Shooter/<FireContiniously>d__14
struct U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0539D89225B11D87E304B1F633A5B969140E8BF3;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9E616B73C325C8F1C613AB03D89BDF46E71365;
IL2CPP_EXTERN_C String_t* _stringLiteral613EAD396EE09ED2D9E7B60CAF5EA5B0F4F01CAB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386_m356CE33B53C7EE523ECB8172C6CAC54C2348845C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisShooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD_mA77516CABCAA68AFC47ADAD1FDB4293B3774F6A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A6DC4C9E08545417E574C80DFD8190A67F6CDE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE408B86A426BA971E924B6E4D6E8E3620E454952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1885B1EFE02A5A27703A482EE7DBBFA2DA4F896D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD4EC0F427BE0BAE16F3BC9F1A31F25A2687F44E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_m7B183CE97FD01C548DD72DDB24EA5CFF3028F7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_m7718AB4CC07A6BE424C435A66564D7C6AAACC829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m272A307F5FB892FB3D1DD65E677507E4D39088D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFireContiniouslyU3Ed__14_System_Collections_IEnumerator_Reset_mE5DB8BEC7622583B632886A538365A43EAA43BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m1DE4DC0B0D54AFA832EE754B97F5F194614B0648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnEnemyWavesU3Ed__6_System_Collections_IEnumerator_Reset_m8F8EA66B8251E5F976E08C1AB78C453207F169F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitAndLoadU3Ed__7_System_Collections_IEnumerator_Reset_mC2AB87CE1567468F5FFB68BAC6157451A95D1EAD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<WaveConfigSO>
struct List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaveConfigSOU5BU5D_t33EB63509A8A28722BC728332450FE755DFB3298* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaveConfigSOU5BU5D_t33EB63509A8A28722BC728332450FE755DFB3298* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CameraShake/<Shake>d__5
struct U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831  : public RuntimeObject
{
	// System.Int32 CameraShake/<Shake>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CameraShake/<Shake>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CameraShake CameraShake/<Shake>d__5::<>4__this
	CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* ___U3CU3E4__this_2;
	// System.Single CameraShake/<Shake>d__5::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// LevelManager/<WaitAndLoad>d__7
struct U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA  : public RuntimeObject
{
	// System.Int32 LevelManager/<WaitAndLoad>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<WaitAndLoad>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single LevelManager/<WaitAndLoad>d__7::delay
	float ___delay_2;
	// System.String LevelManager/<WaitAndLoad>d__7::sceneName
	String_t* ___sceneName_3;
};

// Shooter/<FireContiniously>d__14
struct U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB  : public RuntimeObject
{
	// System.Int32 Shooter/<FireContiniously>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Shooter/<FireContiniously>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Shooter Shooter/<FireContiniously>d__14::<>4__this
	Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<WaveConfigSO>
struct Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// EnemySpawner/<SpawnEnemyWaves>d__6
struct U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B  : public RuntimeObject
{
	// System.Int32 EnemySpawner/<SpawnEnemyWaves>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnemySpawner/<SpawnEnemyWaves>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EnemySpawner EnemySpawner/<SpawnEnemyWaves>d__6::<>4__this
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1/Enumerator<WaveConfigSO> EnemySpawner/<SpawnEnemyWaves>d__6::<>7__wrap1
	Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF ___U3CU3E7__wrap1_3;
	// System.Int32 EnemySpawner/<SpawnEnemyWaves>d__6::<i>5__3
	int32_t ___U3CiU3E5__3_4;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// WaveConfigSO
struct WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WaveConfigSO::enemyPrefabs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemyPrefabs_4;
	// UnityEngine.Transform WaveConfigSO::pathPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pathPrefab_5;
	// System.Single WaveConfigSO::moveSpeed
	float ___moveSpeed_6;
	// System.Single WaveConfigSO::timeBetweenEnemySpawns
	float ___timeBetweenEnemySpawns_7;
	// System.Single WaveConfigSO::spawnTimeVariance
	float ___spawnTimeVariance_8;
	// System.Single WaveConfigSO::minSpawnTime
	float ___minSpawnTime_9;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AudioPlayer
struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip AudioPlayer::shootingClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___shootingClip_4;
	// System.Single AudioPlayer::shootingVolume
	float ___shootingVolume_5;
	// UnityEngine.AudioClip AudioPlayer::damageClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___damageClip_6;
	// System.Single AudioPlayer::damageVolume
	float ___damageVolume_7;
};

struct AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields
{
	// AudioPlayer AudioPlayer::instance
	AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* ___instance_8;
};

// CameraShake
struct CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraShake::shakeDuration
	float ___shakeDuration_4;
	// System.Single CameraShake::shakeMagnitude
	float ___shakeMagnitude_5;
	// UnityEngine.Vector3 CameraShake::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_6;
};

// DamageDealer
struct DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 DamageDealer::damage
	int32_t ___damage_4;
};

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<WaveConfigSO> EnemySpawner::waveConfigs
	List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33* ___waveConfigs_4;
	// System.Single EnemySpawner::timeBetweenWaves
	float ___timeBetweenWaves_5;
	// System.Boolean EnemySpawner::isLooping
	bool ___isLooping_6;
	// WaveConfigSO EnemySpawner::currentWave
	WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* ___currentWave_7;
};

// Health
struct Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Health::isPlayer
	bool ___isPlayer_4;
	// System.Int32 Health::health
	int32_t ___health_5;
	// System.Int32 Health::score
	int32_t ___score_6;
	// UnityEngine.ParticleSystem Health::hitEffect
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___hitEffect_7;
	// CameraShake Health::cameraShake
	CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* ___cameraShake_8;
	// System.Boolean Health::applyCameraShake
	bool ___applyCameraShake_9;
	// AudioPlayer Health::audioPlayer
	AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* ___audioPlayer_10;
	// ScoreKeeper Health::scoreKeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scoreKeeper_11;
	// LevelManager Health::levelManager
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___levelManager_12;
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LevelManager::sceneLoadDelay
	float ___sceneLoadDelay_4;
	// ScoreKeeper LevelManager::scoreKeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scoreKeeper_5;
};

// Pathfinder
struct Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EnemySpawner Pathfinder::enemySpawner
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___enemySpawner_4;
	// WaveConfigSO Pathfinder::waveConfig
	WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* ___waveConfig_5;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Pathfinder::wayPoints
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___wayPoints_6;
	// System.Int32 Pathfinder::wayPointIndex
	int32_t ___wayPointIndex_7;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector2 Player::rawInput
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rawInput_5;
	// System.Single Player::paddingLeft
	float ___paddingLeft_6;
	// System.Single Player::paddingRight
	float ___paddingRight_7;
	// System.Single Player::paddingTop
	float ___paddingTop_8;
	// System.Single Player::paddingBottom
	float ___paddingBottom_9;
	// UnityEngine.Vector2 Player::minBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minBounds_10;
	// UnityEngine.Vector2 Player::maxBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxBounds_11;
	// Shooter Player::shooter
	Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* ___shooter_12;
};

// ScoreKeeper
struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScoreKeeper::score
	int32_t ___score_4;
};

struct ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_StaticFields
{
	// ScoreKeeper ScoreKeeper::instance
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___instance_5;
};

// Shooter
struct Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Shooter::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_4;
	// System.Single Shooter::projectileSpeed
	float ___projectileSpeed_5;
	// System.Single Shooter::projectileLifetime
	float ___projectileLifetime_6;
	// System.Single Shooter::baseFiringRate
	float ___baseFiringRate_7;
	// System.Boolean Shooter::useAI
	bool ___useAI_8;
	// System.Single Shooter::firingRateVariance
	float ___firingRateVariance_9;
	// System.Single Shooter::minFiringRate
	float ___minFiringRate_10;
	// System.Boolean Shooter::isFiring
	bool ___isFiring_11;
	// UnityEngine.Coroutine Shooter::firingCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___firingCoroutine_12;
	// AudioPlayer Shooter::audioPlayer
	AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* ___audioPlayer_13;
};

// SpriteScroller
struct SpriteScroller_t7059AD78CCE7EF289703970534D779FA7383AA97  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 SpriteScroller::moveSpeed
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___moveSpeed_4;
	// UnityEngine.Vector2 SpriteScroller::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_5;
	// UnityEngine.Material SpriteScroller::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIDisplay
struct UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider UIDisplay::healthSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthSlider_4;
	// Health UIDisplay::playerHealth
	Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* ___playerHealth_5;
	// TMPro.TextMeshProUGUI UIDisplay::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_6;
	// ScoreKeeper UIDisplay::scoreKeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scoreKeeper_7;
};

// UIGameOver
struct UIGameOver_tF34D0F8F57AF84A2F74A857D2E8B22B792EE508B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI UIGameOver::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_4;
	// ScoreKeeper UIGameOver::scoreKeeper
	ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* ___scoreKeeper_5;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void AudioPlayer::ManageSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_ManageSingleton_mF353A73F2A9D7C10BF4CF45DD066939DDC24E0A5 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void AudioPlayer::PlayClip(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayClip_m7018731886F7EEC23620691D762A66787EA4F0E9 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___volume2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraShake_Shake_mFF4BD0637B8A43CE358846FE287013C58D6358D6 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void CameraShake/<Shake>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5__ctor_mB16D542F86B62062F3BDC768AD84722DF166BEBA (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Random_get_insideUnitCircle_mB05E074D2463729E20EC637F10CFEE90FC587E51 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnemySpawner::SpawnEnemyWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnEnemyWaves_mB8F3487FF3306689D8151D39AC0C966C39392B9D (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6__ctor_m3B5AB8515CBAC80182FF6022DF42CB5D0E7D252A (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6_U3CU3Em__Finally1_m19F3F8B6EF3AA53EFA28E887C7054C2B790AEDB4 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) ;
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6_System_IDisposable_Dispose_m612CC0D07D0137548FDD7BFDD061F3962F480B03 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<WaveConfigSO>::GetEnumerator()
inline Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF List_1_GetEnumerator_mD4EC0F427BE0BAE16F3BC9F1A31F25A2687F44E5 (List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF (*) (List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<WaveConfigSO>::get_Current()
inline WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* Enumerator_get_Current_m1885B1EFE02A5A27703A482EE7DBBFA2DA4F896D_inline (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* __this, const RuntimeMethod* method)
{
	return ((  WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* (*) (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject WaveConfigSO::GetEnemyPrefab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WaveConfigSO_GetEnemyPrefab_m6F81A58D2DAE54F108D995AD18529A78A6CA15D9 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Transform WaveConfigSO::GetStartingWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* WaveConfigSO_GetStartingWaypoint_mF88D5D885D4B96776D1B842C2FC31413161A6300 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Single WaveConfigSO::GetRandomSpawnTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfigSO_GetRandomSpawnTime_mF6460E05699A68A9AAD9AF6925E4BC051522F6DD (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 WaveConfigSO::GetEnemyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveConfigSO_GetEnemyCount_m85967DE3BE78333508132CC4221B28AE4B516D3C (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<WaveConfigSO>::MoveNext()
inline bool Enumerator_MoveNext_mE408B86A426BA971E924B6E4D6E8E3620E454952 (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<WaveConfigSO>::Dispose()
inline void Enumerator_Dispose_m1A6DC4C9E08545417E574C80DFD8190A67F6CDE3 (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<CameraShake>()
inline CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<AudioPlayer>()
inline AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402 (const RuntimeMethod* method)
{
	return ((  AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<ScoreKeeper>()
inline ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93 (const RuntimeMethod* method)
{
	return ((  ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<LevelManager>()
inline LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_m7718AB4CC07A6BE424C435A66564D7C6AAACC829 (const RuntimeMethod* method)
{
	return ((  LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponent<DamageDealer>()
inline DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* Component_GetComponent_TisDamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386_m356CE33B53C7EE523ECB8172C6CAC54C2348845C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 DamageDealer::GetDamage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_m72D67ABCF377719E475EC121BC0640EF4351F483_inline (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) ;
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___damage0, const RuntimeMethod* method) ;
// System.Void Health::PlayHitEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_PlayHitEffect_mA2465C8985508F2CB204F74DBF5157852CA953DA (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Void AudioPlayer::PlayDamageClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayDamageClip_mACD46DB21DE324C18FD4485242C490C95E81A938 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) ;
// System.Void Health::ShakeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_ShakeCamera_m9CA6801BC7FDE19A66E1284F3744329F46CEF00E (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_mA1D6AEF4789D5D75BF3944916260CE16F6582156 (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) ;
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Void ScoreKeeper::ModifyScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ModifyScore_mD511FE60DE51158C869DE39E0590AF30C94082D2 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void LevelManager::LoadGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadGameOver_m1515E21C14258B9D37D93563AF49499B67337A8F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m272A307F5FB892FB3D1DD65E677507E4D39088D8 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constantMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463 (MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void CameraShake::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Play_m1FAD63BE4F928640A4F6C0761A5A6B7F81851FB4 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) ;
// System.Void ScoreKeeper::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ResetScore_mD871C0F28D43DC29FB3042A2D1847522F8CA2759 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelManager::WaitAndLoad(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_WaitAndLoad_m3CEA8D4A8518345B999D90C9D3B092219658D94D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, String_t* ___sceneName0, float ___delay1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void LevelManager/<WaitAndLoad>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadU3Ed__7__ctor_m850291CEA202F22CFC1CEBCFC1502B94604BFE49 (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<EnemySpawner>()
inline EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* Object_FindObjectOfType_TisEnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_m7B183CE97FD01C548DD72DDB24EA5CFF3028F7BF (const RuntimeMethod* method)
{
	return ((  EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// WaveConfigSO EnemySpawner::GetCurrentWave()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* EnemySpawner_GetCurrentWave_m9D88C34FBA2FF05415AD9F886C2C9B5B38BA6214_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfigSO::GetWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* WaveConfigSO_GetWaypoints_mE4558C6C985376F361F2D8C19ADAF72C1B692DF2 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Pathfinder::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_FollowPath_m11244C2C77B05C0BCB1E41B42768257A642EE72A (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Single WaveConfigSO::GetMoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfigSO_GetMoveSpeed_mDE0057BAA18C3EA6C5A23F252DF3FD90D5E1BE24_inline (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Shooter>()
inline Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* Component_GetComponent_TisShooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD_mA77516CABCAA68AFC47ADAD1FDB4293B3774F6A1 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Player::InitBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_InitBounds_m5B54D3709FD766F468E9CEB4206034244210E672 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputValue::get_isPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// System.Void ScoreKeeper::ManageSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ManageSingleton_m91D498C5B8AD127EB4AD00D8ACCE974279E389F5 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void Shooter::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter_Fire_m9D304C5704D2F1F765F66C8C2D28F5F57121E3ED (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Shooter::FireContiniously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shooter_FireContiniously_mB429DFDFA85567221EE9CE43F00D44B0AE088FE0 (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___routine0, const RuntimeMethod* method) ;
// System.Void Shooter/<FireContiniously>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContiniouslyU3Ed__14__ctor_m04EB600D1B00FA186CFB09E84C42706F4D588377 (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void AudioPlayer::PlayShootingClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayShootingClip_m282EEA732DA6D0C40D8E145BB8FC133FFB4941B3 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 Health::GetHealth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Health_GetHealth_m448B1A594DD477CD4E5EB4C6BDF1BF71DD404512_inline (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Int32 ScoreKeeper::GetScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreKeeper_GetScore_m04A2D5262FEA0FB4CE8657881804B85C7319592A_inline (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void AudioPlayer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_Awake_m615F99ABFFBBFD26A12C48C680CA5387527B1430 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	{
		// ManageSingleton();
		AudioPlayer_ManageSingleton_mF353A73F2A9D7C10BF4CF45DD066939DDC24E0A5(__this, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::ManageSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_ManageSingleton_mF353A73F2A9D7C10BF4CF45DD066939DDC24E0A5 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance!=null)
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_0 = ((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___instance_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		return;
	}

IL_0025:
	{
		// instance = this;
		((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___instance_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_tB8610995483B0D47636473026A32C5916B855803_il2cpp_TypeInfo_var))->___instance_8), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::PlayShootingClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayShootingClip_m282EEA732DA6D0C40D8E145BB8FC133FFB4941B3 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	{
		// PlayClip(shootingClip, shootingVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___shootingClip_4;
		float L_1 = __this->___shootingVolume_5;
		AudioPlayer_PlayClip_m7018731886F7EEC23620691D762A66787EA4F0E9(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::PlayDamageClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayDamageClip_mACD46DB21DE324C18FD4485242C490C95E81A938 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	{
		// PlayClip(damageClip, damageVolume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = __this->___damageClip_6;
		float L_1 = __this->___damageVolume_7;
		AudioPlayer_PlayClip_m7018731886F7EEC23620691D762A66787EA4F0E9(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioPlayer::PlayClip(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer_PlayClip_m7018731886F7EEC23620691D762A66787EA4F0E9 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, float ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(clip!=null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Vector3 cameraPos = Camera.main.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_0 = L_4;
		// AudioSource.PlayClipAtPoint(clip, cameraPos, volume);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___clip0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = ___volume1;
		AudioSource_PlayClipAtPoint_mEEF6FE993B8F7A61829F0E9538858711D06945F7(L_5, L_6, L_7, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void AudioPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayer__ctor_m3F81E1F07C97F2ECE2A837B3FB918ECBBCA14B17 (AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] [Range(0f, 1f)] float shootingVolume = 1f;
		__this->___shootingVolume_5 = (1.0f);
		// [SerializeField][Range(0f, 1f)] float damageVolume = 1f;
		__this->___damageVolume_7 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraShake::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Start_mDCEBFE0CD747A8BF83192C5356C727956F004E74 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// initialPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___initialPosition_6 = L_1;
		// }
		return;
	}
}
// System.Void CameraShake::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Play_m1FAD63BE4F928640A4F6C0761A5A6B7F81851FB4 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Shake());
		RuntimeObject* L_0;
		L_0 = CameraShake_Shake_mFF4BD0637B8A43CE358846FE287013C58D6358D6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraShake_Shake_mFF4BD0637B8A43CE358846FE287013C58D6358D6 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* L_0 = (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831*)il2cpp_codegen_object_new(U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831_il2cpp_TypeInfo_var);
		U3CShakeU3Ed__5__ctor_mB16D542F86B62062F3BDC768AD84722DF166BEBA(L_0, 0, NULL);
		U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CameraShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake__ctor_m55BC727470175313EB7C6F09E2EBD04610B8F325 (CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float shakeDuration = 1f;
		__this->___shakeDuration_4 = (1.0f);
		// [SerializeField] float shakeMagnitude = 0.5f;
		__this->___shakeMagnitude_5 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraShake/<Shake>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5__ctor_mB16D542F86B62062F3BDC768AD84722DF166BEBA (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CameraShake/<Shake>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5_System_IDisposable_Dispose_m4DA92ED748A8B578FCE51AF6079E643659A6A20F (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CameraShake/<Shake>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShakeU3Ed__5_MoveNext_m4D39D83172120A7B75C893356DAA88842B0C854C (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_0083;
	}

IL_002b:
	{
		// transform.position = initialPosition + (Vector3)Random.insideUnitCircle * shakeMagnitude;
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_6 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___initialPosition_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Random_get_insideUnitCircle_mB05E074D2463729E20EC637F10CFEE90FC587E51(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_8, NULL);
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_10 = V_1;
		float L_11 = L_10->___shakeMagnitude_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_12, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_13, NULL);
		// elapsedTime += Time.deltaTime;
		float L_14 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_14, L_15));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_16 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_16, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0083:
	{
		// while(elapsedTime<shakeDuration)
		float L_17 = __this->___U3CelapsedTimeU3E5__2_3;
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_18 = V_1;
		float L_19 = L_18->___shakeDuration_4;
		if ((((float)L_17) < ((float)L_19)))
		{
			goto IL_002b;
		}
	}
	{
		// transform.position = initialPosition;
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_20 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___initialPosition_6;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_23, NULL);
		// }
		return (bool)0;
	}
}
// System.Object CameraShake/<Shake>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m76C408A34545A34C50F1D981B4105A2D8A6B2788 (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CameraShake/<Shake>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m1DE4DC0B0D54AFA832EE754B97F5F194614B0648 (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShakeU3Ed__5_System_Collections_IEnumerator_Reset_m1DE4DC0B0D54AFA832EE754B97F5F194614B0648_RuntimeMethod_var)));
	}
}
// System.Object CameraShake/<Shake>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShakeU3Ed__5_System_Collections_IEnumerator_get_Current_m1D3EAF9AA895D26CC47B1CDB13F40107A09F3C0D (U3CShakeU3Ed__5_t29905F55F0FB12EDA4F62CCED85F880DA3833831* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Int32 DamageDealer::GetDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_m72D67ABCF377719E475EC121BC0640EF4351F483 (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) 
{
	{
		// return damage;
		int32_t L_0 = __this->___damage_4;
		return L_0;
	}
}
// System.Void DamageDealer::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_Hit_mA1D6AEF4789D5D75BF3944916260CE16F6582156 (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void DamageDealer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer__ctor_mB1E42628D77CC0E78F74D0AD82803641C983B487 (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int damage = 10;
		__this->___damage_4 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m5302D69E915FF1027CFB0C1198CBCAA9430819A4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpawnEnemyWaves());
		RuntimeObject* L_0;
		L_0 = EnemySpawner_SpawnEnemyWaves_mB8F3487FF3306689D8151D39AC0C966C39392B9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// WaveConfigSO EnemySpawner::GetCurrentWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* EnemySpawner_GetCurrentWave_m9D88C34FBA2FF05415AD9F886C2C9B5B38BA6214 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// return currentWave;
		WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_0 = __this->___currentWave_7;
		return L_0;
	}
}
// System.Collections.IEnumerator EnemySpawner::SpawnEnemyWaves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemySpawner_SpawnEnemyWaves_mB8F3487FF3306689D8151D39AC0C966C39392B9D (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* L_0 = (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B*)il2cpp_codegen_object_new(U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B_il2cpp_TypeInfo_var);
		U3CSpawnEnemyWavesU3Ed__6__ctor_m3B5AB8515CBAC80182FF6022DF42CB5D0E7D252A(L_0, 0, NULL);
		U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m619CE38261A8A67AB91D66ED5BE44E56C1897E74 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6__ctor_m3B5AB8515CBAC80182FF6022DF42CB5D0E7D252A (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6_System_IDisposable_Dispose_m612CC0D07D0137548FDD7BFDD061F3962F480B03 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))) <= ((uint32_t)1))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				U3CSpawnEnemyWavesU3Ed__6_U3CU3Em__Finally1_m19F3F8B6EF3AA53EFA28E887C7054C2B790AEDB4(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean EnemySpawner/<SpawnEnemyWaves>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnEnemyWavesU3Ed__6_MoveNext_m52599B2134FAAB2772EFB7C3EDCF855CB8B00AB6 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE408B86A426BA971E924B6E4D6E8E3620E454952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1885B1EFE02A5A27703A482EE7DBBFA2DA4F896D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD4EC0F427BE0BAE16F3BC9F1A31F25A2687F44E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* V_2 = NULL;
	WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* V_3 = NULL;
	int32_t V_4 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0152:
			{// begin fault (depth: 1)
				U3CSpawnEnemyWavesU3Ed__6_System_IDisposable_Dispose_m612CC0D07D0137548FDD7BFDD061F3962F480B03(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_00cd_1;
					}
					case 2:
					{
						goto IL_0119_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0159;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
			}

IL_002e_1:
			{
				// foreach (WaveConfigSO wave in waveConfigs)
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_3 = V_2;
				List_1_tBEE38ACF9728109960E35274CEADBA5C66611E33* L_4 = L_3->___waveConfigs_4;
				Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF L_5;
				L_5 = List_1_GetEnumerator_mD4EC0F427BE0BAE16F3BC9F1A31F25A2687F44E5(L_4, List_1_GetEnumerator_mD4EC0F427BE0BAE16F3BC9F1A31F25A2687F44E5_RuntimeMethod_var);
				__this->___U3CU3E7__wrap1_3 = L_5;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____list_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E7__wrap1_3))->____current_3), (void*)NULL);
				#endif
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0121_1;
			}

IL_004c_1:
			{
				// foreach (WaveConfigSO wave in waveConfigs)
				Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* L_6 = (&__this->___U3CU3E7__wrap1_3);
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_7;
				L_7 = Enumerator_get_Current_m1885B1EFE02A5A27703A482EE7DBBFA2DA4F896D_inline(L_6, Enumerator_get_Current_m1885B1EFE02A5A27703A482EE7DBBFA2DA4F896D_RuntimeMethod_var);
				V_3 = L_7;
				// currentWave = wave;
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_8 = V_2;
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_9 = V_3;
				L_8->___currentWave_7 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&L_8->___currentWave_7), (void*)L_9);
				// for (int i = 0; i < currentWave.GetEnemyCount(); i++)
				__this->___U3CiU3E5__3_4 = 0;
				goto IL_00e7_1;
			}

IL_0068_1:
			{
				// Instantiate(currentWave.GetEnemyPrefab(i),
				//             currentWave.GetStartingWaypoint().position,
				//             Quaternion.Euler(0,0,180),
				//             transform);
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_10 = V_2;
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_11 = L_10->___currentWave_7;
				int32_t L_12 = __this->___U3CiU3E5__3_4;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = WaveConfigSO_GetEnemyPrefab_m6F81A58D2DAE54F108D995AD18529A78A6CA15D9(L_11, L_12, NULL);
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_14 = V_2;
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_15 = L_14->___currentWave_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = WaveConfigSO_GetStartingWaypoint_mF88D5D885D4B96776D1B842C2FC31413161A6300(L_15, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
				L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
				Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
				L_18 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (180.0f), NULL);
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_19 = V_2;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
				L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
				L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_13, L_17, L_18, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
				// yield return new WaitForSeconds(currentWave.GetRandomSpawnTime());
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_22 = V_2;
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_23 = L_22->___currentWave_7;
				float L_24;
				L_24 = WaveConfigSO_GetRandomSpawnTime_mF6460E05699A68A9AAD9AF6925E4BC051522F6DD(L_23, NULL);
				WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_25 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
				WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_25, L_24, NULL);
				__this->___U3CU3E2__current_1 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_25);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0159;
			}

IL_00cd_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// for (int i = 0; i < currentWave.GetEnemyCount(); i++)
				int32_t L_26 = __this->___U3CiU3E5__3_4;
				V_4 = L_26;
				int32_t L_27 = V_4;
				__this->___U3CiU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_00e7_1:
			{
				// for (int i = 0; i < currentWave.GetEnemyCount(); i++)
				int32_t L_28 = __this->___U3CiU3E5__3_4;
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_29 = V_2;
				WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_30 = L_29->___currentWave_7;
				int32_t L_31;
				L_31 = WaveConfigSO_GetEnemyCount_m85967DE3BE78333508132CC4221B28AE4B516D3C(L_30, NULL);
				if ((((int32_t)L_28) < ((int32_t)L_31)))
				{
					goto IL_0068_1;
				}
			}
			{
				// yield return new WaitForSeconds(timeBetweenWaves);
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_32 = V_2;
				float L_33 = L_32->___timeBetweenWaves_5;
				WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
				WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, L_33, NULL);
				__this->___U3CU3E2__current_1 = L_34;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0159;
			}

IL_0119_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0121_1:
			{
				// foreach (WaveConfigSO wave in waveConfigs)
				Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* L_35 = (&__this->___U3CU3E7__wrap1_3);
				bool L_36;
				L_36 = Enumerator_MoveNext_mE408B86A426BA971E924B6E4D6E8E3620E454952(L_35, Enumerator_MoveNext_mE408B86A426BA971E924B6E4D6E8E3620E454952_RuntimeMethod_var);
				if (L_36)
				{
					goto IL_004c_1;
				}
			}
			{
				U3CSpawnEnemyWavesU3Ed__6_U3CU3Em__Finally1_m19F3F8B6EF3AA53EFA28E887C7054C2B790AEDB4(__this, NULL);
				Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* L_37 = (&__this->___U3CU3E7__wrap1_3);
				il2cpp_codegen_initobj(L_37, sizeof(Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF));
				// } while (isLooping);
				EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_38 = V_2;
				bool L_39 = L_38->___isLooping_6;
				if (L_39)
				{
					goto IL_002e_1;
				}
			}
			{
				// }
				V_0 = (bool)0;
				goto IL_0159;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0159:
	{
		bool L_40 = V_0;
		return L_40;
	}
}
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6_U3CU3Em__Finally1_m19F3F8B6EF3AA53EFA28E887C7054C2B790AEDB4 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A6DC4C9E08545417E574C80DFD8190A67F6CDE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Enumerator_t644C0125E2B166C1B487D0CB5C83F1A1B1FE09AF* L_0 = (&__this->___U3CU3E7__wrap1_3);
		Enumerator_Dispose_m1A6DC4C9E08545417E574C80DFD8190A67F6CDE3(L_0, Enumerator_Dispose_m1A6DC4C9E08545417E574C80DFD8190A67F6CDE3_RuntimeMethod_var);
		return;
	}
}
// System.Object EnemySpawner/<SpawnEnemyWaves>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyWavesU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDC956211DCDA6D91C143082706FA2197C309F02F (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnemySpawner/<SpawnEnemyWaves>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnEnemyWavesU3Ed__6_System_Collections_IEnumerator_Reset_m8F8EA66B8251E5F976E08C1AB78C453207F169F5 (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnEnemyWavesU3Ed__6_System_Collections_IEnumerator_Reset_m8F8EA66B8251E5F976E08C1AB78C453207F169F5_RuntimeMethod_var)));
	}
}
// System.Object EnemySpawner/<SpawnEnemyWaves>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnEnemyWavesU3Ed__6_System_Collections_IEnumerator_get_Current_m749E71710B6FEACF3B6C71C87FA3BD8A365119DD (U3CSpawnEnemyWavesU3Ed__6_t832EE47D1C55792A848F512C9BA58C8AF2255A2B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Health::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Awake_m30B66E8B3D1F254BF487CD18BD23AC29D5FF64A0 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_m7718AB4CC07A6BE424C435A66564D7C6AAACC829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraShake = Camera.main.GetComponent<CameraShake>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_1;
		L_1 = Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC(L_0, Component_GetComponent_TisCameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1_m12B798662937F3D647AA654E93ACF1A75C8FD7DC_RuntimeMethod_var);
		__this->___cameraShake_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraShake_8), (void*)L_1);
		// audioPlayer = FindObjectOfType<AudioPlayer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_2;
		L_2 = Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402(Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402_RuntimeMethod_var);
		__this->___audioPlayer_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioPlayer_10), (void*)L_2);
		// scoreKeeper = FindObjectOfType<ScoreKeeper>();
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_3;
		L_3 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		__this->___scoreKeeper_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreKeeper_11), (void*)L_3);
		// levelManager = FindObjectOfType<LevelManager>();
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_4;
		L_4 = Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_m7718AB4CC07A6BE424C435A66564D7C6AAACC829(Object_FindObjectOfType_TisLevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_m7718AB4CC07A6BE424C435A66564D7C6AAACC829_RuntimeMethod_var);
		__this->___levelManager_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelManager_12), (void*)L_4);
		// }
		return;
	}
}
// System.Void Health::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_OnTriggerEnter2D_m1840F4045B631C0742C4E3672D86509C16FFA19D (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386_m356CE33B53C7EE523ECB8172C6CAC54C2348845C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* V_0 = NULL;
	{
		// DamageDealer damageDealer = other.GetComponent<DamageDealer>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* L_1;
		L_1 = Component_GetComponent_TisDamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386_m356CE33B53C7EE523ECB8172C6CAC54C2348845C(L_0, Component_GetComponent_TisDamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386_m356CE33B53C7EE523ECB8172C6CAC54C2348845C_RuntimeMethod_var);
		V_0 = L_1;
		// if(damageDealer != null)
		DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// TakeDamage(damageDealer.GetDamage());
		DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* L_4 = V_0;
		int32_t L_5;
		L_5 = DamageDealer_GetDamage_m72D67ABCF377719E475EC121BC0640EF4351F483_inline(L_4, NULL);
		Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096(__this, L_5, NULL);
		// PlayHitEffect();
		Health_PlayHitEffect_mA2465C8985508F2CB204F74DBF5157852CA953DA(__this, NULL);
		// audioPlayer.PlayDamageClip();
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_6 = __this->___audioPlayer_10;
		AudioPlayer_PlayDamageClip_mACD46DB21DE324C18FD4485242C490C95E81A938(L_6, NULL);
		// ShakeCamera();
		Health_ShakeCamera_m9CA6801BC7FDE19A66E1284F3744329F46CEF00E(__this, NULL);
		// damageDealer.Hit();
		DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* L_7 = V_0;
		DamageDealer_Hit_mA1D6AEF4789D5D75BF3944916260CE16F6582156(L_7, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m110973AB580A870DC8226E1EEB0C52F5FB0F2096 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, int32_t ___damage0, const RuntimeMethod* method) 
{
	{
		// health -= damage;
		int32_t L_0 = __this->___health_5;
		int32_t L_1 = ___damage0;
		__this->___health_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if(health<=0)
		int32_t L_2 = __this->___health_5;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		// Die();
		Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03(__this, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_m58653B13F506A59CDA3DFE478A332B457B2F0F03 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isPlayer)
		bool L_0 = __this->___isPlayer_4;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// scoreKeeper.ModifyScore(score);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_1 = __this->___scoreKeeper_11;
		int32_t L_2 = __this->___score_6;
		ScoreKeeper_ModifyScore_mD511FE60DE51158C869DE39E0590AF30C94082D2(L_1, L_2, NULL);
		goto IL_0026;
	}

IL_001b:
	{
		// levelManager.LoadGameOver();
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3 = __this->___levelManager_12;
		LevelManager_LoadGameOver_m1515E21C14258B9D37D93563AF49499B67337A8F(L_3, NULL);
	}

IL_0026:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
		// }
		return;
	}
}
// System.Void Health::PlayHitEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_PlayHitEffect_mA2465C8985508F2CB204F74DBF5157852CA953DA (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m272A307F5FB892FB3D1DD65E677507E4D39088D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_0 = NULL;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(hitEffect!=null)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___hitEffect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// ParticleSystem instance = Instantiate(hitEffect,
		//                                         transform.position,
		//                                             Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___hitEffect_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6;
		L_6 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m272A307F5FB892FB3D1DD65E677507E4D39088D8(L_2, L_4, L_5, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m272A307F5FB892FB3D1DD65E677507E4D39088D8_RuntimeMethod_var);
		V_0 = L_6;
		// Destroy(instance.gameObject, instance.main.duration + instance.main.startLifetime.constantMax);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = V_0;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_10;
		L_10 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_1), NULL);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = V_0;
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_13;
		L_13 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_12, NULL);
		V_1 = L_13;
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_14;
		L_14 = MainModule_get_startLifetime_m09FB4B0E4B44A5B76E2DB11F177F770682BEA654((&V_1), NULL);
		V_2 = L_14;
		float L_15;
		L_15 = MinMaxCurve_get_constantMax_mBC9884017B40BDF911C768F521950370A6B41463((&V_2), NULL);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_8, ((float)il2cpp_codegen_add(L_11, L_15)), NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void Health::ShakeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_ShakeCamera_m9CA6801BC7FDE19A66E1284F3744329F46CEF00E (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cameraShake!=null && applyCameraShake)
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_0 = __this->___cameraShake_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->___applyCameraShake_9;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// cameraShake.Play();
		CameraShake_tAC55122F42E0B2A0581731E4C9799A5A8A0D7CA1* L_3 = __this->___cameraShake_8;
		CameraShake_Play_m1FAD63BE4F928640A4F6C0761A5A6B7F81851FB4(L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Int32 Health::GetHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Health_GetHealth_m448B1A594DD477CD4E5EB4C6BDF1BF71DD404512 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		int32_t L_0 = __this->___health_5;
		return L_0;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_m949A5A6E53120B1D58481C4A8235D324A8790C37 (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int health = 50;
		__this->___health_5 = ((int32_t)50);
		// [SerializeField] int score = 50;
		__this->___score_6 = ((int32_t)50);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_m5DEB1CF05B334C6E29A91D604623C1B8401AE09C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreKeeper = FindObjectOfType<ScoreKeeper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		__this->___scoreKeeper_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreKeeper_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void LevelManager::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadGame_mA22CB16787DB8CF0E811B82E0072E03021A65C71 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreKeeper.ResetScore();
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0 = __this->___scoreKeeper_5;
		ScoreKeeper_ResetScore_mD871C0F28D43DC29FB3042A2D1847522F8CA2759(L_0, NULL);
		// SceneManager.LoadScene("Game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::LoadMainManu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadMainManu_m63B6915C6CC12827F7D42F3952FD6D1F0DDC1B79 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::LoadGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_LoadGameOver_m1515E21C14258B9D37D93563AF49499B67337A8F (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(WaitAndLoad("GameOver", sceneLoadDelay));
		float L_0 = __this->___sceneLoadDelay_4;
		RuntimeObject* L_1;
		L_1 = LevelManager_WaitAndLoad_m3CEA8D4A8518345B999D90C9D3B092219658D94D(__this, _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void LevelManager::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_QuitGame_m5A62910F7BC4F5421B8D1FD287311A9897CDD75B (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0539D89225B11D87E304B1F633A5B969140E8BF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quitting Game...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0539D89225B11D87E304B1F633A5B969140E8BF3, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelManager::WaitAndLoad(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_WaitAndLoad_m3CEA8D4A8518345B999D90C9D3B092219658D94D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, String_t* ___sceneName0, float ___delay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* L_0 = (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA*)il2cpp_codegen_object_new(U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA_il2cpp_TypeInfo_var);
		U3CWaitAndLoadU3Ed__7__ctor_m850291CEA202F22CFC1CEBCFC1502B94604BFE49(L_0, 0, NULL);
		U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* L_1 = L_0;
		String_t* L_2 = ___sceneName0;
		L_1->___sceneName_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___sceneName_3), (void*)L_2);
		U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* L_3 = L_1;
		float L_4 = ___delay1;
		L_3->___delay_2 = L_4;
		return L_3;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float sceneLoadDelay = 2f;
		__this->___sceneLoadDelay_4 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelManager/<WaitAndLoad>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadU3Ed__7__ctor_m850291CEA202F22CFC1CEBCFC1502B94604BFE49 (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelManager/<WaitAndLoad>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadU3Ed__7_System_IDisposable_Dispose_mB36A3F3CC8FD5DB8D3EA2A3ED7AA56D2B77E728C (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelManager/<WaitAndLoad>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitAndLoadU3Ed__7_MoveNext_mA74DFBA4C567598AEEE2D82E0ADB449050F0853E (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(sceneName);
		String_t* L_5 = __this->___sceneName_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<WaitAndLoad>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndLoadU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m085BD0B4A4D3695B10D455430161283DD700379E (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelManager/<WaitAndLoad>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitAndLoadU3Ed__7_System_Collections_IEnumerator_Reset_mC2AB87CE1567468F5FFB68BAC6157451A95D1EAD (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitAndLoadU3Ed__7_System_Collections_IEnumerator_Reset_mC2AB87CE1567468F5FFB68BAC6157451A95D1EAD_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<WaitAndLoad>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitAndLoadU3Ed__7_System_Collections_IEnumerator_get_Current_mB15AA8BA988D19F5BB691B2B61A9AA0314DADF4E (U3CWaitAndLoadU3Ed__7_t346684D0EB5B0B0618601077834E7A705638D8AA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Pathfinder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Awake_m14ECB6E5F090F15D1859F367C1AC3DD84BFF1759 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_m7B183CE97FD01C548DD72DDB24EA5CFF3028F7BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemySpawner = FindObjectOfType<EnemySpawner>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0;
		L_0 = Object_FindObjectOfType_TisEnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_m7B183CE97FD01C548DD72DDB24EA5CFF3028F7BF(Object_FindObjectOfType_TisEnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_m7B183CE97FD01C548DD72DDB24EA5CFF3028F7BF_RuntimeMethod_var);
		__this->___enemySpawner_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemySpawner_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Pathfinder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Start_m82685A60EB258B206DE9742A0CDD8807111A7827 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waveConfig = enemySpawner.GetCurrentWave();
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0 = __this->___enemySpawner_4;
		WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_1;
		L_1 = EnemySpawner_GetCurrentWave_m9D88C34FBA2FF05415AD9F886C2C9B5B38BA6214_inline(L_0, NULL);
		__this->___waveConfig_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waveConfig_5), (void*)L_1);
		// wayPoints = waveConfig.GetWaypoints();
		WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_2 = __this->___waveConfig_5;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3;
		L_3 = WaveConfigSO_GetWaypoints_mE4558C6C985376F361F2D8C19ADAF72C1B692DF2(L_2, NULL);
		__this->___wayPoints_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wayPoints_6), (void*)L_3);
		// transform.position = wayPoints[wayPointIndex].position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = __this->___wayPoints_6;
		int32_t L_6 = __this->___wayPointIndex_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_5, L_6, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_8, NULL);
		// }
		return;
	}
}
// System.Void Pathfinder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_Update_m659C0D90D4019A82592783D8B98A8D1C8062A62A (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		// FollowPath();
		Pathfinder_FollowPath_m11244C2C77B05C0BCB1E41B42768257A642EE72A(__this, NULL);
		// }
		return;
	}
}
// System.Void Pathfinder::FollowPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder_FollowPath_m11244C2C77B05C0BCB1E41B42768257A642EE72A (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if(wayPointIndex<wayPoints.Count)
		int32_t L_0 = __this->___wayPointIndex_7;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_1 = __this->___wayPoints_6;
		int32_t L_2;
		L_2 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_1, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_008a;
		}
	}
	{
		// Vector3 targetPosition = wayPoints[wayPointIndex].position;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = __this->___wayPoints_6;
		int32_t L_4 = __this->___wayPointIndex_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_3, L_4, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
		// float delta = waveConfig.GetMoveSpeed() * Time.deltaTime;
		WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_7 = __this->___waveConfig_5;
		float L_8;
		L_8 = WaveConfigSO_GetMoveSpeed_mDE0057BAA18C3EA6C5A23F252DF3FD90D5E1BE24_inline(L_7, NULL);
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_8, L_9));
		// transform.position = Vector2.MoveTowards(transform.position, targetPosition, delta);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_14, NULL);
		float L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_13, L_15, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_17, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_18, NULL);
		// if(transform.position == targetPosition)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		bool L_22;
		L_22 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		// wayPointIndex++;
		int32_t L_23 = __this->___wayPointIndex_7;
		__this->___wayPointIndex_7 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}

IL_008a:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void Pathfinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pathfinder__ctor_m38C6CBBD38838E7E51FE1592504D2C3AFF247D36 (Pathfinder_t71ED3A6B9ABB73D6BE8B3AA188DBBBF78D7C30DB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisShooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD_mA77516CABCAA68AFC47ADAD1FDB4293B3774F6A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// shooter = GetComponent<Shooter>();
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_0;
		L_0 = Component_GetComponent_TisShooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD_mA77516CABCAA68AFC47ADAD1FDB4293B3774F6A1(__this, Component_GetComponent_TisShooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD_mA77516CABCAA68AFC47ADAD1FDB4293B3774F6A1_RuntimeMethod_var);
		__this->___shooter_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shooter_12), (void*)L_0);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// InitBounds();
		Player_InitBounds_m5B54D3709FD766F468E9CEB4206034244210E672(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::InitBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_InitBounds_m5B54D3709FD766F468E9CEB4206034244210E672 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	{
		// Camera mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		V_0 = L_0;
		// minBounds = mainCamera.ViewportToWorldPoint(new Vector2(0, 0));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_1, L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		__this->___minBounds_10 = L_5;
		// maxBounds = mainCamera.ViewportToWorldPoint(new Vector2(1, 1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_6, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_9, NULL);
		__this->___maxBounds_11 = L_10;
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 delta = rawInput * moveSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___rawInput_5;
		float L_1 = __this->___moveSpeed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// Vector2 newPos = new Vector2();
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// newPos.x = Mathf.Clamp(transform.position.x + delta.x, minBounds.x + paddingLeft , maxBounds.x - paddingRight);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___minBounds_10);
		float L_11 = L_10->___x_0;
		float L_12 = __this->___paddingLeft_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___maxBounds_11);
		float L_14 = L_13->___x_0;
		float L_15 = __this->___paddingRight_7;
		float L_16;
		L_16 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_7, L_9)), ((float)il2cpp_codegen_add(L_11, L_12)), ((float)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		(&V_1)->___x_0 = L_16;
		// newPos.y = Mathf.Clamp(transform.position.y + delta.y, minBounds.y + paddingBottom, maxBounds.y-paddingTop);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = L_18.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___minBounds_10);
		float L_23 = L_22->___y_1;
		float L_24 = __this->___paddingBottom_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___maxBounds_11);
		float L_26 = L_25->___y_1;
		float L_27 = __this->___paddingTop_8;
		float L_28;
		L_28 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_add(L_19, L_21)), ((float)il2cpp_codegen_add(L_23, L_24)), ((float)il2cpp_codegen_subtract(L_26, L_27)), NULL);
		(&V_1)->___y_1 = L_28;
		// transform.position = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_30, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_31, NULL);
		// }
		return;
	}
}
// System.Void Player::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnMove_mE479803C151BEF61894120A44548F9149C921D40 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rawInput = value.Get<Vector2>();
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___value0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		__this->___rawInput_5 = L_1;
		// }
		return;
	}
}
// System.Void Player::OnFire(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnFire_m16D255EB15DF565458A8860F75BE82D01CB6BBAA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(shooter != null)
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_0 = __this->___shooter_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// shooter.isFiring = value.isPressed;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_2 = __this->___shooter_12;
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_3 = ___value0;
		bool L_4;
		L_4 = InputValue_get_isPressed_m83E305196A51E4FDB9277B726ADBE9673D9F7A3F(L_3, NULL);
		L_2->___isFiring_11 = L_4;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float moveSpeed = 5f;
		__this->___moveSpeed_4 = (5.0f);
		// [SerializeField] float paddingLeft=0.5f;
		__this->___paddingLeft_6 = (0.5f);
		// [SerializeField] float paddingRight=0.5f;
		__this->___paddingRight_7 = (0.5f);
		// [SerializeField] float paddingTop=0.5f;
		__this->___paddingTop_8 = (0.5f);
		// [SerializeField] float paddingBottom=0.5f;
		__this->___paddingBottom_9 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreKeeper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_Awake_m050A9291F0CDE7168D344A63B9F012150FE5CCF3 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// ManageSingleton();
		ScoreKeeper_ManageSingleton_m91D498C5B8AD127EB4AD00D8ACCE974279E389F5(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreKeeper::ManageSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ManageSingleton_m91D498C5B8AD127EB4AD00D8ACCE974279E389F5 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0 = ((ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_il2cpp_TypeInfo_var))->___instance_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		return;
	}

IL_0025:
	{
		// instance = this;
		((ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_il2cpp_TypeInfo_var))->___instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_il2cpp_TypeInfo_var))->___instance_5), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_4, NULL);
		// }
		return;
	}
}
// System.Int32 ScoreKeeper::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreKeeper_GetScore_m04A2D5262FEA0FB4CE8657881804B85C7319592A (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// return score;
		int32_t L_0 = __this->___score_4;
		return L_0;
	}
}
// System.Void ScoreKeeper::ModifyScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ModifyScore_mD511FE60DE51158C869DE39E0590AF30C94082D2 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += value;
		int32_t L_0 = __this->___score_4;
		int32_t L_1 = ___value0;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// Mathf.Clamp(score, 0, int.MaxValue);
		int32_t L_2 = __this->___score_4;
		int32_t L_3;
		L_3 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_2, 0, ((int32_t)2147483647LL), NULL);
		// Debug.Log(score);
		int32_t L_4 = __this->___score_4;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// }
		return;
	}
}
// System.Void ScoreKeeper::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper_ResetScore_mD871C0F28D43DC29FB3042A2D1847522F8CA2759 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// score = 0;
		__this->___score_4 = 0;
		// }
		return;
	}
}
// System.Void ScoreKeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreKeeper__ctor_m2ACACD5BEC5B2FB90A3D014C60E3726F789EE357 (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Shooter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter_Awake_m6F279A8A6A8D49AD9DFD21877147029A796199EC (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioPlayer = FindObjectOfType<AudioPlayer>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_0;
		L_0 = Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402(Object_FindObjectOfType_TisAudioPlayer_tB8610995483B0D47636473026A32C5916B855803_m9F4DBB830CBDF8ADD86F35819F6352568D21D402_RuntimeMethod_var);
		__this->___audioPlayer_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioPlayer_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void Shooter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter_Start_mC231D6BCE5003EB8672E1FB0C1632A0879BA8F0C (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	{
		// if(useAI)
		bool L_0 = __this->___useAI_8;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// isFiring = true;
		__this->___isFiring_11 = (bool)1;
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Shooter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter_Update_m4CF51BDD53E2C109EBDF610A122F2B9BE259D11F (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	{
		// Fire();
		Shooter_Fire_m9D304C5704D2F1F765F66C8C2D28F5F57121E3ED(__this, NULL);
		// }
		return;
	}
}
// System.Void Shooter::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter_Fire_m9D304C5704D2F1F765F66C8C2D28F5F57121E3ED (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	{
		// if(isFiring && firingCoroutine == null)
		bool L_0 = __this->___isFiring_11;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___firingCoroutine_12;
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// firingCoroutine = StartCoroutine(FireContiniously());
		RuntimeObject* L_2;
		L_2 = Shooter_FireContiniously_mB429DFDFA85567221EE9CE43F00D44B0AE088FE0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->___firingCoroutine_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firingCoroutine_12), (void*)L_3);
		return;
	}

IL_0023:
	{
		// else if(!isFiring && firingCoroutine != null)
		bool L_4 = __this->___isFiring_11;
		if (L_4)
		{
			goto IL_0046;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5 = __this->___firingCoroutine_12;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// StopCoroutine(firingCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6 = __this->___firingCoroutine_12;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_6, NULL);
		// firingCoroutine = null;
		__this->___firingCoroutine_12 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firingCoroutine_12), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Shooter::FireContiniously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Shooter_FireContiniously_mB429DFDFA85567221EE9CE43F00D44B0AE088FE0 (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* L_0 = (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB*)il2cpp_codegen_object_new(U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB_il2cpp_TypeInfo_var);
		U3CFireContiniouslyU3Ed__14__ctor_m04EB600D1B00FA186CFB09E84C42706F4D588377(L_0, 0, NULL);
		U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Shooter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shooter__ctor_m3F584E83D82A0E5BD60AC1579AF877102CA981DF (Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float projectileSpeed = 10f;
		__this->___projectileSpeed_5 = (10.0f);
		// [SerializeField] float projectileLifetime = 5f;
		__this->___projectileLifetime_6 = (5.0f);
		// [SerializeField] float baseFiringRate = 0.2f;
		__this->___baseFiringRate_7 = (0.200000003f);
		// [SerializeField] float minFiringRate = 0.1f;
		__this->___minFiringRate_10 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Shooter/<FireContiniously>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContiniouslyU3Ed__14__ctor_m04EB600D1B00FA186CFB09E84C42706F4D588377 (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Shooter/<FireContiniously>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContiniouslyU3Ed__14_System_IDisposable_Dispose_mBA68475EB1CA0763A60A1704726A3B6E53C89165 (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Shooter/<FireContiniously>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFireContiniouslyU3Ed__14_MoveNext_mFB16B87366B3B212EAFA34FED4429BE12A50D3E4 (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* V_1 = NULL;
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* V_2 = NULL;
	float V_3 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ca;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0021:
	{
		// GameObject instance = Instantiate(projectilePrefab,
		//                                   transform.position,
		//                                   Quaternion.identity);
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___projectilePrefab_4;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Rigidbody2D rb = instance.GetComponent<Rigidbody2D>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_11, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		V_2 = L_12;
		// if(rb != null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_13 = V_2;
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B5_0 = L_11;
		if (!L_14)
		{
			G_B6_0 = L_11;
			goto IL_006d;
		}
	}
	{
		// rb.velocity = transform.up * projectileSpeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_15 = V_2;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_16 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_17, NULL);
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_19 = V_1;
		float L_20 = L_19->___projectileSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_21, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_15, L_22, NULL);
		G_B6_0 = G_B5_0;
	}

IL_006d:
	{
		// Destroy(instance, projectileLifetime);
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_23 = V_1;
		float L_24 = L_23->___projectileLifetime_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(G_B6_0, L_24, NULL);
		// float timeToNextProjectile = Random.Range(baseFiringRate - firingRateVariance,
		//                                             baseFiringRate + firingRateVariance);
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_25 = V_1;
		float L_26 = L_25->___baseFiringRate_7;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_27 = V_1;
		float L_28 = L_27->___firingRateVariance_9;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_29 = V_1;
		float L_30 = L_29->___baseFiringRate_7;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_31 = V_1;
		float L_32 = L_31->___firingRateVariance_9;
		float L_33;
		L_33 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_subtract(L_26, L_28)), ((float)il2cpp_codegen_add(L_30, L_32)), NULL);
		V_3 = L_33;
		// timeToNextProjectile = Mathf.Clamp(timeToNextProjectile, minFiringRate, float.MaxValue);
		float L_34 = V_3;
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_35 = V_1;
		float L_36 = L_35->___minFiringRate_10;
		float L_37;
		L_37 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_34, L_36, ((std::numeric_limits<float>::max)()), NULL);
		V_3 = L_37;
		// audioPlayer.PlayShootingClip();
		Shooter_tC03C97259A73AECBD61C235A503DF31E5E4C0CBD* L_38 = V_1;
		AudioPlayer_tB8610995483B0D47636473026A32C5916B855803* L_39 = L_38->___audioPlayer_13;
		AudioPlayer_PlayShootingClip_m282EEA732DA6D0C40D8E145BB8FC133FFB4941B3(L_39, NULL);
		// yield return new WaitForSeconds(timeToNextProjectile);
		float L_40 = V_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_41 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_41, L_40, NULL);
		__this->___U3CU3E2__current_1 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ca:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while(true)
		goto IL_0021;
	}
}
// System.Object Shooter/<FireContiniously>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireContiniouslyU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m272C086BE398D80370148838EACADD70D8193BAE (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Shooter/<FireContiniously>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFireContiniouslyU3Ed__14_System_Collections_IEnumerator_Reset_mE5DB8BEC7622583B632886A538365A43EAA43BD1 (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFireContiniouslyU3Ed__14_System_Collections_IEnumerator_Reset_mE5DB8BEC7622583B632886A538365A43EAA43BD1_RuntimeMethod_var)));
	}
}
// System.Object Shooter/<FireContiniously>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFireContiniouslyU3Ed__14_System_Collections_IEnumerator_get_Current_mF00722FDAF4A12C1900BEE033580A90F5EAD29FC (U3CFireContiniouslyU3Ed__14_t13FCFD144FC727F54B13B3CE23C3468A5EF441CB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SpriteScroller::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteScroller_Awake_m9901200197F719B278C010E03ACD8386E95C2477 (SpriteScroller_t7059AD78CCE7EF289703970534D779FA7383AA97* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// material = GetComponent<SpriteRenderer>().material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->___material_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void SpriteScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteScroller_Update_m7AFCA3193176CF0D9129C8FD5F8993F33B3EB402 (SpriteScroller_t7059AD78CCE7EF289703970534D779FA7383AA97* __this, const RuntimeMethod* method) 
{
	{
		// offset = moveSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___moveSpeed_4;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_0, L_1, NULL);
		__this->___offset_5 = L_2;
		// material.mainTextureOffset += offset;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___material_6;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Material_get_mainTextureOffset_m642934E0FF835323FCAFE2F43E314722E8B6A439(L_4, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___offset_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_5, L_6, NULL);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_4, L_7, NULL);
		// }
		return;
	}
}
// System.Void SpriteScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteScroller__ctor_m017C5AD0AD947D56EA8EEA4A7E9717F913D40E46 (SpriteScroller_t7059AD78CCE7EF289703970534D779FA7383AA97* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIDisplay::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay_Awake_m8B579395041FAE197FDD764898C165FFA25116A1 (UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreKeeper = FindObjectOfType<ScoreKeeper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		__this->___scoreKeeper_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreKeeper_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void UIDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay_Start_mCC4BB37A0E20A9C63086AA0E219F1E5CFE5CE5A1 (UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB* __this, const RuntimeMethod* method) 
{
	{
		// healthSlider.maxValue = playerHealth.GetHealth();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthSlider_4;
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_1 = __this->___playerHealth_5;
		int32_t L_2;
		L_2 = Health_GetHealth_m448B1A594DD477CD4E5EB4C6BDF1BF71DD404512_inline(L_1, NULL);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, ((float)L_2), NULL);
		// }
		return;
	}
}
// System.Void UIDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay_Update_mEB5B618819E9498382F08F98C78D3C8E558B9AE3 (UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral613EAD396EE09ED2D9E7B60CAF5EA5B0F4F01CAB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// healthSlider.value = playerHealth.GetHealth();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthSlider_4;
		Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* L_1 = __this->___playerHealth_5;
		int32_t L_2;
		L_2 = Health_GetHealth_m448B1A594DD477CD4E5EB4C6BDF1BF71DD404512_inline(L_1, NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_2));
		// scoreText.text = scoreKeeper.GetScore().ToString("000000000");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___scoreText_6;
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_4 = __this->___scoreKeeper_7;
		int32_t L_5;
		L_5 = ScoreKeeper_GetScore_m04A2D5262FEA0FB4CE8657881804B85C7319592A_inline(L_4, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteral613EAD396EE09ED2D9E7B60CAF5EA5B0F4F01CAB, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_6);
		// }
		return;
	}
}
// System.Void UIDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIDisplay__ctor_mEAFC4E0DD3B73D3017B1845DEED7E06C22EB186C (UIDisplay_tBB5577A95F0FAB62FF4CB051A081125F931826AB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIGameOver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Awake_mF408243A5D88A43003152BBF97CC71C64B5EABB3 (UIGameOver_tF34D0F8F57AF84A2F74A857D2E8B22B792EE508B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreKeeper = FindObjectOfType<ScoreKeeper>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_0;
		L_0 = Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93(Object_FindObjectOfType_TisScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492_m0995C366440E3DECFC6654CB12562550B4D58F93_RuntimeMethod_var);
		__this->___scoreKeeper_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreKeeper_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void UIGameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Start_m02D287E24364D729DC99296364724921CC5FFC36 (UIGameOver_tF34D0F8F57AF84A2F74A857D2E8B22B792EE508B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E9E616B73C325C8F1C613AB03D89BDF46E71365);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "You scored:\n" + scoreKeeper.GetScore();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_4;
		ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* L_1 = __this->___scoreKeeper_5;
		int32_t L_2;
		L_2 = ScoreKeeper_GetScore_m04A2D5262FEA0FB4CE8657881804B85C7319592A_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3E9E616B73C325C8F1C613AB03D89BDF46E71365, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void UIGameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver__ctor_mEF7D2B1E4AD5FE7A98604E6080CB0DD64A853DE0 (UIGameOver_tF34D0F8F57AF84A2F74A857D2E8B22B792EE508B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Transform WaveConfigSO::GetStartingWaypoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* WaveConfigSO_GetStartingWaypoint_mF88D5D885D4B96776D1B842C2FC31413161A6300 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	{
		// return pathPrefab.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___pathPrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Transform> WaveConfigSO::GetWaypoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* WaveConfigSO_GetWaypoints_mE4558C6C985376F361F2D8C19ADAF72C1B692DF2 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// List<Transform> wayPoints = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_0;
		// foreach(Transform child in pathPrefab)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___pathPrefab_5;
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0014_1:
			{
				// foreach(Transform child in pathPrefab)
				RuntimeObject* L_6 = V_1;
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// wayPoints.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = V_0;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_2;
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_8, L_9, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
			}

IL_0027_1:
			{
				// foreach(Transform child in pathPrefab)
				RuntimeObject* L_10 = V_1;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// return wayPoints;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_12 = V_0;
		return L_12;
	}
}
// System.Single WaveConfigSO::GetMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfigSO_GetMoveSpeed_mDE0057BAA18C3EA6C5A23F252DF3FD90D5E1BE24 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	{
		// return moveSpeed;
		float L_0 = __this->___moveSpeed_6;
		return L_0;
	}
}
// System.Int32 WaveConfigSO::GetEnemyCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveConfigSO_GetEnemyCount_m85967DE3BE78333508132CC4221B28AE4B516D3C (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enemyPrefabs.Count;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemyPrefabs_4;
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.GameObject WaveConfigSO::GetEnemyPrefab(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WaveConfigSO_GetEnemyPrefab_m6F81A58D2DAE54F108D995AD18529A78A6CA15D9 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enemyPrefabs[index];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemyPrefabs_4;
		int32_t L_1 = ___index0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		return L_2;
	}
}
// System.Single WaveConfigSO::GetRandomSpawnTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaveConfigSO_GetRandomSpawnTime_mF6460E05699A68A9AAD9AF6925E4BC051522F6DD (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	{
		// float spawnTime = Random.Range(timeBetweenEnemySpawns - spawnTimeVariance,
		//                                 timeBetweenEnemySpawns + spawnTimeVariance);
		float L_0 = __this->___timeBetweenEnemySpawns_7;
		float L_1 = __this->___spawnTimeVariance_8;
		float L_2 = __this->___timeBetweenEnemySpawns_7;
		float L_3 = __this->___spawnTimeVariance_8;
		float L_4;
		L_4 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_add(L_2, L_3)), NULL);
		// return Mathf.Clamp(spawnTime, minSpawnTime, float.MaxValue);
		float L_5 = __this->___minSpawnTime_9;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, ((std::numeric_limits<float>::max)()), NULL);
		return L_6;
	}
}
// System.Void WaveConfigSO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveConfigSO__ctor_mD908AFF01F00B99A6257FC8622EA862A99C68260 (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float moveSpeed = 5f;
		__this->___moveSpeed_6 = (5.0f);
		// [SerializeField] float timeBetweenEnemySpawns = 1f;
		__this->___timeBetweenEnemySpawns_7 = (1.0f);
		// [SerializeField] float minSpawnTime = 0.2f;
		__this->___minSpawnTime_9 = (0.200000003f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DamageDealer_GetDamage_m72D67ABCF377719E475EC121BC0640EF4351F483_inline (DamageDealer_t4DB4787B0BB5F04E68A901932BEE0CF9FA0BA386* __this, const RuntimeMethod* method) 
{
	{
		// return damage;
		int32_t L_0 = __this->___damage_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* EnemySpawner_GetCurrentWave_m9D88C34FBA2FF05415AD9F886C2C9B5B38BA6214_inline (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// return currentWave;
		WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* L_0 = __this->___currentWave_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float WaveConfigSO_GetMoveSpeed_mDE0057BAA18C3EA6C5A23F252DF3FD90D5E1BE24_inline (WaveConfigSO_tAA279BE4B9D47868BB1F9D2DA9B253737CDD7B52* __this, const RuntimeMethod* method) 
{
	{
		// return moveSpeed;
		float L_0 = __this->___moveSpeed_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Health_GetHealth_m448B1A594DD477CD4E5EB4C6BDF1BF71DD404512_inline (Health_t1ED9B3565743C4664CA097759AFE6D7B6A6DF2B1* __this, const RuntimeMethod* method) 
{
	{
		// return health;
		int32_t L_0 = __this->___health_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ScoreKeeper_GetScore_m04A2D5262FEA0FB4CE8657881804B85C7319592A_inline (ScoreKeeper_tB7132D9BFE1E78E0A894A9A29FD4B83B37262492* __this, const RuntimeMethod* method) 
{
	{
		// return score;
		int32_t L_0 = __this->___score_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
