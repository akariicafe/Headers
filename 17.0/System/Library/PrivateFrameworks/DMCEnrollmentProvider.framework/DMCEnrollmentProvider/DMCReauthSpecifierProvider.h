@class DMCEnrollmentInterface, PSListController;

@interface DMCReauthSpecifierProvider : DMCSpecifierProvider

@property (readonly, weak, nonatomic) PSListController *presenter;
@property (retain, nonatomic) DMCEnrollmentInterface *enrollmentInterface;

- (id)initWithAccount:(id)a0;
- (BOOL)_shouldAutoPresentReauthFlow;
- (void)presentReauthFlow:(id)a0;
- (id)specifiers;
- (id)_reauthSpecifier;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;

@end
