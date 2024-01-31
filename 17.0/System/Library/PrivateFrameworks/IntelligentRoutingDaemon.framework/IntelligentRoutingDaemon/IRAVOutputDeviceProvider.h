@class NSSet, NSHashTable, NSObject, IRAVOutputDeviceDiscoverySessionController;
@protocol OS_dispatch_queue;

@interface IRAVOutputDeviceProvider : NSObject

@property (retain, nonatomic) NSSet *cachedDevices;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSSet *availableOutputDevices;
@property (retain, nonatomic) IRAVOutputDeviceDiscoverySessionController *discoverySessionController;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)_logDevicesString:(id)a0;
- (void)didUpdateAVOutputDevices:(id)a0;
- (void)logActiveDevices;

@end
