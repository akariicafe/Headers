@class NSString, MCProfile;
@protocol DMCEnrollmentManagementDetailsOverviewViewControllerDelegate;

@interface DMCEnrollmentManagementDetailsOverviewViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentManagementDetailsOverviewViewControllerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)_setupNavigationBar;
- (void)leftBarButtonTapped:(id)a0;
- (id)initWithDelegate:(id)a0 managedAppleID:(id)a1 profile:(id)a2;

@end
