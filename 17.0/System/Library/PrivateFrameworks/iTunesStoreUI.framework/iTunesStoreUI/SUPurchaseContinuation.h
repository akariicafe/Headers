@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id purchase;
@property (weak, nonatomic) SUPurchaseManager *purchaseManager;

- (void)dealloc;
- (void)start;
- (void)cancel;
- (id)initWithPurchase:(id)a0;

@end
