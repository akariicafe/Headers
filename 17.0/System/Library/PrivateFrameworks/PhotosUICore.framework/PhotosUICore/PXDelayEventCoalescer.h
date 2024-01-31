@interface PXDelayEventCoalescer : PXEventCoalescer {
    double _lastEventTime;
    BOOL _waitingForCallback;
    BOOL _cancelled;
}

@property (readonly, nonatomic) double delay;

- (id)init;
- (id)initWithDelay:(double)a0;
- (void)cancel;
- (void)_handleTimer;
- (void)inputEvent;

@end
