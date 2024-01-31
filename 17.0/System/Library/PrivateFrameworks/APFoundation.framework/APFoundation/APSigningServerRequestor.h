@class NSURLSession;

@interface APSigningServerRequestor : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (nonatomic) unsigned long long serverRequestorId;

- (id)deviceModel;
- (id)init;
- (id)userAgentString;
- (void).cxx_destruct;
- (BOOL)_retrieveResponse:(void **)a0 andLength:(unsigned int *)a1 fromData:(id)a2 error:(id *)a3;
- (void)sendRequest:(id)a0 requestType:(long long)a1 numRetry:(long long)a2 completionHandler:(id /* block */)a3;
- (void)sendRequestForData:(id)a0 requestType:(long long)a1 completionHandler:(id /* block */)a2;
- (id)systemNameAndVersion;

@end
