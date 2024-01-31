@class NSObject, NSDate;
@protocol OS_dispatch_source;

@interface CountDown : NSObject {
    NSObject<OS_dispatch_source> *timer;
    unsigned int count;
}

@property (readonly, nonatomic) NSDate *startTime;

- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (void)goOffNext:(unsigned long long)a0 fromTime:(id)a1 forEpoch:(id)a2 timesTotal:(unsigned long long)a3 onQueue:(id)a4 withIterationBlock:(id /* block */)a5 completionBlock:(id /* block */)a6;

@end
