@class NSArray, PSSpecifier;

@interface SUSUISoftwareUpdateBetaUpdatesController : PSListController

@property (retain, nonatomic) PSSpecifier *programsGroup;
@property (retain, nonatomic) NSArray *programsList;
@property (retain, nonatomic) PSSpecifier *appleIDGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *appleIDSpecifier;
@property (retain, nonatomic) PSSpecifier *unavailableProgramNoticeSpecifier;
@property (weak, nonatomic) PSSpecifier *mismatchedSpecifier;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void)updateFooter;
- (void).cxx_destruct;
- (id)updateController;
- (id)_specifierForBetaProgram:(id)a0 rowIdentifier:(id)a1;
- (void)presentAuthKitController;
- (void)presentAuthenticationDialog;
- (void)setupProgramListSpecifiers;
- (void)setupProgramsGroupSpecifier;

@end
