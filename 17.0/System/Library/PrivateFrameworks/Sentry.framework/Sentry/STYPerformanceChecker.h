@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface STYPerformanceChecker : NSObject

@property (retain) NSDictionary *perfCheckerErrors;
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;
@property BOOL underMemoryPressure;
@property BOOL underThermalPressure;

+ (id)sharedPerfChecker;

- (void)dealloc;
- (void)reportError:(long long)a0 report:(id)a1 completionHandler:(id /* block */)a2;
- (void)checkPerformanceOfScenarioReport:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkFramerateOfAnimationScenario:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)triage:(id)a0;
- (void)checkLatencyOfResponsivenessScenario:(id)a0 completionHandler:(id /* block */)a1;

@end
