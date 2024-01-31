@class NSError, NSString, NWConcrete_nw_connection, NWURLSessionTaskConfiguration, NSURLRequest, NSObject, NSCachedURLResponse, NWURLLoaderCache;
@protocol OS_nw_content_context, OS_sec_trust, NWURLSessionRequestBodyProvider, NWURLLoaderClient, OS_dispatch_queue;

@interface NWURLLoaderHTTP : NSObject <NWURLLoader> {
    BOOL _ready;
    BOOL _pendingCompletion;
    BOOL _cancelled;
    BOOL _allowCaching;
    BOOL _loadingFromCache;
    BOOL _revalidateCachedResponse;
    BOOL _dataDelivered;
    BOOL _isResponseMixed;
    NSURLRequest *_request;
    long long _bodyKnownSize;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
    id<NWURLSessionRequestBodyProvider> _requestBodyProvider;
    NWConcrete_nw_connection *_connection;
    NSObject<OS_nw_content_context> *_requestContext;
    NSObject<OS_nw_content_context> *_nextRequestContext;
    NSError *_pendingError;
    NWURLLoaderCache *_cache;
    NSCachedURLResponse *_cachedResponse;
    id /* block */ _responseCompletionHandler;
}

@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, nonatomic) NWConcrete_nw_connection *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start:(id /* block */)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)responseIsMixed;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
