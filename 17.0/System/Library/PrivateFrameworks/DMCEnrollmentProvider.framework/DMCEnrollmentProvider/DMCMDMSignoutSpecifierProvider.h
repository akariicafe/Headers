@class DMCEnrollmentInterface;

@interface DMCMDMSignoutSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface;

- (id)viewController;
- (id)specifiers;
- (id)_specifierForSignoutButton;
- (void).cxx_destruct;
- (void)_specifierForMDMProfileWasTapped:(id)a0;

@end
