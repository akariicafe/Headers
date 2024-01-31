@class HKHRAFibBurdenAnalyzer;

@interface HDHRAFibBurdenHistogramQueryServer : HDQueryServer {
    HKHRAFibBurdenAnalyzer *_analyzer;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (id)objectTypes;
- (void).cxx_destruct;
- (id)_makeEmptyHistogramResult;

@end
