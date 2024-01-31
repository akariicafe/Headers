@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVFlashlightInternal : NSObject {
    AVWeakReference *weakReference;
    struct OpaqueFigFlashlight { } *flashlight;
    BOOL available;
    BOOL overheated;
    float flashlightLevel;
    struct OpaqueFigSimpleMutex { } *lock;
    NSObject<OS_dispatch_queue> *serverReconnectQueue;
}

@end
