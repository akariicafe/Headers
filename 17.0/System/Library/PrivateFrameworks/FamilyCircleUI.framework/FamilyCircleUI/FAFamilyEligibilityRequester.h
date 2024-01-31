@class AIDAAccountManager, NSOperationQueue, AAGrandSlamSigner;

@interface FAFamilyEligibilityRequester : NSObject {
    AAGrandSlamSigner *_grandSlamSigner;
    AIDAAccountManager *_accountManager;
    NSOperationQueue *_networkActivityQueue;
}

@property (nonatomic) BOOL allowsAuthenticationPrompt;

- (id)init;
- (id)_accountStore;
- (id)_appleAccount;
- (void).cxx_destruct;
- (id)_grandSlamSigner;
- (id)initWithAccountManager:(id)a0;
- (void)requestFamilyEligibilityWithCompletion:(id /* block */)a0;

@end
