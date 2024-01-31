@interface WFGetFileLinkAction : WFStorageServiceInputAction

- (void)getContentDestinationWithCompletionHandler:(id /* block */)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;

@end
