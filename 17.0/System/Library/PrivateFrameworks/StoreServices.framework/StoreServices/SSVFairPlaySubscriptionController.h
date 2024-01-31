@class NSObject;
@protocol OS_dispatch_queue;

@interface SSVFairPlaySubscriptionController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasValidSubscriptionStatusDidChangeNotifyToken;
    int _subscriptionStatusDidChangeNotifyToken;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(struct FPSubscriptionInfo_ { unsigned long long x0; int x1; } *)a0 subscriptionInfoListLength:(unsigned int)a1;
- (void)_enumerateSubscriptionInfoUsingBlock:(id /* block */)a0;
- (void)_notifySubscriptionStatusDidChange;
- (id)_subscriptionStatusForFPSubscriptionInfo:(struct FPSubscriptionInfo_ { unsigned long long x0; int x1; })a0;
- (void)enumerateAccountSubscriptionStatusUsingBlock:(id /* block */)a0;
- (BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)a0 transactionType:(unsigned int)a1 machineIDData:(id)a2 returningSubscriptionBagData:(id *)a3 error:(id *)a4;
- (BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)a0 transactionType:(unsigned int)a1 certificateData:(id)a2 assetIDData:(id)a3 returningLeaseData:(id *)a4 subscriptionBagData:(id *)a5 error:(id *)a6;
- (BOOL)importSubscriptionKeyBagData:(id)a0 leaseInfoData:(id)a1 returningError:(id *)a2;
- (BOOL)importSubscriptionKeyBagData:(id)a0 returningError:(id *)a1;
- (BOOL)stopSubscriptionLease:(id *)a0;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)a0;

@end
