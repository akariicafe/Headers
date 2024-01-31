@interface UniqueAnimationKeyCounter : NSObject {
    unsigned long long _nextAnimationKey;
    unsigned long long _finishedUsingKeys;
}

@property (readonly, nonatomic, getter=isFinishedUsingAllKeys) BOOL finishedUsingAllKeys;

- (void)didFinishUsingAnimationKey;
- (unsigned long long)nextAnimationKey;

@end
