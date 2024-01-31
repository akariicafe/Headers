@class RTPlatform, NSArray, RTManagedConfiguration, RTXPCActivityManager, AWDServerConnection;

@interface RTMetricManager : RTService

@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) NSArray *configuredMetricClasses;
@property (retain, nonatomic) AWDServerConnection *awdServerConnection;
@property (retain, nonatomic) RTManagedConfiguration *managedConfigurationManager;
@property (retain, nonatomic) RTXPCActivityManager *xpcActivityManager;

+ (id)metricForType:(unsigned long long)a0;
+ (int)doubleToInt:(double)a0 shifts:(int)a1;
+ (id)productionMetrics;
+ (int)roundTimeInterval:(double)a0 byIntervalUnit:(unsigned long long)a1;
+ (int)intWithSignificantDigits:(int)a0 digits:(int)a1;
+ (double)doubleWithSignificantDigits:(double)a0 digits:(int)a1;

- (BOOL)setupWithConfiguredClasses:(id)a0 platform:(id)a1 error:(id *)a2;
- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_releaseMetricPlaceholderForMetric:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithPlatform:(id)a0 xpcActivityManager:(id)a1;
- (void)_submitMetric:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithAWDServerConnection:(id)a0 configuredClasses:(id)a1 managedConfigurationManager:(id)a2 platform:(id)a3 xpcActivityManager:(id)a4;
- (void)registerForXPCActivities:(id)a0;
- (void)fetchDiagnosticsEnabled:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_fetchDiagnosticsEnabled:(id /* block */)a0;
- (void)submitMetric:(id)a0 withHandler:(id /* block */)a1;
- (void)submitMetric:(id)a0;
- (id)createMetricForType:(unsigned long long)a0;
- (void)registerQueriableMetric:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (BOOL)_routineConfiguredForMetric:(id)a0;
- (void)_registerQueriableMetric:(unsigned long long)a0 withHandler:(id /* block */)a1;

@end
