@class NSString, HKProxyProvider, NSObject;
@protocol OS_dispatch_queue, HKClinicalSharingSyncObserverDelegate;

@interface HKClinicalSharingSyncObserver : NSObject <HKClinicalSharingSyncObserverClientInterface, _HKXPCExportable> {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKProxyProvider *_proxyProvider;
    BOOL _didSyncStart;
}

@property (weak, nonatomic) id<HKClinicalSharingSyncObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (void)resumeWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)connectionInvalidated;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithDelegateQueue:(id)a0;
- (void)client_syncDidFinishWithError:(id)a0;
- (void)client_syncDidStartWithInfo:(id)a0;
- (id)initWithConnection:(id)a0 delegateQueue:(id)a1;

@end
