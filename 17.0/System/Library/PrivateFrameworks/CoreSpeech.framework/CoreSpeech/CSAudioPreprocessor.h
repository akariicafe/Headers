@class CSAudioSampleRateConverter, NSString, CSBeepCanceller, CSVoiceTriggerAwareZeroFilter, CSAudioZeroCounter;
@protocol CSAudioPreprocessorDelegate;

@interface CSAudioPreprocessor : NSObject <CSVoiceTriggerAwareZeroFilterDelegate, CSBeepCancellerDelegate>

@property (nonatomic) float sampleRate;
@property (retain, nonatomic) CSAudioSampleRateConverter *upsampler;
@property (retain, nonatomic) CSVoiceTriggerAwareZeroFilter *zeroFilter;
@property (retain, nonatomic) CSBeepCanceller *beepCanceller;
@property (retain, nonatomic) CSAudioZeroCounter *zeroCounter;
@property (nonatomic) int numChannels;
@property (weak, nonatomic) id<CSAudioPreprocessorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flush;
- (void).cxx_destruct;
- (void)beepCancellerDidCancelSamples:(id)a0 buffer:(id)a1 timestamp:(unsigned long long)a2;
- (id)_fetchCurrentMetrics;
- (BOOL)_isNarrowBand:(float)a0;
- (void)_reportMetrics;
- (id)initWithSampleRate:(float)a0 withNumberOfChannels:(int)a1;
- (void)processBuffer:(id)a0 atTime:(unsigned long long)a1 arrivalTimestampToAudioRecorder:(unsigned long long)a2;
- (void)reportMetricsForSiriRequestWithUUID:(id)a0;
- (void)resetWithSampleRate:(float)a0 containsVoiceTrigger:(BOOL)a1 voiceTriggerInfo:(id)a2;
- (void)willBeepWithRecordRoute:(id)a0 playbackRoute:(id)a1;
- (void)zeroFilter:(id)a0 zeroFilteredBufferAvailable:(id)a1 atHostTime:(unsigned long long)a2;

@end
