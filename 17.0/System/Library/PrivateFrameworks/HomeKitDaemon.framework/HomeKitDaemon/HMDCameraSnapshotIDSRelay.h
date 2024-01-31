@class HMFOSTransaction, NSString, NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDCameraSnapshotIDSRelay : HMFObject <HMDIDSServiceDelegate, HMFLogging>

@property (readonly) NSString *logIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSUUID *sessionID;
@property (readonly) id<HMDIDSService> idsStreamService;
@property (readonly) HMFOSTransaction *snapshotRelayTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 logIdentifier:(id)a1 workQueue:(id)a2;

@end
