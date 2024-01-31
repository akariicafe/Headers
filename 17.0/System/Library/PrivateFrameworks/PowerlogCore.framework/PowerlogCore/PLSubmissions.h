@class NSMutableArray, NSString, PLSQLiteConnection, DRConfigMonitor, NSNumber, PLStorageOperator;

@interface PLSubmissions : NSObject

@property (retain) PLSQLiteConnection *connection;
@property (retain) NSString *request;
@property (retain) NSString *filterQuery;
@property (retain) NSString *onDemandTasking;
@property (retain) NSNumber *capValue;
@property (retain) DRConfigMonitor *taskingMonitor;
@property (weak) PLStorageOperator *storageOperator;
@property BOOL xpcActivityStarted;
@property (retain) NSMutableArray *submissionQueue;
@property double lastXPCActivityTimestamp;
@property double xpcActivityDelay;
@property (readonly) BOOL taskingStarted;

+ (id)sharedInstance;

- (void)logTaskingStatus:(int)a0 withAction:(int)a1;
- (id)init;
- (void)handleDRConfigUpdate:(id)a0 error:(id)a1;
- (id)configFromMonitor:(id)a0;
- (void)stopWatchdogForSubmissionActivity:(id)a0;
- (void)initSubmissionQueue;
- (BOOL)taskingBlobLegacyExists;
- (void)disableHangtracer;
- (id)getCurrentDRConfig;
- (void)logOTAStatus:(id)a0;
- (id)getLastBatteryTimestampSystem;
- (void)generatePLLSubmissionWithPayload:(id)a0;
- (BOOL)taskingBlobDRExists;
- (void)removeFileAtURL:(id)a0;
- (BOOL)taskingBlobExists;
- (void)generateOTASubmissionAndSendTaskingEndSubmission:(BOOL)a0;
- (void)clearTaskingDRConfig;
- (void)submitRecordToDiagnosticPipeline:(id)a0 withConfig:(id)a1;
- (void)finishXPCActivity:(id)a0;
- (id)workQueue;
- (void)handleXPCActivityCallback:(id)a0;
- (void)deferXPCActivity:(id)a0;
- (void)submitWithTaskingConfig:(id)a0;
- (void)emitBlobDetectedEvent:(id)a0;
- (void)rejectTaskingDRConfig;
- (void)registerUploadSchedulingActivity;
- (void)emitBlobVerifiedEvent:(id)a0;
- (BOOL)fullModeSubmissionBehavior;
- (void)enableHangtracer;
- (void)persistSubmissionInfo:(id)a0;
- (void)taskingModeSafeguard;
- (void)submitRecord:(id)a0 withActivity:(id)a1;
- (id)generateMSSSubmissionWithPayload:(id)a0;
- (int)checkTaskingCompletionStatus;
- (void).cxx_destruct;
- (void)removeFileAtPath:(id)a0;
- (void)cleanupTemporarySubmissionFilesForTag:(id)a0;
- (void)fileCleanupWithRecord:(id)a0;
- (void)taskingCleanup;
- (void)stopDRTasking;
- (id)createWatchdogForSubmissionActivity:(id)a0;
- (void)setupDRTasking;
- (void)logTaskingTablesTurnedOn:(id)a0;
- (void)enqueueSubmissionRecord:(id)a0;
- (void)emitCollisionEvent:(id)a0;
- (BOOL)taskingTypeSpecified;
- (void)prepareAndEnqueueSubmissionFilesWithConfig:(id)a0;
- (id)enqueueFileForUpload:(id)a0;
- (void)logTaskingStatus:(int)a0 withAction:(int)a1 withTables:(id)a2;
- (void)logSubmissionStateToAnalytics:(id)a0;
- (void)attemptToUnregisterUploadSchedulingActivity;
- (short)submitReasonForToday;
- (void)sendSubmissionIssueSignature:(id)a0;
- (void)taskingModeSetup;
- (BOOL)internalSubmissionBehavior;
- (id)generateCKRecordDictionaryWithRecord:(id)a0;

@end
