@class NSString, NSBackgroundActivityScheduler, EDSearchableIndexPersistence, NSObject;
@protocol OS_os_log, EFCancelable;

@interface EDSearchableIndexDiagnosticsController : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<EFCancelable> stateCancelable;
@property (retain, nonatomic) NSBackgroundActivityScheduler *indexingDiagnosticsScheduler;
@property (retain, nonatomic) EDSearchableIndexPersistence *persistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithPersistence:(id)a0;
- (void).cxx_destruct;
- (void)startCollection;
- (void)_stopCollection;
- (id)_debuggingDiagnostics;
- (void)_logDebuggingDiagnostics:(id)a0;
- (void)_registerDebuggingDiagnosticsCaptureHandler;
- (void)_startLoggingDebuggingDiagnostics;
- (void)_stopLoggingDebuggingDiagnostics;
- (void)_unregisterDebuggingDiagnosticsCaptureHandler;

@end
