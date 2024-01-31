@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_os_log;

@interface EFAutoBugCaptureReporter : NSObject <EFLoggable>

@property (class, readonly, nonatomic) EFAutoBugCaptureReporter *sharedReporter;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) SDRDiagnosticReporter *diagnosticReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reportIssueType:(id)a0 description:(id)a1;

@end
