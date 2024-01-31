@class NSString, RCComposition, NSObject, _RCTimeRangeFileInputWaveformDataSource;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _progressOfFinishedFragments;
    float _progressWeightPerFragment;
}

@property (retain) _RCTimeRangeFileInputWaveformDataSource *activeFragmentDataSource;
@property (retain) NSObject<OS_dispatch_group> *loadingGroup;
@property (readonly, nonatomic) RCComposition *composition;
@property (readonly, nonatomic) BOOL preferLoadingFragmentWaveforms;
@property (nonatomic) BOOL saveGeneratedWaveform;
@property (nonatomic) BOOL highlightLastDecomposedFragment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_synchronouslyAppendSegmentsFromDataSource:(id)a0;
- (void)dealloc;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(struct { double x0; double x1; })a0;
- (void)waveformGeneratorDidFinishLoading:(id)a0 error:(id)a1;
- (id)_dataSourceForAVContentURL:(id)a0 isDecomposedFragment:(BOOL)a1 sourceTimeRange:(struct { double x0; double x1; })a2 destinationTime:(double)a3;
- (struct { double x0; double x1; })timeRangeToHighlight;
- (float)loadingProgress;
- (id)saveableWaveform;
- (BOOL)shouldMergeLiveWaveform;
- (void)startLoading;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (void)waveformDataSourceDidFinishLoading:(id)a0;
- (void)waitUntilSegmentsFinishLoadingWithTimeout:(unsigned long long)a0;
- (void)waveformDataSource:(id)a0 didLoadWaveformSegment:(id)a1;
- (double)duration;
- (void)cancelLoading;

@end
