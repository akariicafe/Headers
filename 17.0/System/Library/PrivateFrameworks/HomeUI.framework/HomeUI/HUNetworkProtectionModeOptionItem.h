@class HMAccessoryNetworkProtectionGroup;

@interface HUNetworkProtectionModeOptionItem : HFItem

@property (readonly, nonatomic) long long targetProtectionModeOption;
@property (readonly, copy, nonatomic) HMAccessoryNetworkProtectionGroup *group;

+ (long long)_priorityForTargetProtectionMode:(long long)a0;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithGroup:(id)a0 targetProtectionModeOption:(long long)a1;

@end
