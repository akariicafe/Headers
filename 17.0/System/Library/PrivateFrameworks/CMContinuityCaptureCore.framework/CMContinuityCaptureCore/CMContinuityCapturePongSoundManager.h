@class NSString, NSObject, CMContinuityCaptureProximityMonitor;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CMContinuityCapturePongSoundManager : NSObject <CMContinuityCaptureProximityMonitorDelegate> {
    NSString *_playedPongForIdentifier;
    CMContinuityCaptureProximityMonitor *_proximityMonitor;
    NSObject<OS_dispatch_source> *_proximityTimer;
    NSObject<OS_dispatch_semaphore> *_pongAssertSemaphore;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_playPongSoundForIdentifier:(id)a0;
- (void)_pongIfNeededWithShouldConsiderPongHistory:(BOOL)a0 forIdentifier:(id)a1;
- (BOOL)_shouldUseNearbyInteractionToDeterminePongSound;
- (void)acquireSystemPongAssertion;
- (void)device:(id)a0 isNearby:(BOOL)a1;
- (void)pongIfNeededWithShouldConsiderPongHistory:(BOOL)a0 forIdentifier:(id)a1;
- (void)releaseSystemPongAssertion;
- (void)waitForPongCompletion:(id /* block */)a0;

@end
