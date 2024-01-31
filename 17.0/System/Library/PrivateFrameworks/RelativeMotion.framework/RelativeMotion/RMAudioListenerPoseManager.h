@class NSDictionary, RMConnectionClient, NSObject;
@protocol OS_dispatch_queue;

@interface RMAudioListenerPoseManager : NSObject {
    BOOL _isReceivingRelatveData;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _poseCallbackInternal;
    id /* block */ _statusCallback;
    RMConnectionClient *_connectionClient;
}

@property (retain, nonatomic) NSDictionary *tempestOptions;

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(BOOL)a0 poseCallback:(id /* block */)a1 statusCallback:(id /* block */)a2;
- (void)startReceivingAudioListenerPoseUpdatesWithForceSessionRestart:(BOOL)a0 poseCallbackInternal:(id /* block */)a1 statusCallback:(id /* block */)a2;
- (void)stopReceivingAudioListenerPoseUpdates;

@end
