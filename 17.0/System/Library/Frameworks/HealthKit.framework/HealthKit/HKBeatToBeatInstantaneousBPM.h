@interface HKBeatToBeatInstantaneousBPM : NSObject

@property (readonly, nonatomic) double bpm;
@property (readonly, nonatomic) double time;

- (id)initWithBPM:(double)a0 time:(double)a1;

@end
