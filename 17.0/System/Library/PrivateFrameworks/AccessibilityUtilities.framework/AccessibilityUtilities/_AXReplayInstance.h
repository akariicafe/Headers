@class NSError, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _AXReplayInstance : NSObject

@property (copy, nonatomic) id /* block */ replayBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double interval;
@property (nonatomic) long long maxAttempts;
@property (nonatomic) long long attemptsRemaining;
@property (nonatomic) BOOL async;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL didSucceed;
@property (retain, nonatomic) NSError *underlyingError;
@property (retain, nonatomic) id underlyingResult;
@property (retain, nonatomic) NSString *name;

+ (id)replayBlock:(id /* block */)a0 name:(id)a1 attempts:(long long)a2 interval:(double)a3 async:(BOOL)a4 queue:(id)a5 completion:(id /* block */)a6;

- (void).cxx_destruct;
- (void)_dispatchAsynchronously;
- (void)_dispatchSynchronously;
- (id)_genericFailError;
- (void)dispatch;

@end
