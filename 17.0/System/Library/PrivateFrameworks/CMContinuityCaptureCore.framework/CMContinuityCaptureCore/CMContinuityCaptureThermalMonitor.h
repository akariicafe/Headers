@class NSObject;
@protocol OS_dispatch_queue;

@interface CMContinuityCaptureThermalMonitor : NSObject {
    int _registrationToken;
    unsigned long long _thermalLevel;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
}

@property (nonatomic) BOOL invalidated;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long thermalLevel;

+ (id)sharedInstance;
+ (void)invalidate;

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_thermalNotification:(unsigned long long)a0;
- (BOOL)setupNotification;

@end
