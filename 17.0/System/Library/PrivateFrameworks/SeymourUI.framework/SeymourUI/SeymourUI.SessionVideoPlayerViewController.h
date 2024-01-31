@class NSArray;

@interface SeymourUI.SessionVideoPlayerViewController : UIViewController {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ transportBarControlsCoordinator;
    void /* unknown type, empty encoding */ airplayAndSettingsControlsView;
    void /* unknown type, empty encoding */ settingsControlItem;
    void /* unknown type, empty encoding */ gymKitResumeMachineView;
    void /* unknown type, empty encoding */ settingsPopoverSourceView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ playbackViewController;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ videoBoundsObserver;
    void /* unknown type, empty encoding */ _requiresLinearPlayback;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)didTapMediaPlayerViewWithTapGestureRecognizer:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
