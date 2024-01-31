@interface GameCenterUI.SettingsContainerViewController : UIViewController <PSController, AAUISignInControllerDelegate, CNPhotoPickerViewControllerDelegate, GKOnboardingFlowDelegate> {
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ childViewController;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ onboardingNavigationController;
    void /* unknown type, empty encoding */ viewDidLayoutSubviewsCallback;
    void /* unknown type, empty encoding */ metricsHandler;
    void /* unknown type, empty encoding */ contactsIntegrationInitiator;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ _rootController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _specifier;

- (id)specifier;
- (void)setSpecifier:(id)a0;
- (void)setRootController:(id)a0;
- (id)rootController;
- (void)setParentController:(id)a0;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)parentController;
- (void)photoPicker:(id)a0 didUpdatePhotoForContact:(id)a1 withContactImage:(id)a2;
- (void)photoPickerDidCancel:(id)a0;
- (void)showController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)onboardingFlowFinishedWithAction:(unsigned long long)a0;
- (void)openAvatarEditor;
- (void)openPlayerProfileView;
- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)signInControllerDidCancel:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
