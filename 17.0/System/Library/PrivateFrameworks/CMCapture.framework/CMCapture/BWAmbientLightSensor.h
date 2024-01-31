@class BrightnessSystemClient, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWAmbientLightSensor : NSObject {
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_alsQueue;
    NSObject<OS_dispatch_semaphore> *_exitSemaphore;
    int _luxLevel;
    float _rearLuxLevel;
    BrightnessSystemClient *_brightnessSystemClient;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) int luxLevel;
@property (readonly, nonatomic) float rearLuxLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)forceUpdateRearLuxLevel;

@end
