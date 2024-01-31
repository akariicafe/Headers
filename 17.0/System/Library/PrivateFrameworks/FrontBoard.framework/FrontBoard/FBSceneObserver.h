@class NSString;
@protocol FBSceneComponent, FBSceneObserver, FBSceneDelegate;

@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate, FBSceneComponent> {
    unsigned long long _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    struct { BOOL contentStateDidChange; BOOL updatePrepared; BOOL updateApplied; BOOL updateCompleted; BOOL clientSettingsUpdated; BOOL didActivate; BOOL willDeactivateWithError; BOOL didInvalidate; BOOL clientDidConnect; BOOL handleActions; } _observerFlags;
    struct { BOOL willUpdateScene; BOOL didReceiveActions; BOOL didDeactivateWithError; } _delegateFlags;
    struct { BOOL willUpdateSettings; } _componentFlags;
}

@property (readonly, weak, nonatomic) id<FBSceneObserver> observer;
@property (readonly, weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly, nonatomic) id<FBSceneComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (void)scene:(id)a0 didPrepareUpdateWithContext:(id)a1;
- (BOOL)delegateHandlesActions;
- (id)_initWithObserver:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (id)initWithObserver:(id)a0;
- (id)initWithComponent:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)succinctDescriptionBuilder;
- (id)initWithScene:(id)a0;
- (BOOL)isDelegate;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (void)invalidate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)scene:(id)a0 handleActions:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)succinctDescription;
- (void)configureInitialSettings:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;

@end
