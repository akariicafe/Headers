@class BLSBacklightSceneUpdateContext;
@protocol BLSBacklightSceneEnvironment_Private;

@interface BLSBacklightSceneUpdate : NSObject {
    id /* block */ _sceneContentsUpdatedBlock;
    id /* block */ _performBacklightRampBlock;
    id /* block */ _sceneContentsAnimationCompleteBlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_sceneContentsUpdated;
    BOOL _lock_didStartBacklightRamp;
    BOOL _lock_animationComplete;
}

@property (readonly, nonatomic) BOOL isUpdateToDateSpecifier;
@property (readonly, weak, nonatomic) id<BLSBacklightSceneEnvironment_Private> environment;
@property (readonly, nonatomic) BLSBacklightSceneUpdateContext *context;
@property (readonly, nonatomic, getter=areSceneContentsUpdated) BOOL sceneContentsUpdated;
@property (readonly, nonatomic) BOOL didStartBacklightRamp;
@property (readonly, nonatomic, getter=isAnimationComplete) BOOL animationComplete;

- (id)initForEnvironment:(id)a0 visualState:(id)a1 previousVisualState:(id)a2 frameSpecifier:(id)a3 animated:(BOOL)a4 triggerEvent:(id)a5 touchTargetable:(BOOL)a6 isUpdateToDateSpecifier:(BOOL)a7 sceneContentsUpdated:(id /* block */)a8 performBacklightRamp:(id /* block */)a9 sceneContentsAnimationComplete:(id /* block */)a10;
- (unsigned long long)hash;
- (id)description;
- (void)sceneContentsAnimationDidComplete;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)setReplacedSceneUpdate:(id)a0;
- (void)performBacklightRampWithDuration:(double)a0;
- (void)sceneContentsDidUpdate;

@end
