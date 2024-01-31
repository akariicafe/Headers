@class AVAudioFile, NSHashTable, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RCWaveformGenerator : NSObject {
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    double _totalDigestedTime;
    double _totalFlushedTime;
    NSHashTable *_weakObservers;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    AVAudioFile *_activeAudioFile;
    struct PowerMeter { double mSampleRate; double mPeakDecay1; double mPeakDecay; double mDecay1; double mDecay; int mPrevBlockSize; int mPeakHoldCount; double mMaxPeak; struct AudioUnitMeterClipping { float peakValueSinceLastCall; unsigned char sawInfinity; unsigned char sawNotANumber; } mClipping; } _samplePowerMeter;
    BOOL _isSampleRateKnown;
    struct vector<float, std::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float> > { float *__value_; } __end_cap_; } _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    unsigned long long _powerLevelsConsumedSinceLastFlush;
    unsigned long long _framesConsumedSinceLastFlush;
    long long _framesNeededForNextDB;
    long long _framesNeededForNextFlush;
    NSError *_loadingError;
    unsigned long long _pauseCount;
}

@property (readonly, nonatomic) double segmentFlushInterval;
@property (nonatomic) long long overviewUnitsPerSecond;
@property (readonly, nonatomic) long long state;
@property (nonatomic) BOOL canceled;
@property (readonly, nonatomic) BOOL loadable;
@property (readonly, nonatomic) BOOL idle;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) BOOL paused;

- (void)_onQueue_performObserversBlock:(id /* block */)a0;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x0; double x1; })a0 inAudioFile:(id)a1;
- (BOOL)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)a0 progressBlock:(id /* block */)a1;
- (id)init;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)a0 byReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a1;
- (BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)a0;
- (void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_onQueue_flushRemainingData;
- (id)initWithSegmentFlushInterval:(double)a0;
- (BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)a0;
- (BOOL)appendAveragePowerLevel:(float)a0;
- (id).cxx_construct;
- (void)removeSegmentOutputObserver:(id)a0;
- (void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)a0;
- (void)beginLoading;
- (BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)a0;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)_onQueue_flushWithNextSegmentWithEndTime:(double)a0 isPredigest:(BOOL)a1;
- (void)_onQueue_appendPowerMeterValuesFromRawAudioData:(void *)a0 frameCount:(long long)a1 format:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a2 isPredigest:(BOOL)a3;
- (void)_onQueue_performLoadingFinishedBlock:(id /* block */)a0 internalBlockUUID:(id)a1 isTimeout:(BOOL)a2;
- (void)flushPendingCapturedSampleBuffers;
- (BOOL)_appendPowerMeterValuesFromDataInAudioFile:(id)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)terminateLoadingImmediately;
- (void)_onQueue_pushAveragePowerLevel:(float)a0;
- (void)addSegmentOutputObserver:(id)a0;
- (void)_appendAveragePowerLevel:(float)a0;
- (void)_onQueue_flushWaveformSegment:(id)a0;
- (id)initWithSamplingParametersFromGenerator:(id)a0;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(struct { double x0; double x1; })a0 inAudioFile:(id)a1;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (BOOL)appendAveragePowerLevelsByDigestingWaveformSegments:(id)a0;
- (void)_onQueue_appendSegment:(id)a0;
- (void)_onQueue_digestAveragePowerLevel:(float)a0;
- (void)async_finishLoadingByTerminating:(BOOL)a0 loadingFinishedBlockTimeout:(unsigned long long)a1 loadingFinishedBlock:(id /* block */)a2;

@end
