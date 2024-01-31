@class NSString, BKFaceDetectOperation, BKDevicePearl, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWPearlAttentionStreamer : NSObject <StreamingOperation, BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    id /* block */ _callbackBlock;
    id /* block */ _notificationBlock;
    BOOL _attentionStreamerRunning;
    BOOL _unitTest;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _eyeReliefStarted;
    int _attentionAwareFeaturesEnabledNotification;
    BOOL _isAttentionAwareFeaturesEnabled;
    int _displayNotifyToken;
    BOOL _displayOn;
    BOOL _smartCoverClosed;
    NSObject<OS_dispatch_semaphore> *_sem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendNotification:(unsigned long long)a0;
- (void)setDisplayStateFromNotification;
- (void)setDisplayState:(BOOL)a0;
- (struct { BOOL x0; BOOL x1; })getStreamerOptions;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void)setNotificationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)unitTestDevice;
- (id)streamEventWithBlock:(id /* block */)a0 options:(struct { BOOL x0; BOOL x1; })a1;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (id)cancelEventStream;
- (BOOL)attentionStreamerRunning;
- (void)setIsAttentionAwareFeaturesEnabled:(BOOL)a0;
- (id)initForUnitTest:(BOOL)a0 queue:(id)a1;
- (BOOL)isAttentionAwareFeaturesEnabled;
- (void)setSmartCoverState:(BOOL)a0;

@end
