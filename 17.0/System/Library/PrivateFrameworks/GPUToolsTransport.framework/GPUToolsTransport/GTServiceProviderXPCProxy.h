@class NSSet, NSString, NSMutableDictionary, GTServiceConnection, NSObject;
@protocol OS_os_log;

@interface GTServiceProviderXPCProxy : NSObject <GTServiceProvider> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSString *_deviceUDID;
    NSMutableDictionary *_observerIdToPort;
}

- (id)allServices;
- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)deregisterService:(unsigned long long)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)registerService:(id)a0 forProcess:(id)a1;
- (void)waitForService:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)waitForService:(id)a0 error:(id *)a1;

@end
