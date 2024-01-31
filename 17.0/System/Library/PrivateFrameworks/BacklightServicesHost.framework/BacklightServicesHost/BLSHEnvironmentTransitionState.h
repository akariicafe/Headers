@class BLSHEnvironmentTransitionStateTarget;
@protocol BLSHBacklightSceneHostEnvironment, BLSHEnvironmentTransitionStateDelegate;

@interface BLSHEnvironmentTransitionState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHEnvironmentTransitionStateDelegate> _delegate;
    BLSHEnvironmentTransitionStateTarget *_lock_requestingFidelityTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_inProgressUpdateTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_animationCompletedForOldTarget;
    BLSHEnvironmentTransitionStateTarget *_lock_animationCompletedWithNewTarget;
    unsigned long long _lock_nextSequenceID;
    BOOL _lock_animating;
}

@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, nonatomic, getter=isUpdatingInitialState) BOOL updatingInitialState;
@property (readonly, nonatomic, getter=isUpdatingVisualState) BOOL updatingVisualState;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

+ (id)createStateForEnvironment:(id)a0 delegate:(id)a1;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void)dealloc;
- (void)updateToDateSpecifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)updateToBacklightState:(long long)a0 forEvent:(id)a1 touchTargetable:(BOOL)a2 presentationDate:(id)a3 sceneUpdate:(id)a4 performBacklightRamp:(id /* block */)a5;
- (BOOL)isUpdatedToBacklightState:(long long)a0;

@end
