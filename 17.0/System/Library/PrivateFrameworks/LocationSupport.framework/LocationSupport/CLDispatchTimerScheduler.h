@class CLTimer, NSObject;
@protocol OS_dispatch_source;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (weak, nonatomic) CLTimer *timer;

- (void)reflectNextFireDelay:(double)a0 fireInterval:(double)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDispatchSilo:(id)a0;

@end
