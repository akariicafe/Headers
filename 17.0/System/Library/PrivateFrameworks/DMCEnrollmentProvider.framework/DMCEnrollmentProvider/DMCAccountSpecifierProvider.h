@class ACAccountStore, NSObject;
@protocol DMCSecondaryAccountViewModelDelegate, OS_dispatch_queue, DMCAccountSpecifierProviderDelegate;

@interface DMCAccountSpecifierProvider : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

@property (weak, nonatomic) id<DMCAccountSpecifierProviderDelegate> delegate;
@property (weak, nonatomic) id<DMCSecondaryAccountViewModelDelegate> viewModelDelegate;

+ (id)itemSpecifierIDForReauthAccountUsername:(id)a0;
+ (id)groupSpecifierID;
+ (id)itemSpecifierIDForAccountUsername:(id)a0;
+ (id)itemSpecifierIDPrefix;

- (id)initWithAccountStore:(id)a0;
- (id)specifiersWithTitle:(BOOL)a0 includePrimaryAccounts:(BOOL)a1;
- (id)init;
- (id)_specifierForManagedAccountGroupWithTitle:(BOOL)a0 plural:(BOOL)a1;
- (void)specifiersWithCompletion:(id /* block */)a0;
- (id)secondaryAccountViewModels;
- (void)dealloc;
- (id)_reauthSpecifierForAccount:(id)a0;
- (id)_specifierForManagedAccount:(id)a0;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)appleAccountsDidChange:(id)a0;

@end
