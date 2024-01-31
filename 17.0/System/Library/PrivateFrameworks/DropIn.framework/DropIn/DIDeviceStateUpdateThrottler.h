@interface DIDeviceStateUpdateThrottler : NSObject {
    void /* unknown type, empty encoding */ subject;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ throttleTimeInterval;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)handleState:(long long)a0 reason:(id)a1 handler:(id /* block */)a2;
- (id)initWithThrottleTimeInterval:(double)a0;

@end
