@class BSAbsoluteMachTimer, NSMapTable, UIScene, NSString, UITraitCollection;

@interface ACUISActivitySceneComponent : NSObject <_UIWindowSceneComponentProviding, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMapTable *dependencyRecognizersPerWindow;
@property (retain, nonatomic) NSMapTable *recognizersPerWindow;
@property (retain, nonatomic) BSAbsoluteMachTimer *delayedGestureActionTimer;
@property (readonly, nonatomic) UITraitCollection *_traitOverrides;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)dealloc;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;
- (void)_sendActions:(id)a0;
- (void)_handleGestureDependencyChange:(id)a0;
- (void)_handleGestureChange:(id)a0;
- (void)_handleGestureState:(long long)a0;
- (void)_windowBecameHidden:(id)a0;
- (void)_windowDidBecomeVisible:(id)a0;
- (BOOL)isActivityScene:(id)a0;

@end
