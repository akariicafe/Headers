@class NSDate;

@interface HUNoiseSample : NSObject

@property (retain, nonatomic) NSDate *sampleDate;
@property (nonatomic) float splValue;
@property (nonatomic) float sampleDuration;

- (void).cxx_destruct;
- (id)initWithSampleDate:(id)a0 splValue:(float)a1 andDuration:(float)a2;

@end
