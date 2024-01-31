@class NSString, PKPaymentTransaction, PKPaymentApplication;

@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
}

@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapsURL;
- (BOOL)isSettlement;
- (BOOL)isRefund;
- (id)identifier;
- (void).cxx_destruct;
- (long long)type;
- (id)initWithTransaction:(id)a0 paymentApplication:(id)a1;
- (id)mapsMerchantLookupRequest;

@end
