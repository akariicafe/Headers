@class MFMessageLoadingContext, EMAccount, MailAccount, EMSecurityInformation, NSError, NSString;
@protocol MFAddressAtomProvider;

@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient>

@property (weak, nonatomic) MFMessageLoadingContext *context;
@property (retain, nonatomic) EMAccount *account;
@property (retain, nonatomic) MailAccount *legacyAccount;
@property (retain, nonatomic) EMSecurityInformation *securityInformation;
@property (retain, nonatomic, setter=setSMIMEError:) NSError *smimeError;
@property (weak, nonatomic) id<MFAddressAtomProvider> atomProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)addressBookManager:(id)a0 addressBookDidChange:(void *)a1;
- (void)addressBookPreferencesChangedForAddressBookManager:(id)a0;
- (id)otherSigners;
- (BOOL)_atomContainsVIPSender:(id)a0;
- (void)_invalidateAtoms;
- (void)_legacyAccountsDidChange:(id)a0;
- (void)_trustDidChange:(id)a0;
- (void)_updateAtomsInList:(id)a0;
- (void)_updateOtherSignersList:(id)a0;
- (void)_updateVIPStatus;
- (void)_vipSendersDidChange:(id)a0;
- (int)actionForTrustInformation:(id)a0;
- (void)updateTrustForDisplayedAtoms;
- (void)updateWithSecurityInformation:(id)a0;

@end
