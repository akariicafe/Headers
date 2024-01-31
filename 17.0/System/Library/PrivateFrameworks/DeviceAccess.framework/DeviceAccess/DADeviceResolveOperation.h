@class DAEndpoint, DADeviceResolver;

@interface DADeviceResolveOperation : NSObject

@property (nonatomic) struct _DNSServiceRef_t { } *addrInfoQuery;
@property (retain, nonatomic) DAEndpoint *endpoint;
@property (retain, nonatomic) DADeviceResolver *resolver;
@property (nonatomic) struct _DNSServiceRef_t { } *srvQuery;

- (void)invalidate;
- (void).cxx_destruct;

@end
