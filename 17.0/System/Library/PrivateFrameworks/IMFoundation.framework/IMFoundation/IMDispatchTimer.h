@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface IMDispatchTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) id userInfo;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL repeats;
@property (copy, nonatomic) id /* block */ handlerBlock;

- (void)invalidate;
- (void)fire;
- (void)stop;
- (void)updateTimerInterval:(unsigned long long)a0 repeats:(BOOL)a1;
- (id)initWithQueue:(id)a0 interval:(unsigned long long)a1 repeats:(BOOL)a2 userInfo:(id)a3 handlerBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 interval:(unsigned long long)a1 repeats:(BOOL)a2 handlerBlock:(id /* block */)a3;

@end
