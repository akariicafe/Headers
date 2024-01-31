@class NSArray;

@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy

@property (readonly, nonatomic) NSArray *policies;

+ (id)logCategory;

- (void)configure;
- (void)_registerForNotifications;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)handlePolicyStatusChange:(id)a0;
- (id)initWithPolicies:(id)a0 accessory:(id)a1 workQueue:(id)a2;

@end
