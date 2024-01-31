@class ACUISActivityHostViewController, NSArray, NSString;
@protocol CSListItemSceneHostEnvironmentObserving, BSInvalidatable;

@interface CSActivityItemViewController : UIViewController <CSActivityItemContentViewSizeProviding, NCNotificationListSupplementaryViewPresentable, CSListItemHosting, SBFBacklightSceneHostEnvironmentProviding>

@property (retain, nonatomic) ACUISActivityHostViewController *activityHostViewController;
@property (retain, nonatomic) id<BSInvalidatable> restrictsTouchesAssertion;
@property (nonatomic, getter=isContentVisible) BOOL contentVisible;
@property (readonly, nonatomic) NSArray *activityHostTouchRestrictedRects;
@property (weak, nonatomic) id<CSListItemSceneHostEnvironmentObserving> sceneHostEnvironmentObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isScreenOn) BOOL screenOn;
@property (nonatomic, getter=isListAppeared) BOOL listAppeared;
@property (nonatomic) double containerCornerRadius;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)setPresentationMode:(unsigned long long)a0;
- (void)viewDidLoad;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)notificationListSupplementaryViewPresentableContentWillBecomeVisible:(BOOL)a0;
- (void)_invalidateRestrictsTouchesAssertion;
- (void)_updatePresentationModeWithReason:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeForContentView:(id)a0;
- (id)initWithActivityHostViewController:(id)a0;
- (void)restrictsTouchesOnHostedScene:(BOOL)a0;

@end
