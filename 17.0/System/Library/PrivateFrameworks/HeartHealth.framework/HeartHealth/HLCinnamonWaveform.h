@class NSDate;

@interface HLCinnamonWaveform : NSObject

@property (readonly, nonatomic) const float *samples;
@property (readonly, nonatomic) const char *flags;
@property (readonly, nonatomic) unsigned long long numberOfSamples;
@property (readonly, nonatomic) float samplingRate;
@property (readonly, nonatomic) NSDate *startDate;

- (void).cxx_destruct;

@end
