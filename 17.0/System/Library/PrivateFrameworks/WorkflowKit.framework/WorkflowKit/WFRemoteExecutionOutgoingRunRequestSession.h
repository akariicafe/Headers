@class WFRemoteExecutionFileCoordinator, WFRemoteExecutionRunRequest, WFRemoteExecutionCoordinator;
@protocol WFActionParameterInputProvider, WFUserInterfaceHost;

@interface WFRemoteExecutionOutgoingRunRequestSession : WFRemoteExecutionSession

@property (retain, nonatomic) WFRemoteExecutionRunRequest *request;
@property (retain, nonatomic) WFRemoteExecutionFileCoordinator *fileCoordinator;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) id<WFUserInterfaceHost> userInterface;
@property (readonly, nonatomic) id<WFActionParameterInputProvider> parameterInputProvider;
@property (readonly, weak, nonatomic) WFRemoteExecutionCoordinator *coordinator;

- (void)finish;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)a0 withIdentifier:(id)a1 metadata:(id)a2;
- (void)handleIncomingProtobuf:(id)a0;
- (void)handleTimeout;
- (id)initWithService:(id)a0 request:(id)a1 userInterface:(id)a2 parameterInputProvider:(id)a3 coordinator:(id)a4 completion:(id /* block */)a5;
- (void)sendToDestinations:(id)a0 options:(id)a1;
- (double)timeoutLimitInSeconds;

@end
