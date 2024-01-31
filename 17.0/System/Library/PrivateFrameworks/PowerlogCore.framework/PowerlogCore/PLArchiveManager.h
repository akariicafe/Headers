@class NSString, NSMutableArray, NSDate;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>

@property double interval;
@property double mustRunInterval;
@property double EPSQLVacuumInterval;
@property double PLSQLDBDuration;
@property double EPSQLDBDuration;
@property double CESQLDBDuration;
@property double archiveRetention;
@property (retain) NSMutableArray *archiveJobs;
@property (nonatomic) BOOL interrupted;
@property (retain) NSMutableArray *notificationBlocks;
@property (retain) NSDate *lastEPSQLVacuumDate;
@property BOOL monotonicResetOccurred;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)storageQueue;
+ (id)allArchivePaths;
+ (id)workQueue;
+ (id)archiveEntriesWithComparisons:(id)a0;
+ (id)archiveEntriesFinished;
+ (id)lastArchivePath;
+ (id)archiveEntriesUnfinished;
+ (void)systemTimeChangedByOffset:(double)a0;

- (void)migrate;
- (void)recover;
- (void)enable;
- (id)init;
- (void)dealloc;
- (void)disable;
- (void)registerForArchivingNotificationUsingBlock:(id /* block */)a0;
- (void)migrateArchive:(id)a0;
- (void)runInitialActivity;
- (void)cleanup;
- (void)trimExtendedPersistenceLog;
- (void)handleFailure:(long long)a0 forArchiveEntry:(id)a1;
- (id)getArchivingCriteria;
- (void)deprecateTables;
- (void)runArchiveJobs;
- (void)scheduleArchiveJobs;
- (BOOL)isInterrupted;
- (void).cxx_destruct;
- (void)deprecateTablesEPSQL;
- (void)trimCleanEnergyLog;
- (BOOL)eliglibleToVacuumEPSQLForDate:(id)a0;
- (void)deprecateTablesCESQL;
- (void)runActivityWithLastCompletedDate:(id)a0;

@end
