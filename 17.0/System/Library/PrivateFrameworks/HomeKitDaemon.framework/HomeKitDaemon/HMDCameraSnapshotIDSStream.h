@class HMFOSTransaction, HMDCameraSnapshotSessionID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDIDSService;

@interface HMDCameraSnapshotIDSStream : HMFObject <HMDIDSServiceDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraSnapshotSessionID *sessionID;
@property (readonly) id<HMDIDSService> idsProxyService;
@property (readonly) HMFOSTransaction *snapshotStreamTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
