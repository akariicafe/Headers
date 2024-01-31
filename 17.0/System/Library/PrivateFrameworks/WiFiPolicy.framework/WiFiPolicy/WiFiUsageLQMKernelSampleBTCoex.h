@class NSDate;

@interface WiFiUsageLQMKernelSampleBTCoex : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long btAntennaDurationPerc;
@property (nonatomic) double duration;

+ (id)sampleWithStruct:(struct btInfo { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct btInfo { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 andTimestamp:(id)a1;

@end
