@class NSDate;

@interface WiFiUsageLQMKernelSampleRC1Coex : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long rc1DurationPerc;
@property (nonatomic) double duration;

+ (id)sampleWithStruct:(struct rc1Coex { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct rc1Coex { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

@end
