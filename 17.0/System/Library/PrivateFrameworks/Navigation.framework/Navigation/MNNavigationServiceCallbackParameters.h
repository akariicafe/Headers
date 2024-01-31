@interface MNNavigationServiceCallbackParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
