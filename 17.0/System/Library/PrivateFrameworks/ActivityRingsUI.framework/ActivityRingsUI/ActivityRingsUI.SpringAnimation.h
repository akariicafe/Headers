@interface ActivityRingsUI.SpringAnimation : NSObject {
    void /* unknown type, empty encoding */ delay;
    void /* unknown type, empty encoding */ remainingDelay;
    void /* unknown type, empty encoding */ animationState;
}

@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) double target;

- (id)init;
- (BOOL)advanceWithDeltaTime:(double)a0;
- (void)completeWithSnap;
- (void)configureWithTension:(double)a0 friction:(double)a1 target:(double)a2;
- (id)initWithInitialValue:(double)a0 delay:(double)a1;
- (void)updateTarget:(double)a0;

@end
