@class WFRemoteExecutionDialogRequestResponse;

@interface WFRemoteExecutionIncomingDialogRequestSession : WFRemoteExecutionSession

@property (retain, nonatomic) WFRemoteExecutionDialogRequestResponse *response;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)handleIncomingProtobuf:(id)a0 currentlyActiveSessions:(id)a1 destinations:(id)a2 options:(id)a3;
- (void)handleTimeout;
- (void)sendResponseWithOriginatingRequestIdentifier:(id)a0 dialogResponse:(id)a1 error:(id)a2 destinations:(id)a3 options:(id)a4;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (double)timeoutLimitInSeconds;

@end
