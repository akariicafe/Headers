@interface GameCenterFoundation.ExponentialBackoffTask : NSObject {
    void /* unknown type, empty encoding */ maxDelay;
    void /* unknown type, empty encoding */ maxRetryCount;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ delay;
    void /* unknown type, empty encoding */ initialDelay;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ timer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithTask:(id /* block */)a0 successCondition:(id /* block */)a1;
- (id)initWithName:(id)a0 queue:(id)a1 initialDelay:(double)a2 maxDelay:(double)a3 maxRetryCount:(long long)a4;

@end
