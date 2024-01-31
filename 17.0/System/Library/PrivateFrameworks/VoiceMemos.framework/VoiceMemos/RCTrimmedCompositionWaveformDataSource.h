@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource

@property (readonly, nonatomic) NSURL *destinationWaveformURL;

- (BOOL)preferLoadingFragmentWaveforms;
- (id)generatedWaveformOutputURL;
- (void).cxx_destruct;
- (id)initWithSourceComposition:(id)a0 destinationWaveformURL:(id)a1;

@end
