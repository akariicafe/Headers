@interface RoomPlan.ARInternalSessionObserverWrapper : NSObject <ARInternalSessionObserver, ARReplayConfigurationDelegate> {
    void /* unknown type, empty encoding */ captureSession;
}

- (id)init;
- (void)session:(id)a0 willRunWithConfiguration:(id)a1;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)sessionWasInterrupted:(id)a0;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (BOOL)sessionShouldAttemptRelocalization:(id)a0;
- (void)session:(id)a0 didUpdateSpatialMappingPointClouds:(id)a1;
- (void)session:(id)a0 requestedRunWithConfiguration:(id)a1 options:(unsigned long long)a2;
- (void)replayConfigurationDidFinishReplaying:(id)a0;

@end
