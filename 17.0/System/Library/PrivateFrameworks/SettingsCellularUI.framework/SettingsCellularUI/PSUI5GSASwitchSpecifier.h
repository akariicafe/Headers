@class PSUICoreTelephonyCarrierBundleCache, CTNRStatus, CTXPCServiceSubscriptionContext, NSString, PSListController;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    CTNRStatus *_nrStatus;
    NSString *_instance;
}

- (id)getLogger;
- (void).cxx_destruct;
- (void)set5GSAEnabled:(BOOL)a0;
- (void)checkNRStatusAndDisableIfNeeded;
- (id)groupFooterText;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 carrierBundleCache:(id)a2;
- (id)is5GSAEnabled;
- (void)refreshSpecifiersInHostController;
- (void)set5GSASwitch:(id)a0 specifier:(id)a1;
- (BOOL)shouldAddCoverageExtensionFooterText;
- (BOOL)shouldAddDefaultOffCarrierFooterText;

@end
