@class UIWindowScene, NSString, MRUAudioModuleController, MRUVisualStylingProvider, MRUVolumeView, NSArray, UIViewPropertyAnimator;
@protocol MRUVolumeViewControllerDelegate;

@interface MRUVolumeViewController : UIViewController <MRUAudioModuleControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, CCUIContentModuleContentViewController>

@property (retain, nonatomic) MRUVolumeView *view;
@property (retain, nonatomic) MRUVolumeView *viewIfLoaded;
@property (retain, nonatomic) MRUAudioModuleController *audioModuleController;
@property (weak, nonatomic) id<MRUVolumeViewControllerDelegate> delegate;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL primaryInteractionEnabled;
@property (nonatomic) BOOL secondaryInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (void)updateSliderAsset;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)updateSecondarySliderVolumeValueAnimated:(BOOL)a0;
- (void)increaseTouchUpInside:(id)a0;
- (void)audioModuleController:(id)a0 volumeController:(id)a1 didChangeVolumeControlCapabilities:(unsigned int)a2 effectiveVolumeValue:(float)a3 forType:(long long)a4;
- (id)initWithAudioModuleController:(id)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)viewDidLoad;
- (void)primarySliderValueDidChange:(id)a0;
- (void)audioModuleController:(id)a0 systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a1;
- (void)audioModuleController:(id)a0 systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a1;
- (void)audioModuleController:(id)a0 spatialAudioController:(id)a1 didChangeAvailableSpatialModes:(id)a2;
- (void)loadView;
- (void)updatePrimarySliderVolumeValueAnimated:(BOOL)a0;
- (void)updateVisibility;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)secondarySliderValueDidChange:(id)a0;
- (void)updateSliderInteractionEnabled;
- (void)decreaseTouchUpInside:(id)a0;
- (void)updatePrimarySliderVolumeValueAfterDelay;

@end
