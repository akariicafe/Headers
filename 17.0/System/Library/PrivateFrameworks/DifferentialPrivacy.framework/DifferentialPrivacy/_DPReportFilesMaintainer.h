@class NSString;

@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance>

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (BOOL)removeFilesFrom:(id)a0 olderThanSecond:(double)a1;
+ (id)reportsInDirectory:(id)a0;
+ (BOOL)retireFiles:(id)a0 toDirectory:(id)a1;
+ (id)retiredReportsPath:(id)a0;

- (id)init;
- (id)initWithDirectoryPath:(id)a0;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (BOOL)doMaintenance;

@end
