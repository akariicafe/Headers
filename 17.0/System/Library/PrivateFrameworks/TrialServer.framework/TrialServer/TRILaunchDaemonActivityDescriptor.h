@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long supportedTaskCapabilities;

+ (id)clientTriggeredWifiDescriptor;
+ (id)cellularDescriptor;
+ (id)bmltDescriptor;
+ (id)clientHotfixCellularAllowBatteryDescriptor;
+ (id)postUpgradeDescriptor;
+ (id)taskQueueDescriptor;
+ (id)clientHotfixWifiDescriptor;
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;
+ (id)clientTriggeredCellularDescriptor;
+ (id)retryFailuresDescriptor;
+ (id)inexpensiveNetworkingDescriptor;
+ (id)maintenanceWorkDescriptor;
+ (id)setupAssistantFetchDescriptor;
+ (id)launchDaemonActivityDescriptorWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;

- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 supportedTaskCapabilities:(unsigned long long)a1;
- (id)description;
- (id)copyWithReplacementName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToLaunchDaemonActivityDescriptor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
