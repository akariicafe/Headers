@class NSError, NSString, GEODataRequestThrottlerToken, PBCodable, GEOApplicationAuditToken, NSObject, GEODataURLSessionTask, GEOClientMetrics, GEOProtobufSession;
@protocol OS_dispatch_queue, GEOProtobufSessionTaskDelegate;

@interface GEOProtobufSessionTask : NSObject <GEODataURLSessionTaskDelegate> {
    Class _responseClass;
    GEODataURLSessionTask *_dataTask;
    GEOProtobufSession *_session;
    id<GEOProtobufSessionTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    PBCodable *_response;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _requestKind;
    GEOApplicationAuditToken *_auditToken;
    BOOL _completedAsCancelled;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL completedAsCancelled;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PBCodable *response;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) unsigned int requestTypeCode;
@property (readonly, nonatomic) GEODataURLSessionTask *dataTask;

- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (BOOL)parseResponseTypeWithReader:(id)a0;
- (id)init;
- (void)start;
- (void)_decodeResponseFromTask:(id)a0 completion:(id /* block */)a1;
- (id)parseResponseFromResponseData:(id)a0;
- (id)parseInnerProtobufFromData:(id)a0;
- (BOOL)parsePreambleWithReader:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)dataURLSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (void)completeWithErrorCode:(long long)a0;
- (BOOL)parseProtocolVersionWithReader:(id)a0;

@end
