@class WFHarnessTestResult;

@interface WFHarnessTestRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) WFHarnessTestResult *testResult;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTestResult:(id)a0;

@end
