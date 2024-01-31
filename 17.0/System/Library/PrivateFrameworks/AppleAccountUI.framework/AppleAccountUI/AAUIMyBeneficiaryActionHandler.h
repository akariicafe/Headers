@class NSString, AALocalContactInfo, AIDAAccountManager, AAUISpinnerManager;

@interface AAUIMyBeneficiaryActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AAUISpinnerManager *_spinnerManager;
}

@property (readonly, nonatomic) AIDAAccountManager *accountManager;
@property (readonly, nonatomic) AALocalContactInfo *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_doBeneficiaryRemoveWithViewController:(id)a0;
- (void)_navigateToAccessKeyScreenFromViewController:(id)a0;
- (void)_showAuthPromptInViewController:(id)a0;
- (void)_startSpinnerInSpecifier:(id)a0;
- (void)_stopAllSpinners;
- (void)doDestructiveAction:(id)a0 specifier:(id)a1;
- (void)doPrimaryAction:(id)a0 specifier:(id)a1;
- (id)initWithAccountManager:(id)a0 localContact:(id)a1;

@end
