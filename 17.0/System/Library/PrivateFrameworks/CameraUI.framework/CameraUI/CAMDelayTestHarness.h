@interface CAMDelayTestHarness : CAMPerformanceTestHarness

@property long long _delay;

- (void)startTesting;
- (id)initWithTestName:(id)a0 secondsDelay:(long long)a1;

@end
