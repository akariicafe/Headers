@class NSString, AMSBuyParams, AMSPurchase;

@interface VUIPurchaseRequest : NSObject

@property (retain, nonatomic) NSString *buyParamsString;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *enhancedBuyParamsString;
@property (retain, nonatomic) AMSBuyParams *amsBuyParams;
@property (nonatomic) long long purchaseType;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) AMSPurchase *purchase;

+ (BOOL)shouldPlayWhenDoneForActionRef:(id)a0;
+ (long long)getPurchaseTypeFromActionRef:(id)a0;

- (void).cxx_destruct;
- (void)_recordErrorLog:(id)a0;
- (void)enqueueWithCompletion:(id /* block */)a0;
- (void)handleRequestCompletionWithResult:(id)a0 andError:(id)a1;
- (id)initWithBuyParams:(id)a0 ofPurchaseType:(long long)a1;

@end
