@class NSObject;
@protocol OS_dispatch_queue;

@interface TSUProgressObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
    double _lastHandledValue;
    BOOL _lastHandledIndeterminate;
}

@property (readonly, nonatomic) double valueInterval;

- (id)init;
- (void).cxx_destruct;
- (void)handleValue:(double)a0 maxValue:(double)a1 isIndeterminate:(BOOL)a2;
- (id)initWithValueInterval:(double)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
