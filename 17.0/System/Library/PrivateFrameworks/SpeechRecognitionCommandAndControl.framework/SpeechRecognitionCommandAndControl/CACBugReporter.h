@class SDRDiagnosticReporter;

@interface CACBugReporter : NSObject

@property (retain) SDRDiagnosticReporter *diagnosticReporter;

+ (id)sharedReporter;

- (id)init;
- (void).cxx_destruct;
- (void)reportIssue:(id)a0 subtype:(id)a1 description:(id)a2;
- (void)reportIssue:(id)a0 subtype:(id)a1 description:(id)a2 completionBlock:(id /* block */)a3;

@end
