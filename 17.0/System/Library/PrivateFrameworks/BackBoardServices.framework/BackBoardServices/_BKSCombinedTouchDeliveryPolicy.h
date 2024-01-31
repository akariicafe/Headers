@class NSArray;

@interface _BKSCombinedTouchDeliveryPolicy : BKSTouchDeliveryPolicy

@property (readonly, nonatomic) NSArray *policies;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setAssertionEndpoint:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)initWithPolicies:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)assertionEndpoint;
- (id)initWithCoder:(id)a0;

@end
