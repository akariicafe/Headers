@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCameraRecordingBulkSendListenerDelegate;

@interface HMDCameraRecordingBulkSendListener : HMFObject <HMFLogging, HMDDataStreamBulkSendListener> {
    NSObject<OS_dispatch_queue> *_workQueue;
    id /* block */ _pendingOpenSessionCallback;
}

@property (readonly, copy) NSUUID *UUID;
@property (weak) id<HMDCameraRecordingBulkSendListenerDelegate> delegate;
@property (readonly, getter=isSessionOpenInProgress) BOOL sessionOpenInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithWorkQueue:(id)a0;
- (void)accessory:(id)a0 didCloseDataStreamWithError:(id)a1;
- (void)accessory:(id)a0 didReceiveBulkSessionCandidate:(id)a1;
- (void)accessoryDidStartListening:(id)a0;
- (void)addPendingBulkSendSessionCallback:(id /* block */)a0;
- (void)openBulkSendSessionWithAccessory:(id)a0 callback:(id /* block */)a1;

@end
