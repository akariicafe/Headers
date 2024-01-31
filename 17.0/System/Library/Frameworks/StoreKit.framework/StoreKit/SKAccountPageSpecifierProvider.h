@class PSSpecifier, NSArray, NSString, AIDAAccountManager;
@protocol AAUISpecifierProviderDelegate;

@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) PSSpecifier *activelyLoadingSpecifier;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isSingleIdentity;
- (id)_appleAccount;
- (void)_accountPageSpecifierWasTapped:(id)a0;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)_storeAccount;
- (void)_viewAccountPageSpecifierWasTapped:(id)a0;
- (id)initWithAccountManager:(id)a0;

@end
