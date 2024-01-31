@class WFHarnessTestRunDescriptor;

@interface WFHarnessTestRunRequest : WFWorkflowRunRequest

@property (readonly, nonatomic) WFHarnessTestRunDescriptor *testRunDescriptor;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithTestBundleURL:(id)a0 xcTestClass:(id)a1 testIdentifier:(id)a2 automationType:(id)a3;

@end
