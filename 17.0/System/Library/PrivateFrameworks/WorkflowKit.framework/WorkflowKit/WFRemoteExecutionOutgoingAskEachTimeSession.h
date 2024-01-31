@class WFRemoteExecutionAskEachTimeRequest;

@interface WFRemoteExecutionOutgoingAskEachTimeSession : WFRemoteExecutionSession

@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) WFRemoteExecutionAskEachTimeRequest *request;

- (void)finish;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)finishWithoutCallingCompletion;
- (void)handleIncomingProtobuf:(id)a0;
- (void)handleTimeout;
- (id)initWithService:(id)a0 request:(id)a1 completion:(id /* block */)a2;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (double)timeoutLimitInSeconds;

@end
