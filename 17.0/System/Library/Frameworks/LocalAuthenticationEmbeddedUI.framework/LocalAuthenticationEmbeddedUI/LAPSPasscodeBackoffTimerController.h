@class NSObject;
@protocol OS_dispatch_source;

@interface LAPSPasscodeBackoffTimerController : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    long long _timeout;
    id /* block */ _updateHandler;
    id /* block */ _completionHandler;
}

- (void)start;
- (void).cxx_destruct;
- (void)_startTimerWithTimeout:(long long)a0;
- (id)initWithTimeout:(long long)a0 updateHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
