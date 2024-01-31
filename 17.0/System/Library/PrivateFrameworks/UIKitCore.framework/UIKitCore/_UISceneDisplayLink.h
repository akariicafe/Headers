@class UIScene, NSString, CADisplayLink, NSMutableArray;

@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding> {
    NSMutableArray *_targetsAndActions;
    CADisplayLink *_displayLink;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneDisplayLinkForWindowScene:(id)a0;

- (id)initWithScene:(id)a0;
- (void)_displayLinkTick:(id)a0;
- (void)_updateStatus;
- (void)unregisterTarget:(id)a0 action:(SEL)a1;
- (void)registerTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)_scene:(id)a0 didTransitionFromActivationState:(long long)a1 withReasonsMask:(unsigned long long)a2;

@end
