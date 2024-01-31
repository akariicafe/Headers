@protocol _DPMetricsCollector;

@interface _DPReportGenerator : NSObject <_DPMaintenance>

@property (readonly, nonatomic) id<_DPMetricsCollector> metricsCollector;

+ (id)filterNonConformingRecordsFrom:(id)a0;
+ (id)queryKeysForPattern:(id)a0 storage:(id)a1;
+ (unsigned long long)queryRecordCountForKey:(id)a0 withPredicate:(id)a1 storage:(id)a2;
+ (id)queryRecordsForKey:(id)a0 storage:(id)a1;
+ (id)randomizeKeys:(id)a0 andSortByPriority:(BOOL)a1;

- (id)init;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (BOOL)markSubmitted:(id)a0 storage:(id)a1;
- (id)generateReportForKeys:(id)a0 storage:(id)a1;
- (id)generateReportUsing:(id)a0;
- (id)initWithMetricsCollector:(id)a0;
- (void)reportMetricsForKey:(id)a0 toBeSubmitted:(id)a1 currentDate:(id)a2 storage:(id)a3;

@end
