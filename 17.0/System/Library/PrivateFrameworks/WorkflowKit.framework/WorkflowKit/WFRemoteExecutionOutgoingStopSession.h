@interface WFRemoteExecutionOutgoingStopSession : WFRemoteExecutionSession

- (void)finishWithError:(id)a0;
- (id)initWithService:(id)a0 request:(id)a1;
- (BOOL)sendToDestinations:(id)a0 options:(id)a1 error:(id *)a2;

@end
