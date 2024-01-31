@class NSString, HMFTimer, HMDSnapshotFile, NSSet, HMDCameraStreamSnapshotHandler, NSObject, NSMutableArray, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDSnapshotRequestHandler : HMFObject <HMFLogging, HMFTimerDelegate, HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSMutableArray *_pendingRequests;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMFTimer *_mostRecentSnapshotInvalidationTimer;
    HMDSnapshotFile *_mostRecentSnapshot;
}

@property (readonly, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) NSSet *supportedResolutions;
@property (readonly, nonatomic) NSString *imageCacheDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 workQueue:(id)a1 streamSnapshotHandler:(id)a2 imageCacheDirectory:(id)a3 logID:(id)a4;
- (void)requestSnapshot:(id)a0 streamingTierType:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)streamSnapshotHandler:(id)a0 didGetLastSnapshot:(id)a1;
- (void)streamSnapshotHandler:(id)a0 didGetNewSnapshot:(id)a1;

@end
