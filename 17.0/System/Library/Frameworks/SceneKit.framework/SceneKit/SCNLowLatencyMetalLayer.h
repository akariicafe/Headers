@interface SCNLowLatencyMetalLayer : CAMetalLayer

- (BOOL)lowLatency;
- (unsigned long long)maximumDrawableCount;

@end
