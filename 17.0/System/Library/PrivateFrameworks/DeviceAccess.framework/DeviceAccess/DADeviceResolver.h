@class NSString, NSMutableDictionary, NSMutableSet, CUCoalescer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface DADeviceResolver : NSObject {
    struct _DNSServiceRef_t { } *_bonjourSharedService;
    unsigned long long _coalesceMinTicks;
    NSMutableDictionary *_devices;
    NSMutableDictionary *_endpoints;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _prefNameBasedSelect;
    BOOL _prefsInitialized;
    NSMutableArray *_selectedEndpoints;
    NSString *_selectedProtocolStr;
}

@property (retain, nonatomic) CUCoalescer *coalescer;
@property (retain, nonatomic) NSMutableSet *resolveOperations;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

- (id)init;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)invalidate;
- (id)description;
- (void)addEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)removeEndpoint:(id)a0;
- (void)selectEndpoint:(id)a0;
- (void)_groupEndpoint:(id)a0 matchedEndpoint:(id)a1;
- (void)_addEndpoint:(id)a0;
- (void)_ensureInitialized;
- (void)_evaluateEndpoints;
- (void)_removeEndpoint:(id)a0;
- (void)_reportDeviceWithSoloEndpoint:(id)a0;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_selectEndpoint:(id)a0;
- (void)_startResolvingBonjourFullName:(const char *)a0 interfaceIndex:(unsigned int)a1 endpoint:(id)a2;
- (void)_startResolvingBonjourName:(const char *)a0 type:(const char *)a1 interfaceIndex:(unsigned int)a2 endpoint:(id)a3;
- (void)_startResolvingEndpoint:(id)a0;
- (void)_startResolvingHostname:(const char *)a0 interfaceIndex:(unsigned int)a1 endpoint:(id)a2;
- (void)_updateSelectedEndpoint:(id)a0;

@end
