@interface _UIKeyboardTypingSpeedLogger : NSObject {
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (id)init;
- (void)recordTypingDelay:(double)a0;
- (void)logToAggregate;

@end
