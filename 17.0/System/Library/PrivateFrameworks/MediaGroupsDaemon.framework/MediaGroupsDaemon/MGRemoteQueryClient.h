@class NSURLSessionDataTask, NSHTTPURLResponse, MGRemoteQueryClientTarget, NSError, NSMutableData, NSObject;
@protocol MGRemoteQueryClientDelegate, OS_dispatch_queue, MGRemoteQueryClientHandlerProtocol;

@interface MGRemoteQueryClient : NSObject

@property (readonly, weak, nonatomic) id<MGRemoteQueryClientDelegate> delegate;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long protocolVersion;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (nonatomic) unsigned long long expectedPayloadSize;
@property (retain, nonatomic) NSMutableData *payload;
@property (nonatomic) BOOL processedResult;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<MGRemoteQueryClientHandlerProtocol> *handler;
@property (readonly, nonatomic) MGRemoteQueryClientTarget *target;
@property (readonly, nonatomic) NSURLSessionDataTask *task;

+ (id)clientWithHandler:(id)a0 target:(id)a1 dispatchQueue:(id)a2 delegate:(id)a3 usingSession:(id)a4;

- (void)dealloc;
- (void)_invalidated;
- (void)_invalidate;
- (void)_handleError:(id)a0;
- (id)query;
- (id)description;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
- (void)_responseStart:(id)a0;
- (id)_initWithHandler:(id)a0 target:(id)a1 dispatchQueue:(id)a2 delegate:(id)a3 session:(id)a4;
- (void)_prepareConnection:(id)a0;
- (id)_prepareRequest:(id)a0;
- (id)_prepareURL;
- (void)_responseAppend:(id)a0;
- (void)_responseComplete;
- (BOOL)_responseValidate:(id)a0;
- (void)consumeData:(id)a0;
- (void)consumeResponse:(id)a0;

@end
