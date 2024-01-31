@class NSObject, NSString, PKPaymentSessionHandle, PKSecureElementPass, PKContactlessInterfaceSession;
@protocol OS_dispatch_group;

@interface PKBackgroundContactlessInterfaceSessionController : NSObject <PKContactlessInterfaceSessionDelegate> {
    id /* block */ _relinquishOwnershipBlock;
    unsigned long long _lifecycleState;
    PKPaymentSessionHandle *_sessionHandle;
    PKContactlessInterfaceSession *_session;
    NSObject<OS_dispatch_group> *_group;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) PKSecureElementPass *pass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)invalidate;
- (void)setSession:(id)a0;
- (void).cxx_destruct;
- (void)_processContext:(id)a0;
- (void)contactlessInterfaceSession:(id)a0 didEndPersistentCardEmulationWithContext:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didFinishTransactionWithContext:(id)a1;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0;
- (void)contactlessInterfaceSessionDidTerminate:(id)a0 withErrorCode:(unsigned long long)a1;
- (void)claimActiveSessionWithCompletion:(id /* block */)a0;
- (id)initWithFieldProperties:(id)a0 forPassUniqueID:(id)a1 relinquishOwnership:(id /* block */)a2;

@end
