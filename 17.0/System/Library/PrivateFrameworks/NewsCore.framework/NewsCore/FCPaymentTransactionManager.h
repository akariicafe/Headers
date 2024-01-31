@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager>

@property (retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver;
@property (retain, nonatomic) NSMutableDictionary *paymentQueueByProductID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCPaymentTransactionManagerDelegate> delegate;

- (id)init;
- (BOOL)canMakePayments;
- (id)createPaymentQueueWithProductID:(id)a0 purchaseID:(id)a1 bundleID:(id)a2 webAccessOptIn:(BOOL)a3 appAdamID:(id)a4 storeExternalVersion:(id)a5;
- (void)paymentTransactionObserver:(id)a0 didFailPurchaseTransactionWithTransaction:(id)a1;
- (void).cxx_destruct;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)a0;
- (void)startPurchaseWithTagID:(id)a0 productID:(id)a1 purchaseID:(id)a2 bundleID:(id)a3 appAdamID:(id)a4 storeExternalVersion:(id)a5 price:(id)a6 webAccessOptIn:(BOOL)a7 payment:(id)a8;
- (void)paymentTransactionObserver:(id)a0 didFinishPurchaseTransaction:(id)a1;

@end
