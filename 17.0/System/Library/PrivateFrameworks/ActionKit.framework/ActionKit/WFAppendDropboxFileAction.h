@interface WFAppendDropboxFileAction : WFStorageServiceAction

- (BOOL)isProgressIndeterminate;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)filenamePlaceholderText;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;
- (id)storageService;

@end
