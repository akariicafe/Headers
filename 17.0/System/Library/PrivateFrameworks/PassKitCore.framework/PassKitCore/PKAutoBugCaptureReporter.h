@class SDRDiagnosticReporter;

@interface PKAutoBugCaptureReporter : NSObject {
    SDRDiagnosticReporter *sdrReporter;
}

- (void)handleResponse:(id)a0;
- (BOOL)isRunningUnitTests;
- (void).cxx_destruct;
- (BOOL)isExpectedFailureReason:(int)a0;
- (void)reportIssueWithDomain:(id)a0 type:(id)a1 subtype:(id)a2 subtypeContext:(id)a3 payload:(id)a4;
- (BOOL)shouldReportIssueOfType:(id)a0;

@end
