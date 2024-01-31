@class AnalyticsWorkspace, DiagnosticCaseUsageAnalytics, NSObject;
@protocol OS_dispatch_queue;

@interface DiagnosticStatisticsManager : NSObject {
    AnalyticsWorkspace *_workspace;
    DiagnosticCaseUsageAnalytics *_caseUsageSpace;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)getDiagnosticCaseUsageStatistics:(id /* block */)a0;
- (void)_updateDailyCaseStatisticsWith:(id)a0;
- (id)_createDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void)updateCaseStatisticsWith:(id)a0;
- (void)cleanupDiagnosticCaseUsage;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)a0;
- (void)_updateCaseStatisticsWith:(id)a0;
- (void)_updateDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3 lastSeen:(id)a4 dampeningType:(BOOL)a5;
- (long long)_removeDiagnosticCaseUsageMatchingDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3;
- (void).cxx_destruct;
- (double)_calculateAverageCasesPerDayFromDailyAggregatedStatistics;
- (id)_retrieveDiagnosticCaseUsageForDomain:(id)a0 type:(id)a1 subType:(id)a2 process:(id)a3 onOrAfter:(id)a4 create:(BOOL)a5;
- (id)initWithWorkspace:(id)a0 queue:(id)a1;
- (void)resetDiagnosticCaseUsage;
- (void)_checkFileWritingLimits:(id)a0;

@end
