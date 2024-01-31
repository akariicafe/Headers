@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation> {
    unsigned long long _step;
    BOOL _cancelable;
}

@property (nonatomic) double percent;

+ (id)identifier;

- (double)delay;
- (BOOL)cancelable;
- (id)identifier;
- (id)description;
- (id)timingFunction;
- (double)duration;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)countdownStep;
- (id)initWithPercent:(double)a0 andStep:(unsigned long long)a1 cancelable:(BOOL)a2;

@end
