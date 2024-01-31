@class NSString, BKFaceDetectOperation, BKDevicePearl, NSObject;
@protocol OS_dispatch_queue, PearlCameraInterfaceMessaging;

@interface BiokitOperation : NSObject <SamplingOperation, BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<PearlCameraInterfaceMessaging> _delegate;
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    double _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unitTestSampler;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void).cxx_destruct;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (void)setDelegate:(id)a0;
- (void)operation:(id)a0 motionDetectStateChanged:(id)a1;
- (void)device:(id)a0 pearlEventOccurred:(long long)a1;
- (void)device:(id)a0 pearlStateChanged:(long long)a1;
- (double)Timeout;
- (int)State;
- (id)cancelActiveOperation:(id)a0;
- (id)createPresenceDetectOperationWithTimeout:(double)a0 options:(struct { BOOL x0; BOOL x1; })a1;
- (id)initWithQueue:(id)a0 forUnitTest:(BOOL)a1;
- (BOOL)isOperationActive;
- (int)operationBackend;
- (id)startPresenceDetectOperation;

@end
