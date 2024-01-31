@class HMFOperation;

@interface HMIFeedbackTask : HMITask {
    HMFOperation *_operation;
}

- (void).cxx_destruct;
- (id)initWithTaskID:(int)a0 cameraProfileUUID:(id)a1 clipUUID:(id)a2;
- (void)mainInsideAutoreleasePool;

@end
