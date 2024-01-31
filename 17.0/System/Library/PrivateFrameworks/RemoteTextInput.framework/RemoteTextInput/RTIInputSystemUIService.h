@class NSString, RTIInputSystemService, BSServiceConnectionListener;

@interface RTIInputSystemUIService : RTIInputSystemService <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_bsConnectionListener;
    NSString *_domainName;
    NSString *_serviceName;
}

@property (readonly, nonatomic) RTIInputSystemService *rtiService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServiceWithDomainName:(id)a0 serviceName:(id)a1;

- (id)listenerEndpoint;
- (BOOL)_canResumeConnection;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (void).cxx_destruct;
- (id)initWithDomainName:(id)a0 serviceName:(id)a1;

@end
