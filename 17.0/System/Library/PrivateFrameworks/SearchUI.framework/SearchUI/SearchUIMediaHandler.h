@class INIntent, NSString, WFSpotlightResultWorkflowRunnerClient, SFMediaMetadata;

@interface SearchUIMediaHandler : SearchUICommandHandler <WFWorkflowRunnerClientDelegate>

@property (retain) WFSpotlightResultWorkflowRunnerClient *workflowClient;
@property (readonly) NSString *clientSelectedBundleIdentifier;
@property (readonly) INIntent *intent;
@property (readonly) SFMediaMetadata *mediaMetadata;
@property (readonly) BOOL supportsIntentPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)executeFallbackPath;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)performIntent:(id)a0 withBundleIdentifier:(id)a1;
- (BOOL)prefersModalPresentation;

@end
