@class NSArray, _TtC18ActivityUIServices20ActivitySceneMetrics, NSString, ACActivityDescriptor;
@protocol BLSHBacklightSceneHostEnvironment;

@interface ActivityUIServices.ActivityHostViewController : UIViewController <FBSceneDelegate, FBSceneLayerManagerObserver, ActivityUIServices.ActivitySceneHosting, BSInvalidatable> {
    void /* unknown type, empty encoding */ _presentationMode;
    void /* unknown type, empty encoding */ audioCategoriesDisablingVolumeHUD;
    void /* unknown type, empty encoding */ activityTouchRestrictedRects;
    void /* unknown type, empty encoding */ settingsDiffInspector;
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ sceneForeground;
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ scenePresenter;
    void /* unknown type, empty encoding */ activatedSceneView;
    void /* unknown type, empty encoding */ liveSceneSnapshotView;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ processResource;
    void /* unknown type, empty encoding */ presentationAssertion;
    void /* unknown type, empty encoding */ waitingForArchiveContentReady;
    void /* unknown type, empty encoding */ waitingForArchiveContentReadyBlocks;
    void /* unknown type, empty encoding */ waitingForInitialContentSizeReadyBlocks;
    void /* unknown type, empty encoding */ sceneActivated;
    void /* unknown type, empty encoding */ sceneActivatedBlocks;
    void /* unknown type, empty encoding */ touchDeliveryPolicyAssertions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
    void /* unknown type, empty encoding */ backOffTimer;
    void /* unknown type, empty encoding */ ensureContentTimer;
    void /* unknown type, empty encoding */ sceneClientExitCountWithinTimeout;
    void /* unknown type, empty encoding */ sceneClientExitTimer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ activitySceneDescriptor;
@property (nonatomic, readonly) ACActivityDescriptor *acActivityDescriptor;
@property (nonatomic) unsigned int presentationMode;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundTintColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ textColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ resolvedMetrics;
@property (nonatomic) void /* unknown type, empty encoding */ idleTimerDisabled;
@property (nonatomic, copy) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic, copy) NSArray *activityTouchRestrictedRects;
@property (nonatomic, retain) void /* unknown type, empty encoding */ systemProvidedMetrics;
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *fallbackMetrics;
@property (nonatomic, readonly) id<BLSHBacklightSceneHostEnvironment> backlightHostEnvironment;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) void /* unknown type, empty encoding */ shouldShareTouchesWithHost;

- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (void)sceneDidActivate:(id)a0;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)viewDidLoad;
- (void)invalidate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)ensureContentWithTimeout:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithActivitySceneDescriptor:(id)a0;

@end
