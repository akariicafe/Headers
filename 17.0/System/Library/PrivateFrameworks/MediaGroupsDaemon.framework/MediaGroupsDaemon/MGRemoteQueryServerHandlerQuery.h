@class MGGroupQuery, NSString, NSArray, NSPredicate, NSError, NSURLRequest;

@interface MGRemoteQueryServerHandlerQuery : NSObject <MGRemoteQueryServerHandlerProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSPredicate *requestPredicate;
@property (retain, nonatomic) NSString *responseBoundary;
@property (retain, nonatomic) MGGroupQuery *query;
@property (retain, nonatomic) NSArray *queryGroups;
@property (retain, nonatomic) NSError *queryError;
@property (copy, nonatomic) id /* block */ payloadProvider;
@property (nonatomic) BOOL pendingUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)urlPath;
+ (id)handlerForRequest:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (id)_initWithRequest:(id)a0;
- (BOOL)validateRequest;
- (void)_queryStart;
- (void)_queryHandleResults:(id)a0 error:(id)a1;
- (void)_querySendResults;
- (void)_requestParse;
- (int)prepareResponse:(id)a0;
- (void)provideResponseData:(id /* block */)a0;

@end
