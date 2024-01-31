@class NSOperationQueue, NSString, SKUIClientContext, NSArray, NSURL, NSMutableDictionary, NSHashTable;

@interface SKUIGiftConfiguration : NSObject {
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) NSString *currencySymbol;
@property (readonly, nonatomic) long long currencySymbolPosition;
@property (readonly, nonatomic) NSArray *fixedGiftAmountLabels;
@property (readonly, nonatomic) NSArray *fixedGiftAmountValues;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } giftAmountRange;
@property (readonly, nonatomic) NSURL *giftPurchaseURL;
@property (readonly, nonatomic) NSURL *giftValidationURL;
@property (readonly, nonatomic) long long maximumMessageLength;
@property (readonly, nonatomic) NSString *senderEmailAddress;
@property (readonly, nonatomic) NSString *senderName;
@property (readonly, nonatomic) NSString *storeFrontName;
@property (readonly, nonatomic) NSArray *themes;

- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_finishLoadAccountInfoWithResponse:(id)a0 error:(id)a1 block:(id /* block */)a2;
- (void)_finishLoadWithResponse:(id)a0 error:(id)a1 block:(id /* block */)a2;
- (void)_loadThemeImages;
- (void)_setHeaderImage:(id)a0 forTheme:(id)a1;
- (void)_setLogoImage:(id)a0 forCharity:(id)a1;
- (id)charityForIdentifier:(id)a0;
- (id)initWithOperationQueue:(id)a0 clientContext:(id)a1;
- (BOOL)loadCachedConfiguration;
- (void)loadConfigurationWithCompletionBlock:(id /* block */)a0;
- (void)loadLogoForCharity:(id)a0;
- (id)logoImageForCharity:(id)a0;

@end
