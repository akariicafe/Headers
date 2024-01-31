@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMapTable *_leaseIDToLeaseSessionInfo;
}

@property (class, readonly, nonatomic) MPCSuzeLeaseSessionController *sharedController;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (void).cxx_destruct;
- (void)suzeLeaseSession:(id)a0 leaseRenewalDidFailWithError:(id)a1;
- (void)startLeaseSessionWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)stopLeaseSession:(id)a0 completion:(id /* block */)a1;

@end
