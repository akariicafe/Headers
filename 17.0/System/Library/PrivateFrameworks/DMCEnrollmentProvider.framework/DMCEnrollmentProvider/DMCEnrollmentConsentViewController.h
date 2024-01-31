@class NSString, MCProfile, DMCEnrollmentConfirmationView, DMCEnrollmentTableViewPlatterCell, NSNumber;
@protocol DMCEnrollmentConsentViewControllerDelegate;

@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *orgName;
@property (copy, nonatomic) NSString *serverURL;
@property (retain, nonatomic) NSNumber *requiredAppID;
@property (retain, nonatomic) MCProfile *profile;
@property (weak) id<DMCEnrollmentConsentViewControllerDelegate> delegate;
@property (retain, nonatomic) DMCEnrollmentTableViewPlatterCell *infoCell;
@property (retain, nonatomic) DMCEnrollmentConfirmationView *confirmationView;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_platterCellDataWithImage:(id)a0 text:(id)a1;
- (id)_cellDataForESSOBYODDisclosure;
- (id)_commonCellDataForRegularBYODDisclosure;
- (id)_platterCellDataForRegularADDEDisclosure;
- (id)_platterCellDataForRegularADUEDisclosure;
- (id)_requiredAppCellData;
- (id)_serverURLWithoutHTTP:(id)a0;
- (void)_setupManagementDetailsLinkTextForCell:(id)a0;
- (id)initWithDelegate:(id)a0 username:(id)a1 profile:(id)a2;
- (void)updateContinueButtonStatus;

@end
