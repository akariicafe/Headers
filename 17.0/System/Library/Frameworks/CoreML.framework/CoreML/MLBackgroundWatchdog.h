@class NSObject;
@protocol OS_dispatch_source;

@interface MLBackgroundWatchdog : NSObject

@property (retain) NSObject<OS_dispatch_source> *timer;

+ (id)watchdogWithTimeout:(double)a0 label:(id)a1 queue:(id)a2;
+ (id)watchdogWithTimeout:(double)a0 queue:(id)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
