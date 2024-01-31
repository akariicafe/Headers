@class NSString, NSArray, AIDAAccountManager, ACAccount;
@protocol AAUISpecifierProviderDelegate;

@interface AMSUIPaymentSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate> {
    ACAccount *_grandSlamAccount;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (copy, nonatomic) NSString *paymentSummaryDescription;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_accountsChangedFromAccount:(id)a0 toAccount:(id)a1;

- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_findViewController;
- (id)initWithAccountManager:(id)a0;
- (id)_grandSlamAccount;
- (void)_loadControllerForSpecifier:(id)a0;
- (id)_paymentSummaryDescriptionForSpecifier:(id)a0;

@end
