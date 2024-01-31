@class NSString, DRConfigMonitor, NSDate;

@interface PLRapidController : NSObject

@property long long stage;
@property double samplingPercentage;
@property (retain) NSString *taskingRequestReason;
@property (retain) NSDate *logCreationStartDate;
@property (retain) NSDate *logCreationEndDate;
@property (retain) NSDate *logCreationResumeDate;
@property (retain) NSString *mdLogFilePath;
@property (retain) NSString *mdLogCompressedFilePath;
@property (retain) NSString *mssFilePath;
@property (retain) NSString *mssCompressedFilePath;
@property (retain) NSString *failureReason;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (retain) NSString *configUUID;

+ (id)sharedInstance;
+ (BOOL)diagnosticLogSubmissionEnabled;
+ (int)hangTypeFromStr:(id)a0;
+ (void)cleanup;
+ (void)offsetTimestampsInDB:(id)a0 withConfig:(id)a1 withBaseTimestamp:(double)a2;
+ (BOOL)deferActivity:(id)a0;
+ (void)roundDataInDB:(id)a0 withConfig:(id)a1;
+ (BOOL)randomBoolWithYesPercentage:(double)a0;
+ (id)allTablesInDB:(id)a0;
+ (void)dropTablesFromDB:(id)a0 excludingSet:(id)a1;
+ (id)appsToKeep:(id)a0;
+ (id)dataCollectionCriterion;
+ (BOOL)finishActivity:(id)a0 withStatus:(long long)a1;
+ (id)trimConditionsForTables:(id)a0 trimDate:(id)a1;
+ (void)dropDataFromDB:(id)a0 withConfig:(id)a1;

- (id)setupConnection;
- (void)rejectTaskingConfig:(id)a0;
- (id)init;
- (void)setMDLogCompressedFilePath;
- (void)setLogCreationStartDate;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (BOOL)preparePerfPowerlog:(id)a0 shouldDefer:(BOOL *)a1;
- (id)configFromMonitor:(id)a0;
- (void)setMDLogFilePath;
- (id)generateContextDictionary:(id)a0;
- (void)logSignpostDataToDB:(id)a0;
- (void)dropAppVersions:(id)a0;
- (BOOL)prepareMSSLog;
- (BOOL)packageDB:(id)a0;
- (void)dropDuplicateRows:(id)a0;
- (void)persistActivityState;
- (id)uploadLog:(id)a0;
- (void)setMSSFilePath;
- (id)packageAllLogs;
- (void)completeTaskingConfig:(id)a0;
- (void)registerDataCollectionActivity;
- (void)handleXPCActivityCallback:(id)a0;
- (id)topAppsRunTime;
- (void)resetActivity;
- (void)initializeTaskingParams;
- (void)logToCALogGenerationStats:(id)a0;
- (void)createHangTableInDB:(id)a0;
- (id)generateDummyPayload;
- (void).cxx_destruct;
- (void)logToCADataUploadState:(id)a0;
- (void)logHangSignposts:(id)a0 toDB:(id)a1;
- (void)stopDRTasking;
- (void)setupDRTasking;
- (void)addMSSContext:(id)a0;
- (id)logGenerationStats;
- (void)setMSSCompressedFilePath;
- (void)pruneDB:(id)a0 withConfig:(id)a1;
- (BOOL)shouldDoRapidCollection;
- (BOOL)isUploadSizeWithinLimit:(id)a0;
- (void)trimAndFilterDB:(id)a0 withConfig:(id)a1;
- (void)initializeSamplingPercentage;
- (void)addMDLogContext:(id)a0;
- (BOOL)copyDB;

@end
