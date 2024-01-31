@class NSData, NSNumber, NSDate;

@interface HRAWaveformResult : NSObject

@property (readonly, nonatomic) unsigned long long classification;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) float samplingFrequencyHz;
@property (readonly, nonatomic) NSData *sampleData;
@property (readonly, nonatomic) NSNumber *heartRateBPM;

- (void).cxx_destruct;
- (id)initWithSamples:(const float *)a0 count:(unsigned long long)a1 samplingRate:(float)a2 startDate:(double)a3 heartRate:(id)a4 classification:(unsigned long long)a5;

@end
