@interface ARUICountdownFadeOut : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (double)delay;
- (BOOL)cancelable;
- (id)identifier;
- (id)timingFunction;
- (double)duration;
- (void)applyToCountdownView:(id)a0 completion:(id /* block */)a1;

@end
