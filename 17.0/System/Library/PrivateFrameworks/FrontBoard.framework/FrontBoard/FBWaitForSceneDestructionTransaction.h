@class FBScene, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <FBSceneObserver>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)sceneDidInvalidate:(id)a0;
- (void)_begin;
- (void)dealloc;
- (id)initWithScene:(id)a0;
- (void).cxx_destruct;

@end
