@class NSMutableDictionary, MSDiagnosticManager, NSObject;
@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject

@property (retain, nonatomic) MSDiagnosticManager *diagnosticManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue;
@property (nonatomic) unsigned long long maxLoadingTimeSeconds;
@property (readonly, copy, nonatomic) NSMutableDictionary *messageLoadTimes;
@property (copy, nonatomic) id /* block */ startedRecordingHandler;
@property (copy, nonatomic) id /* block */ endedRecordingHandler;

- (void).cxx_destruct;
- (void)endAllRecording;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)a0;
- (void)_commonInitWithDiagnosticManager:(id)a0 maxLoadingTimeSeconds:(unsigned long long)a1;
- (void)_endRecordingForMessage:(id)a0;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)a0;
- (void)_startTimeoutForMessage:(id)a0;
- (void)endRecordingForMessage:(id)a0;
- (id)initWithDiagnosticManager:(id)a0;
- (id)initWithDiagnosticManager:(id)a0 maxLoadingTimeSeconds:(unsigned long long)a1;
- (void)startRecordingForMessage:(id)a0;

@end
