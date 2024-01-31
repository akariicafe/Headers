@class NSXPCConnection;

@interface STAskServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)approveExceptionForRequest:(id)a0 error:(id *)a1;
- (void)fetchLastResponseForRequestedResourceIdentifier:(id)a0 usageType:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleAnswer:(long long)a0 requestIdentifier:(id)a1 timeApproved:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendAskForTimeRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
