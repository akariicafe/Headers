@class BKUserProtectedConfiguration, PSSpecifier, NSString, BKDevicePearl, PSListController;

@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup>

@property (weak, nonatomic) PSListController *listController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) BKDevicePearl *pearlDevice;
@property (retain, nonatomic) BKUserProtectedConfiguration *updatedConfiguration;
@property (retain, nonatomic) NSString *pinCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAcceptEnteredPIN:(id)a0;
- (id)specifiers;
- (void).cxx_destruct;
- (void)didCancelEnteringPIN;
- (id)_pearlDevice;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)attentionAware:(id)a0;
- (BOOL)isPeriocularEnabled;
- (id)pearlUnlock:(id)a0;
- (void)setAttentionAware:(id)a0 specifier:(id)a1;
- (void)setPearlUnlock:(id)a0 specifier:(id)a1;
- (void)setProtectedCredentialsWithPasscode:(id)a0;
- (BOOL)useAlternateFooterTextForAttention;

@end
