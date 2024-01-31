@class NSUUID;
@protocol HRAWaveformProcessorLoggingDelegate;

@interface HRAWaveformProcessor : NSObject

@property (weak) id<HRAWaveformProcessorLoggingDelegate> logDelegate;
@property (retain, nonatomic) NSUUID *sessionUUID;

- (void).cxx_destruct;
- (id)initWithMinimumUsableDuration:(double)a0 minimumContinuousUsableDuration:(double)a1 minimumSaveableDuration:(double)a2;
- (id)processSamples:(const float *)a0 flags:(const char *)a1 count:(unsigned long long)a2 samplingRate:(float)a3 startDate:(id)a4;
- (id)processWaveform:(id)a0;

@end
