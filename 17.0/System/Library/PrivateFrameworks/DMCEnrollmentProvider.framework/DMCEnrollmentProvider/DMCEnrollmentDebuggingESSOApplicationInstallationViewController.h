@class NSArray, DMCEnrollmentConfirmationView, LSApplicationWorkspace, NSString;
@protocol DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate;

@interface DMCEnrollmentDebuggingESSOApplicationInstallationViewController : DMCEnrollmentTemplateTableViewController <LSApplicationWorkspaceObserverProtocol>

@property (retain, nonatomic) LSApplicationWorkspace *appWorkspace;
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;
@property (weak) id<DMCEnrollmentDebuggingESSOApplicationInstallationViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *requiredEntitlements;
@property (nonatomic) BOOL requiredAppInstalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidInstall:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (void)leftBarButtonTapped:(id)a0;
- (id)initWithDelegate:(id)a0 appBundleIDs:(id)a1 requiredEntitlements:(id)a2;
- (void)updateContinueButtonStatus;

@end
