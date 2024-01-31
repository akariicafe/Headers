@class NSString, NSDate;

@interface WiFiUsageLQMKernelSampleScanSummary : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long scanDurationMS;
@property (retain, nonatomic) NSString *scanClient;
@property (nonatomic) double duration;

+ (id)featureFromFieldName:(id)a0;
+ (id)allLQMProperties;
+ (id)sampleWithStruct:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 andTimestamp:(id)a1;

@end
