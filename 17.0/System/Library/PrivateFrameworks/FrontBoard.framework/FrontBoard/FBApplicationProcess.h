@class FBProcessCPUStatistics, BKSProcessAssertion;

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
    BKSProcessAssertion *_queue_mediaAssertion;
    BKSProcessAssertion *_queue_audioAssertion;
    BKSProcessAssertion *_queue_accessoryAssertion;
}

@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio;
@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory;
@property (readonly, nonatomic) double elapsedCPUTime;

+ (id)_internalDebugEnvironmentVariables;

- (void)_bootstrapDidComplete;
- (void)_noteProcessDidExit:(id)a0;
- (BOOL)isApplicationProcess;
- (void)_finishInit;
- (void).cxx_destruct;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2;
- (void)killForReason:(long long)a0 andReport:(BOOL)a1 withDescription:(id)a2 completion:(id /* block */)a3;
- (id)_createBootstrapContext;
- (id)_queue_createLegacyAssertionForReason:(unsigned int)a0 withName:(id)a1;

@end
