@class _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel, NSString, UINavigationController, NSURL, UIViewController, NSNumber, STIntroductionViewModel;

@interface STIntroductionController : NSObject

@property (readonly, copy) NSNumber *childAge;
@property (readonly, copy) NSString *altDSID;
@property (readonly, copy) NSNumber *dsid;
@property (readonly) STIntroductionViewModel *introductionModel;
@property (nonatomic) BOOL isModalPresentation;
@property (retain, nonatomic) _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel *settingsPresetViewModel;
@property (retain) UINavigationController *navigationController;
@property BOOL updateExistingSettings;
@property BOOL skipAppLimitsPane;
@property BOOL showCommunicationSafetyPane;
@property BOOL allowParentalControls;
@property BOOL forceParentalControls;
@property BOOL askForRecoveryAppleID;
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud;
@property (copy) NSString *childName;
@property (copy) id /* block */ completionBlock;
@property (copy) NSURL *userURI;
@property (readonly) UIViewController *initialViewController;

- (void).cxx_destruct;
- (void)_endIntroductionFlowWithEnablingScreenTime;
- (void)_endIntroductionFlowWithoutEnablingScreenTime;
- (void)_viewControllerCompleted:(id)a0;
- (id)_viewControllerFollowingViewController:(id)a0;
- (id)initWithDSID:(id)a0 childAge:(id)a1 childName:(id)a2 updateExistingSettings:(BOOL)a3 restrictionsDataSource:(id)a4;
- (id)initWithNewUserRootViewModelCoordinator:(id)a0;
- (void)presentOverViewController:(id)a0;

@end
