@class NSSet, GTServiceProperties, NSMutableDictionary, GTServiceConnection, NSObject;
@protocol OS_os_log;

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

@property (readonly, retain, nonatomic) GTServiceProperties *serviceProperties;

- (void)abort;
- (id)update:(id)a0;
- (unsigned long long)registerObserver:(id)a0;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (unsigned long long)nextRequestID;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)query:(id)a0;
- (id)createCaptureDescriptor;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)startWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;

@end
