@class NSString, NSDictionary;

@interface PXPPTLoadingLatencyMeter : NSObject {
    struct { double minValue; double maxValue; double totalValue; unsigned long long count; } _lowQualityResults;
    struct { double minValue; double maxValue; double totalValue; unsigned long long count; } _mediumQualityResults;
    struct { double minValue; double maxValue; double totalValue; unsigned long long count; } _highQualityResults;
    NSString *_outputType;
}

@property (class, readonly, nonatomic) PXPPTLoadingLatencyMeter *sharedInstance;

@property (retain, nonatomic) NSString *measurementsUnit;
@property (readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;

+ (void)startMeasurementsForOutputType:(id)a0;
+ (void)stopMeasurements;

- (void).cxx_destruct;
- (void)reportLatency:(double)a0 forOutputQuality:(long long)a1;
- (id)_measurementsDictionaryForOutputQuality:(long long)a0;
- (id)initWithOutputType:(id)a0;
- (struct { double x0; double x1; double x2; unsigned long long x3; })measurementsForOutputQuality:(long long)a0;

@end
