@class NSString, NSXPCConnection, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {
    int _notifyToken;
    int _notifyTokenLegacyTrigger;
    int _notifyTokenLegacyEarlyDetect;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_voiceTriggered;
- (void)_attemptConnection;
- (void)_attemptConnectionInQueue;
- (void)_earlyDetected;
- (void)_enableTriggerEventXPCNotification:(BOOL)a0;
- (void)earlyDetected;
- (void)voiceTriggered;

@end
