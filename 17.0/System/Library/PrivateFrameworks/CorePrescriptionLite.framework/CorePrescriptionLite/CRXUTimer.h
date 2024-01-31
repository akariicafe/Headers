@class NSObject;
@protocol OS_dispatch_source;

@interface CRXUTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;

+ (id)scheduledTimerWithTimeInterval:(double)a0 weakTarget:(id)a1 selector:(SEL)a2 repeats:(BOOL)a3 queue:(id)a4;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleTimer;
- (id)initWithTimeInterval:(double)a0 weakTarget:(id)a1 selector:(SEL)a2 repeats:(BOOL)a3 queue:(id)a4;

@end
