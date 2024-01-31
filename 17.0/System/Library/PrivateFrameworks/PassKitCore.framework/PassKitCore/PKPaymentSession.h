@class PKTransactionSessionWrapper, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentSession : NSObject {
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    PKTransactionSessionWrapper *_internalSession;
}

@property (readonly, nonatomic) unsigned long long lifecycleState;

+ (id)forceContactlessInterfaceSessionWithCompletion:(id /* block */)a0;
+ (id)forceContactlessInterfaceSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)a0;
+ (id)startApplePayTrustSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)a0;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startDigitalCarKeySessionWithCompletion:(id /* block */)a0;
+ (id)startDigitalCarKeySessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startInAppSessionWithCompletion:(id /* block */)a0;
+ (id)startInAppSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)a0;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startReaderSessionWithCompletion:(id /* block */)a0;
+ (id)startReaderSessionWithCompletion:(id /* block */)a0 targetQueue:(id)a1;
+ (id)startSTSContactlessInterfaceSessionWithDelegate:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void)invalidateSession;
- (void).cxx_destruct;
- (void)createSessionHandoffTokenWithCompletion:(id /* block */)a0;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (void)performBlockAsyncOnInternalSession:(id /* block */)a0;
- (void)performBlockSyncOnInternalSession:(id /* block */)a0;

@end
