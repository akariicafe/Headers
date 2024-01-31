@class GTBulkDataServiceXPCProxy, NSSet, NSMutableDictionary, GTServiceConnection, GTProcessInfo, NSObject;
@protocol OS_os_log, GTXPCConnection;

@interface GTMTLReplayServiceXPCProxy : NSObject <GTMTLReplayService> {
    id<GTXPCConnection> _gtXPCConnection;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    id /* block */ _connectionhandler;
    NSObject<OS_os_log> *_log;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    NSMutableDictionary *_acceleratorStructureSessionToDispatcherId;
    NSMutableDictionary *_observerIdToPort;
    struct GTTpacketStream { } *_tstream;
}

@property (readonly, nonatomic) GTProcessInfo *processInfo;

- (BOOL)resume:(unsigned long long)a0;
- (id)update:(id)a0;
- (id)fetch:(id)a0;
- (unsigned long long)registerObserver:(id)a0;
- (BOOL)pause:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)display:(id)a0;
- (BOOL)cancel:(unsigned long long)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)terminateProcess;
- (id)decode:(id)a0;
- (BOOL)load:(id)a0 error:(id *)a1;
- (id)query:(id)a0;
- (id)initWithConnection:(id)a0 serviceInfo:(id)a1;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)flushRpackets;
- (id)profile:(id)a0;
- (id)raytrace:(id)a0;
- (id)shaderdebug:(id)a0;

@end
