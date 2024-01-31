@class NSSet, NSMutableDictionary, GTServiceConnection, NSObject;
@protocol OS_os_log;

@interface GTMTLTelemetryServiceXPCProxy : NSObject <GTMTLTelemetryService> {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (id)update:(id)a0;
- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)query:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;

@end
