@class ACAccountStore;

@interface _CNACAccountStoreBasedProvider : CNACAccountProvider

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)initWithAccountStore:(id)a0;
- (void).cxx_destruct;
- (id)allAccountTypes;
- (id)accountsWithAccountType:(id)a0;
- (id)childAccountsForAccount:(id)a0;
- (BOOL)isAccountSyncable:(id)a0;
- (BOOL)isAnyAccountSyncableIgnoringAccount:(id)a0;

@end
