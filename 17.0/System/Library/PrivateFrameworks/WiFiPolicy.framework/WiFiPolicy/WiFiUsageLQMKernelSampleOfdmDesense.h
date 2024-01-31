@class NSString, NSDate;

@interface WiFiUsageLQMKernelSampleOfdmDesense : WiFiUsageLQMSample

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long ofdmDesense;
@property (nonatomic) unsigned long long bPhyDesense;
@property (retain, nonatomic) NSString *desenseReason;
@property (nonatomic) double duration;

+ (id)featureFromFieldName:(id)a0;
+ (id)allLQMProperties;
+ (id)sampleWithStruct:(struct { unsigned int x0; int x1; int x2; unsigned int x3; } *)a0 andTimestamp:(id)a1;

- (void).cxx_destruct;
- (id)initWithStruct:(struct { unsigned int x0; int x1; int x2; unsigned int x3; } *)a0 andTimestamp:(id)a1;

@end
