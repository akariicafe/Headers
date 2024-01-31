@class HDHealthStoreClient, NSString, HDProfile, NSObject, HDMCProfileExtension;
@protocol OS_dispatch_queue;

@interface HDMCPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface> {
    HDProfile *_profile;
    HDMCProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)diagnosticDescription;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)a0 intermenstrualBleedingByDayIndex:(id)a1 addedCycleFactors:(id)a2 initialAnalysisWindow:(struct { long long x0; long long x1; })a3 completion:(id /* block */)a4;
- (void)remote_fetchScheduledNotificationsWithCompletion:(id /* block */)a0;
- (void)remote_saveDaySummaries:(id)a0 canOverrideCreationDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 completion:(id /* block */)a1;
- (void)remote_saveMenstrualFlow:(long long)a0 dayIndex:(long long)a1 updateAdjacentDays:(BOOL)a2 completion:(id /* block */)a3;
- (void)remote_saveMenstrualFlowByDayIndex:(id)a0 completion:(id /* block */)a1;
- (void)remote_savePeriodEndedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)remote_savePeriodNotYetEndedWithCompletion:(id /* block */)a0;
- (void)remote_savePeriodNotYetStartedWithCompletion:(id /* block */)a0;
- (void)remote_savePeriodStartedOnDayIndex:(long long)a0 completion:(id /* block */)a1;
- (void)remote_savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 completion:(id /* block */)a2;
- (void)remote_triggerAnalysisForDebugReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)_queue_saveMenstrualFlow:(long long)a0 forEachDayInRange:(struct { long long x0; long long x1; })a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_deleteSamplesOfType:(id)a0 onDayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_insertSamplesWithClientSource:(id)a0 creationDate:(id)a1 error:(id *)a2;
- (BOOL)_queue_insertSamplesWithClientSource:(id)a0 error:(id *)a1;
- (id)_queue_mostRecentMenstrualFlowSampleWithError:(id *)a0 requiringBeforeDay:(long long)a1 calendarCache:(id)a2;
- (BOOL)_queue_reconcileSamplesToDeriveDaySummary:(id)a0 analysis:(id)a1 canOverrideCreationDate:(BOOL)a2 error:(id *)a3;
- (BOOL)_queue_saveIntermenstrualBleedingByDayIndex:(id)a0 calendarCache:(id)a1 error:(id *)a2;
- (BOOL)_queue_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })a0 calendarCache:(id)a1 error:(id *)a2;
- (BOOL)_queue_saveMenstrualFlowByDayIndex:(id)a0 calendarCache:(id)a1 error:(id *)a2;
- (BOOL)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)a0 dayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (BOOL)_queue_savePeriodStartedOnDayIndex:(long long)a0 endedOnDayIndex:(long long)a1 calendarCache:(id)a2 error:(id *)a3;
- (void)_queue_updateLastLoggedInExperienceDate;
- (BOOL)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)a0 calendarCache:(id)a1 canOverrideCreationDate:(BOOL)a2 error:(id *)a3;
- (BOOL)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)a0 withDaySummary:(id)a1 calendarCache:(id)a2 canOverrideCreationDate:(BOOL)a3 error:(id *)a4;
- (id)_samplesToInsertForUpdateFromDaySummary:(id)a0 toDaySummary:(id)a1 typesToDelete:(id *)a2 calendarCache:(id)a3;
- (void)_submitPredictionAccuracyAnalyticWithDayIndex:(long long)a0 oldMenstrualFlow:(long long)a1 newMenstrualFlow:(long long)a2 analysis:(id)a3 isLoggingMultipleDays:(BOOL)a4;
- (void)_triggerImmediateSync;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 profileExtension:(id)a4;

@end
