@class NSSet, IRCompanionLinkClient, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface IRRapportProvider : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
    NSSet *_knownDevices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) IRCompanionLinkClient *companionLinkClient;

- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_logActiveDevices;
- (void)_startRapportDiscovery;
- (void)_stopDiscoveryAndResetKnownDevicesIfNeeded;
- (void)_stopRapportDiscovery;
- (void)didUpdateRapportDevices:(id)a0;
- (id)initWithQueue:(id)a0 companionLinkClient:(id)a1;
- (void)logActiveDevices;

@end
