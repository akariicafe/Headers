@class NSXPCConnection;

@interface PAImageConversionServiceClient : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)convertImageAtSourceURLCollection:(id)a0 toDestinationURLCollection:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)convertImageAtSourceURL:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)requestStatusWithCompletionHandler:(id /* block */)a0;
- (void)sendRequestWithOptions:(id)a0 sourceURLCollection:(id)a1 destinationURLCollection:(id)a2 jobIdentifier:(id)a3 attemptCount:(long long)a4 completionHandler:(id /* block */)a5;
- (void)setupServiceConnection;

@end
