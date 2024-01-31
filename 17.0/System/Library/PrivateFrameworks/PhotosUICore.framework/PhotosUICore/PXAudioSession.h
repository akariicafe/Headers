@class NSString, PXUpdater, NSError, NSNumber, NSObject;
@protocol OS_dispatch_queue, PXAudioSessionAVAudioSessionDelegate, PXAudioAsset;

@interface PXAudioSession : PXObservable <PXInternalMutableAudioSession, PXAudioSessionState> {
    PXUpdater *_updater;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) float desiredPlayerVolume;
@property (weak, nonatomic) id<PXAudioSessionAVAudioSessionDelegate> audioSessionDelegate;
@property (readonly, nonatomic) NSNumber *contentPeakDecibels;
@property (readonly, nonatomic) NSNumber *contentLoudnessInLKFS;
@property (readonly, nonatomic) id<PXAudioAsset> asset;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) long long status;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isReadyToPlay;
@property (nonatomic) float volume;
@property (nonatomic) float targetLoudnessInLKFS;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)play;
- (void)pause;
- (id)init;
- (void)didPerformChanges;
- (id)state;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)prepareToPlay;
- (void)statusDidChange;
- (void)_invalidateDesiredPlayerVolume;
- (void)_updateDesiredPlayerVolume;
- (void)desiredPlayerVolumeDidChange;
- (void)errorDidChange;
- (id)initWithAsset:(id)a0 volume:(float)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 queue:(id)a3 audioSessionDelegate:(id)a4;
- (void)performFinalCleanup;
- (void)performInternalChanges:(id /* block */)a0;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setContentLoudnessInLKFS:(id)a0;
- (void)setContentPeakDecibels:(id)a0;
- (void)setDesiredPlayerVolume:(float)a0;

@end
