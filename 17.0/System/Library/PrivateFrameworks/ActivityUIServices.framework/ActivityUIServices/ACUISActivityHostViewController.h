@class UIColor, NSString, NSArray, _TtC18ActivityUIServices26ActivityHostViewController, ACUISActivitySceneDescriptor;
@protocol BLSHBacklightSceneHostEnvironment, ACUISActivityHostViewControllerDelegate;

@interface ACUISActivityHostViewController : UIViewController <ActivityUIServices.ActivityHostViewControllerDelegate, ACUISActivitySceneHosting, BSInvalidatable> {
    _TtC18ActivityUIServices26ActivityHostViewController *_activityHostViewController;
}

@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> backlightHostEnvironment;
@property (weak, nonatomic) id<ACUISActivityHostViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) UIColor *backgroundTintColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSArray *hostIgnoredTouchedRects;
@property (readonly, nonatomic) BOOL idleTimerDisabled;
@property (readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACUISActivitySceneDescriptor *activitySceneDescriptor;

- (void)dealloc;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (void)viewDidLoad;
- (void)invalidate;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)setShouldShareTouchesWithHost:(BOOL)a0;
- (void)ensureContent:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithActivityHostViewController:(id)a0;
- (void)activityHostViewControllerTextColorDidChangeWithViewController:(id)a0;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChangeWithViewController:(id)a0;
- (void)activityHostViewControllerBackgroundTintColorDidChangeWithViewController:(id)a0;
- (void)activityHostViewControllerHostShouldCancelTouchesWithViewController:(id)a0;
- (void)activityHostViewControllerSignificantUserInteractionBeganWithViewController:(id)a0;
- (void)activityHostViewControllerSignificantUserInteractionEndedWithViewController:(id)a0;
- (void)activityHostViewControllerWithViewController:(id)a0 didSetIdleTimerDisabled:(BOOL)a1;
- (void)activityHostViewControllerWithViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (unsigned int)swiftPresentationMode:(unsigned long long)a0;

@end
