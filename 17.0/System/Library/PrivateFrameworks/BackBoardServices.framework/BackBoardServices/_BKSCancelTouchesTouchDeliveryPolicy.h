@class NSObject;
@protocol OS_xpc_object;

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) double initialTouchTimestamp;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)setAssertionEndpoint:(id)a0;
- (id)matchSharingTouchesPolicy:(id /* block */)a0 orCancelTouchesPolicy:(id /* block */)a1 orCombinedPolicy:(id /* block */)a2;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextId:(unsigned int)a0 initialTouchTimestamp:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)assertionEndpoint;
- (id)initWithCoder:(id)a0;

@end
