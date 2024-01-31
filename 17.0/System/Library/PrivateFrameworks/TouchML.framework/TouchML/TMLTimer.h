@class NSString, NSTimer;

@interface TMLTimer : NSObject {
    NSTimer *_timer;
}

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL repeats;
@property (nonatomic) double interval;
@property (nonatomic) double tolerance;
@property (nonatomic) BOOL running;
@property (copy, nonatomic) NSString *runLoopMode;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (void)initializeJSContext:(id)a0;

- (void)start;
- (void)fire;
- (void)stop;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (void)tmlDispose;

@end
