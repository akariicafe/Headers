@class GTServiceConnection, NSSet, NSMutableDictionary;

@interface GTMTLDiagnosticsServiceXPCProxy : NSObject <GTMTLDiagnosticsService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

- (unsigned long long)registerObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)raiseRuntimeIssue:(id)a0;

@end
