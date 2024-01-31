@class NSString, NSTimer;

@interface NTKDelayedBlock : NSObject

@property (nonatomic) double delay;
@property (copy, nonatomic) NSString *runLoopMode;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL invalidated;

- (void)reset;
- (void)dealloc;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)resetWithDelay:(double)a0;
- (id)initWithDelay:(double)a0 action:(id /* block */)a1;
- (id)initWithDelay:(double)a0 runLoopMode:(id)a1 action:(id /* block */)a2;

@end
