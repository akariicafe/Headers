@class NSArray, SKUIClientContext, NSURL, NSMutableDictionary, NSHashTable, NSOperationQueue;

@interface SKUIDonationConfiguration : NSObject {
    NSMutableDictionary *_charityImages;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSArray *allCharities;
@property (readonly, nonatomic) NSURL *donationPurchaseURL;
@property (readonly, nonatomic) NSURL *donationValidationURL;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_finishLoadWithResponse:(id)a0 error:(id)a1 block:(id /* block */)a2;
- (void)_setLogoImage:(id)a0 forCharity:(id)a1;
- (id)charityForIdentifier:(id)a0;
- (id)initWithOperationQueue:(id)a0 clientContext:(id)a1;
- (void)loadConfigurationWithCompletionBlock:(id /* block */)a0;
- (void)loadLogoForCharity:(id)a0;
- (id)logoImageForCharity:(id)a0;

@end
