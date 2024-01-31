@class PKPeerPaymentAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NPKMockPeerPaymentAccountManager : NPKPeerPaymentAccountManager {
    PKPeerPaymentAccount *_mockAccount;
    NSObject<OS_dispatch_queue> *_accountQueue;
    unsigned long long _balanceOffset;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)account;
- (void).cxx_destruct;
- (id)initWithPeerPaymentService:(id)a0;
- (void)_updateMockBalance;

@end
