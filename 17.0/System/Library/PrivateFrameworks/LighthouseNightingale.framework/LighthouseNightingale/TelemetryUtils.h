@class NightingaleTelemetryIdentifiers;

@interface TelemetryUtils : NSObject

@property (class, retain, nonatomic) NightingaleTelemetryIdentifiers *nightingaleTelemetryIdentifiers;

+ (void)sendPerCycleModelMetrics:(id)a0;
+ (void)sendReachUpdateWithReachLocationString:(id)a0 andError:(id)a1;
+ (void)setNightingaleTelemetryIdentifiers:(id)a0 treatmentId:(id)a1 deploymentId:(int)a2 reachId:(id)a3;

@end
