@class HMDHAPAccessory;

@interface HMDTargetControllerCommandEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long commandType;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;

+ (id)commandEventWithCommandType:(unsigned long long)a0 accessory:(id)a1;

- (void).cxx_destruct;
- (id)initWithCommandType:(unsigned long long)a0 accessory:(id)a1;

@end
