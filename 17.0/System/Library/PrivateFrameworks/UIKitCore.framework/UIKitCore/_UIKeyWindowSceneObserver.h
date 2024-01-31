@class UIScene, NSString, _UIKeyWindowEvaluator;

@interface _UIKeyWindowSceneObserver : NSObject <_UISceneComponentProviding> {
    _UIKeyWindowEvaluator *_keyWindowEvaluator;
    struct { unsigned char sceneIsObservable : 1; } _observerFlags;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_sceneWillInvalidate:(id)a0;
- (id)init;
- (id)_settingsDiffActionsForScene:(id)a0;
- (void)_scene:(id)a0 willTransitionToActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end
