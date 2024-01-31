@class WBSSavedAccountStore, WBSAutoFillQuirksManager;

@interface WBSPasswordAuditor : NSObject

@property (readonly, nonatomic) WBSSavedAccountStore *savedAccountStore;
@property (readonly, nonatomic) WBSAutoFillQuirksManager *autoFillQuirksManager;
@property (readonly, nonatomic) BOOL accountStoreHasDuplicatedPasswords;

- (id)init;
- (void).cxx_destruct;
- (id)duplicatePasswordsInPasswords:(id)a0;
- (BOOL)_passwordIsReused:(id)a0 byOtherSavedAccount:(id)a1;
- (BOOL)_savedAccountQualifiesForReuseAuditing:(id)a0;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1;
- (BOOL)savedAccountIsReused:(id)a0;
- (id)savedAccountsWithDuplicatedPassword:(id)a0;

@end
