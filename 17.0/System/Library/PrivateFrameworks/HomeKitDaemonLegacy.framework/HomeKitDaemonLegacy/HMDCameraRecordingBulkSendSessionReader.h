@class HMFTimer, NSString, HMDDataStreamFragmentAssembler, NSObject;
@protocol HMDCameraRecordingBulkSendSessionReaderDelegate, OS_dispatch_queue, HMDDataStreamBulkSendSession;

@interface HMDCameraRecordingBulkSendSessionReader : HMFObject <HMFTimerDelegate, HMFLogging> {
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_readCallbackTimer;
    HMDDataStreamFragmentAssembler *_fragmentChunkAssembler;
}

@property (readonly, copy) NSString *logIdentifier;
@property (readonly) id<HMDDataStreamBulkSendSession> session;
@property (weak) id<HMDCameraRecordingBulkSendSessionReaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)stopWithReason:(unsigned short)a0;
- (id)initWithWorkQueue:(id)a0 session:(id)a1 readCallbackTimer:(id)a2 logIdentifier:(id)a3;
- (id)initWithWorkQueue:(id)a0 session:(id)a1 readTimeout:(double)a2 logIdentifier:(id)a3;

@end
