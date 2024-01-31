@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient

- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithLinkAction:(id)a0 appBundleIdentifier:(id)a1 extensionBundleIdentifier:(id)a2 runSource:(long long)a3 authenticationPolicy:(long long)a4;
- (id)initWithLinkAction:(id)a0 bundleIdentifier:(id)a1 runSource:(long long)a2;

@end
