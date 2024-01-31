@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void)stopMonitoring;
- (BOOL)isMonitoring;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startMonitoring;
- (BOOL)isNetworkUp;

@end
