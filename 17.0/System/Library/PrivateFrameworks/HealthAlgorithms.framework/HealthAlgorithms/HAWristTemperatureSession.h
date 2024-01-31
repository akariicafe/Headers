@class NSString, NSDateInterval, NSData, HAWristTemperatureEnumerator, NSMeasurement;

@interface HAWristTemperatureSession : NSObject

@property (readonly, nonatomic) NSData *representation;
@property (readonly, nonatomic) unsigned char dataVersion;
@property (readonly, nonatomic) unsigned long long numWristTemperatures;
@property (readonly, copy, nonatomic) HAWristTemperatureEnumerator *wristTemperatureEnumerator;
@property (readonly, nonatomic) NSDateInterval *sessionInterval;
@property (readonly, nonatomic) NSString *algorithmVersion;
@property (readonly, nonatomic) float a0CorrectionCoefficient;
@property (readonly, nonatomic) float c0CorrectionCoefficient;
@property (readonly, nonatomic) NSMeasurement *meanQuiescentPower;
@property (readonly, nonatomic) NSMeasurement *stdDevQuiescentPower;

+ (void)getPackedWristTemperatureV0Sample:(struct PackedWristTemperatureV0 { unsigned int x0; float x1; float x2; float x3; float x4; unsigned char x5; } *)a0 data:(id)a1 index:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(id)a2;
- (id)sessionIntervalV0WithStartTime:(double)a0;
- (BOOL)parsePacketV0;

@end
