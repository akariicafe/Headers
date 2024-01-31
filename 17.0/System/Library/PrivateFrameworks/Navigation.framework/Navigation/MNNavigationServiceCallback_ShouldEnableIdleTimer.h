@interface MNNavigationServiceCallback_ShouldEnableIdleTimer : MNNavigationServiceCallbackParameters

@property (nonatomic) BOOL shouldEnable;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithCoder:(id)a0;

@end
