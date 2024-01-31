@class HKMCSettingsManager, NSString, HKCalendarCache, HDMCAnalysisManager;

@interface HDMCAnalysisScheduler : NSObject <HDHealthDaemonReadyObserver> {
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    HKCalendarCache *_calendarCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)_registerActivityAfterCompletion:(BOOL)a0;
- (void)dealloc;
- (id)initWithDaemon:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2 calendarCache:(id)a3;
- (double)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)a0;
- (void).cxx_destruct;
- (void)_handleActivity:(id)a0 forceRescheduleOnCheckIn:(BOOL)a1;
- (void)_runAnalysis;

@end
