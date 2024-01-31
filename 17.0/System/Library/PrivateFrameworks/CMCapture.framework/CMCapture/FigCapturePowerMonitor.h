@class NSObject;
@protocol OS_dispatch_queue;

@interface FigCapturePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    id /* block */ _torchHandler;
    struct OpaqueFigSimpleMutex { } *_lock;
    float _maxTorchLevel;
    unsigned int _powerPressureLevel;
}

@property (readonly) float maxTorchLevel;
@property (readonly) unsigned int powerPressureLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)setPowerHandler:(id /* block */)a0;

@end
