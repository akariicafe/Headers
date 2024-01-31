@class NSHashTable, NSString, RBSProcessIdentity, SBScreenSleepCoordinator, NSDate, BLSBacklightSceneVisualState, NSUUID;

@interface SBScreenSleepCoordinatorBacklightEnvironment : NSObject <BLSHBacklightSceneHostEnvironment> {
    SBScreenSleepCoordinator *_screenSleepCoordinator;
    NSUUID *_uuid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_lock_observers;
    BLSBacklightSceneVisualState *_lock_visualState;
    NSDate *_lock_presentationDate;
    BOOL _lock_alwaysOnEnabledForEnvironment;
    BOOL _lock_liveUpdating;
    BOOL _lock_unrestrictedFramerateUpdates;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (readonly) BOOL clientHasDelegate;
@property (readonly, getter=isClientActive) BOOL clientActive;
@property (readonly) BLSBacklightSceneVisualState *visualState;
@property (readonly) NSDate *presentationDate;
@property (readonly) BOOL clientSupportsAlwaysOn;
@property (readonly, getter=isLocal) BOOL local;
@property (getter=isAlwaysOnEnabledForEnvironment) BOOL alwaysOnEnabledForEnvironment;
@property (getter=isLiveUpdating) BOOL liveUpdating;
@property (getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property (getter=isDisplayBlanked) BOOL displayBlanked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateToDateSpecifier:(id)a0 sceneContentsUpdated:(id /* block */)a1;
- (void)clientDidRequestInvalidationForReason:(id)a0;
- (void)requestDateSpecifiersForDateInterval:(id)a0 previousPresentationDate:(id)a1 shouldReset:(BOOL)a2 completion:(id /* block */)a3;
- (void)willEndRenderSession:(id)a0;
- (void)deactivateClient;
- (void)removeObserver:(id)a0;
- (void)clearPresentationDate;
- (void)willBeginRenderSession:(id)a0;
- (id)initWithCoordinator:(id)a0;
- (void)updateToVisualState:(id)a0 presentationDateSpecifier:(id)a1 animated:(BOOL)a2 triggerEvent:(id)a3 touchTargetable:(BOOL)a4 sceneContentsUpdated:(id /* block */)a5 performBacklightRamp:(id /* block */)a6 animationComplete:(id /* block */)a7;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)invalidateContentForReason:(id)a0;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)a0;

@end
