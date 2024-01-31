@interface WFCreateFolderAction : WFStorageServiceAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)minimumSupportedClientVersion;
- (BOOL)requiresRemoteExecution;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)filenamePlaceholderText;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (void)updatePathPrefix;

@end
