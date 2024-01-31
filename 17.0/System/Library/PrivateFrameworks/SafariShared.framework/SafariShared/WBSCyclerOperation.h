@interface WBSCyclerOperation : NSObject {
    unsigned long long _numberOfRemainingAttempts;
    float _backoffRatio;
}

@property (copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic) double nextBackoffTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)executeWithResultHandler:(id /* block */)a0;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)a0 backoffRatio:(float)a1;

@end
