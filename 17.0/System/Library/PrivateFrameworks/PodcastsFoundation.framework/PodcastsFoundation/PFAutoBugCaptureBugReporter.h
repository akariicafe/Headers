@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface PFAutoBugCaptureBugReporter : NSObject {
    SDRDiagnosticReporter *_reporter;
    NSObject<OS_dispatch_queue> *_reportQueue;
}

+ (id)sharedInstance;

- (id)_processName;
- (id)init;
- (void).cxx_destruct;
- (void)_executeSubmitBugReport:(id)a0 userInfo:(id /* block */)a1 withMaximumSubmissionCadence:(double)a2;
- (id)_lastSubmissionTimeForReport:(id)a0;
- (void)_reportSignature:(id)a0 forReport:(id)a1;
- (void)_scheduleSubmissionOfBugReport:(id)a0 withUserInfo:(id)a1;
- (void)_setLastSubmissionTime:(id)a0 forReport:(id)a1;
- (void)_submitBugReport:(id)a0 withUserInfo:(id)a1;
- (BOOL)_timeSinceLastSimilarReport:(id)a0 hasExceededElapsedTimeThreshold:(double)a1;
- (BOOL)canSubmitNewReport:(id)a0 withMinimumElapsedTime:(double)a1;
- (void)submitBugReport:(id)a0 userInfo:(id /* block */)a1 withMaximumSubmissionCadence:(double)a2;

@end
