@class NSString, NPKIDVRemoteDeviceServiceContext, NSObject;
@protocol OS_dispatch_queue;

@interface NPKIDVRemoteDeviceServiceEventsCoordinator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceContextLock;
    NPKIDVRemoteDeviceServiceContext *_serviceContext;
    NSString *_serviceContextPath;
    NSObject<OS_dispatch_queue> *_remoteProcessNotificationQueue;
}

@property (readonly, nonatomic) NSString *remoteDeviceID;

- (id)init;
- (void).cxx_destruct;
- (void)_insideLockPersistServiceContext;
- (void)_notifyProcessWithServiceNames:(id)a0 deviceEvent:(unsigned long long)a1 forDeviceID:(id)a2;
- (void)initializeWithDevice:(id)a0;
- (void)insideLockTeardownCurrentRemoteDeviceContextWithReason:(unsigned long long)a0;
- (unsigned long long)registerEvents:(unsigned long long)a0 forServiceName:(id)a1;
- (void)setNeedsPrearmCredential:(BOOL)a0;
- (void)teardownCurrentRemoteDeviceContextWithReason:(unsigned long long)a0;
- (unsigned long long)unregisterEvents:(unsigned long long)a0 forServiceName:(id)a1;

@end
