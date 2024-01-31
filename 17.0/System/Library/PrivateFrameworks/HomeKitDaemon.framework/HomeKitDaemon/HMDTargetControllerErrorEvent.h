@class HMDHAPAccessory;

@interface HMDTargetControllerErrorEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long errorType;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;

+ (id)errorEventWithErrorType:(unsigned long long)a0 accessory:(id)a1;

- (void).cxx_destruct;
- (id)initWithErrorType:(unsigned long long)a0 accessory:(id)a1;

@end
