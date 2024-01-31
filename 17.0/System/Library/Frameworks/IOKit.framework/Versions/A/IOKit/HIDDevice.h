@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_mach;

@interface HIDDevice : NSObject {
    struct { unsigned int service; unsigned long long regID; struct IOHIDDeviceDeviceInterface **deviceInterface; struct IOHIDDeviceTimeStampedDeviceInterface **deviceTimeStampedInterface; struct IOCFPlugInInterfaceStruct **plugInInterface; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } deviceLock; struct __CFDictionary *properties; struct __CFSet *elements; struct __CFString *rootKey; struct __CFString *UUIDKey; struct IONotificationPort *notificationPort; unsigned int notification; struct __CFRunLoopSource *asyncEventSource; struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; void /* function */ *equal; void /* function */ *hash; void /* function */ *getPort; void /* function */ *perform; } sourceContext; struct __CFMachPort *queuePort; struct __CFRunLoop *runLoop; struct __CFString *runLoopMode; NSObject<OS_dispatch_queue> *dispatchQueue; NSObject<OS_dispatch_mach> *dispatchMach; _Atomic unsigned int dispatchStateMask; id /* block */ cancelHandler; struct __IOHIDQueue *queue; struct __CFArray *inputMatchingMultiple; unsigned char loadProperties; unsigned char isDirty; void *transaction; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } callbackLock; struct __CFData *reportBuffer; struct __CFArray *batchElements; struct __CFSet *removalCallbackSet; struct __CFSet *inputReportCallbackSet; struct __CFSet *inputValueCallbackSet; _Atomic void *elementHandler; _Atomic void *removalHandler; _Atomic void *inputReportHandler; } _device;
}

- (unsigned long long)_cfTypeID;
- (void)dealloc;
- (id)description;

@end
