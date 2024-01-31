@class GEOTaskQueue, NSString, PBRequest, GEOApplicationAuditToken, GEOMapServiceTraits, GEODataRequestThrottlerToken, GEOPBOfflineRequestMetadata;
@protocol GEOServiceRequestConfiguring, MapsOfflineServiceV1;

@interface GEOOfflineServiceRequesterOperation : NSObject <GEOTaskQueueTask, GEOServiceRequesterOperation> {
    id<MapsOfflineServiceV1> _service;
    BOOL _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id /* block */ _willSendRequestHandler;
    id /* block */ _validationHandler;
    id /* block */ _completionHandler;
    id<GEOServiceRequestConfiguring> _config;
    GEOApplicationAuditToken *_auditToken;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _dataRequestKind;
    GEOMapServiceTraits *_traits;
    double _timeout;
    GEODataRequestThrottlerToken *_throttleToken;
    GEOPBOfflineRequestMetadata *_requestMetadata;
    GEOTaskQueue *_taskQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)_start;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (void)runTask;
- (void)_processRequestWithAvailableRegions:(id)a0 requestToSend:(id)a1;
- (void)_requestCompletedWithResponse:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 options:(unsigned long long)a5 willSendRequestHandler:(id /* block */)a6 validationHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
- (id)parseResponse:(id)a0 ofType:(Class)a1;

@end
