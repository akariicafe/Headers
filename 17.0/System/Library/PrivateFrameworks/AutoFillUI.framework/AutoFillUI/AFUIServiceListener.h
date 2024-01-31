@class NSString, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue;

@interface AFUIServiceListener : NSObject <BSServiceConnectionListenerDelegate>

@property (retain, nonatomic) BSServiceConnectionListener *bsConnectionListener;
@property (retain, nonatomic) NSString *domainName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listenerEndpoint;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (void).cxx_destruct;
- (id)initDefaultServiceWithServiceQueue:(id)a0;

@end
