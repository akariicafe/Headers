@interface WFGetFileAction : WFStorageServiceAction

- (id)contentDestinationWithError:(id *)a0;
- (BOOL)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)a0 storageService:(id)a1;

@end
