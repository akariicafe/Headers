@class ACUISActivityHostViewController, NSSet, SBActivityItem, NSString;
@protocol SBActivityViewControllerDelegate;

@interface SBActivityViewController : UIViewController <ACUISActivityHostViewControllerDelegate>

@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController;
@property (weak, nonatomic) id<SBActivityViewControllerDelegate> delegate;
@property (readonly, nonatomic) SBActivityItem *activityItem;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredActivityContentSize;
@property (readonly, nonatomic) BOOL wantsIdleTimerDisabled;
@property (readonly, nonatomic) NSSet *audioCategoriesDisablingVolumeHUD;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long visibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)ensureContent:(double)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_unlockAndLaunchAppIfPossible:(id)a0 withAction:(id)a1;
- (void)activityHostViewController:(id)a0 didSetIdleTimerDisabled:(BOOL)a1;
- (void)activityHostViewController:(id)a0 requestsLaunchWithAction:(id)a1;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChange:(id)a0;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)a0;
- (void)activityHostViewControllerHostShouldCancelTouches:(id)a0;
- (id)initWithActivityItem:(id)a0 sceneType:(long long)a1 payloadID:(id)a2;
- (id)initWithActivityItem:(id)a0 viewController:(id)a1;

@end
