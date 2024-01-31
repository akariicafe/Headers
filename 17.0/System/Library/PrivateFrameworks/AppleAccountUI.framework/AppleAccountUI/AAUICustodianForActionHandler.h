@class NSString, AAUIOBWelcomeController, AALocalContactInfo;

@interface AAUICustodianForActionHandler : NSObject <AAUITrustedContactDetailsActionHandler> {
    AALocalContactInfo *_contact;
    AAUIOBWelcomeController *_recoveryViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_dismissRecoveryViewController;
- (void)_showHelpNowUnavailableAlertWithMessage:(id)a0 viewController:(id)a1;
- (void)_showHelpNowViewWithRecoveryCode:(id)a0 presentingViewController:(id)a1;
- (void)doDestructiveAction:(id)a0 specifier:(id)a1;
- (void)doPrimaryAction:(id)a0 specifier:(id)a1;
- (id)initWithLocalContact:(id)a0;

@end
