@class PBUIColorStatistics, NSString, PBUIGradientView, MTMaterialView, BSUIOrientationTransformWrapperView, PRPosterHomeScreenConfiguration, PBUIEffectTrackingReplicaView;

@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController <PBUIEffectTrackingReplicaViewDelegate> {
    long long _currentMode;
    PRPosterHomeScreenConfiguration *_homeConfiguration;
    PBUIEffectTrackingReplicaView *_effectView;
    PBUIGradientView *_gradientView;
    PBUIColorStatistics *_fixedColorStatistics;
    MTMaterialView *_wallpaperCaptureView;
    long long _initialOrientation;
    long long _mostRecentOrientation;
    BOOL _isUpdatingOrientation;
    BSUIOrientationTransformWrapperView *_dynamicWrapperView;
}

@property (readonly, nonatomic) BOOL isBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)presentationModeForHomeConfiguration:(id)a0;

- (id)averageColor;
- (void)performSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (double)unlockProgress;
- (BOOL)updatePresentation;
- (void)viewDidLayoutSubviews;
- (void)effectTrackingReplicaViewHasValidSnapshot:(id)a0;
- (void)viewDidLoad;
- (BOOL)reflectsLock;
- (void)_updateRotationForOrientation:(long long)a0;
- (void)noteWillRotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (BOOL)canShowSnapshot;
- (BOOL)showsSnapshotWhenIdleForMode:(long long)a0;
- (void)configureEffectViewForMode;
- (BOOL)isSettledPosition;
- (double)averageContrast;
- (void).cxx_destruct;
- (id)contentColorStatistics;
- (void)setCounterpart:(id)a0;
- (void)noteDidRotateToInterfaceOrientation:(long long)a0;
- (void)setFixedAverageColor:(id)a0;
- (BOOL)areSettingsAppropriateForSnapshotting:(id)a0;
- (id)homeScreenConfiguration;
- (BOOL)evaluateSnapshotPreconditions;
- (long long)variant;
- (double)weightingForEffectView;
- (id)_descriptorIdentity;
- (BOOL)updateGradientViewWithGradient:(id)a0;

@end
