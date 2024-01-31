@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface RCFileInputWaveformDataSource : RCWaveformDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _cachedDuration;
    float _loadingProgress;
}

@property (readonly, copy, nonatomic) NSURL *AVFileURL;
@property (nonatomic) double destinationBeginTime;
@property (nonatomic) struct { double beginTime; double endTime; } sourceTimeRange;
@property (readonly, nonatomic) BOOL savesGeneratedWaveform;

- (BOOL)setPaused:(BOOL)a0;
- (void)setLoadingProgress:(float)a0;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (float)loadingProgress;
- (id)initWithAVFileURL:(id)a0 savesGeneratedWaveform:(BOOL)a1 segmentFlushInterval:(double)a2;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (BOOL)shouldMergeLiveWaveform;
- (void)startLoading;
- (void)saveGeneratedWaveformIfNecessary;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)savesGeneratedWaveform;
- (id)initWithAVFileURL:(id)a0;

@end
