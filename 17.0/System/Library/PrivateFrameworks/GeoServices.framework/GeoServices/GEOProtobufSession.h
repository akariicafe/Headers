@class GEODataURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface GEOProtobufSession : NSObject {
    GEODataURLSession *_dataSession;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedDelegateQueue;

+ (id)sharedProtobufSession;

- (id)init;
- (void).cxx_destruct;
- (id)taskWithRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 protobufRequest:(id)a1 URL:(id)a2 additionalHTTPHeaders:(id)a3 auditToken:(id)a4 traits:(id)a5 delegate:(id)a6 delegateQueue:(id)a7 requestCounterTicket:(id)a8 multipathServiceType:(unsigned long long)a9 multipathAlternatePort:(unsigned long long)a10 throttleToken:(id)a11 options:(unsigned long long)a12;
- (id)initWithDataURLSession:(id)a0;
- (id)taskWithRequest:(id)a0 requestTypeCode:(unsigned int)a1 responseClass:(Class)a2 delegate:(id)a3 delegateQueue:(id)a4;

@end
