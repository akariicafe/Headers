@class HMDNetworkRouterFirewallRuleCloudZone, HMBLocalZone, NSMutableSet, CKRecordZoneID;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorZoneInfo : HMFObject

@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSMutableSet *recordIDs;
@property (readonly, nonatomic) BOOL zoneHasChanged;
@property (readonly, nonatomic) BOOL zoneWasDeleted;
@property (readonly, nonatomic) BOOL ignoreChangeToken;
@property (retain, nonatomic) HMDNetworkRouterFirewallRuleCloudZone *cloudZone;
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone;

- (void)forceRefresh;
- (void).cxx_destruct;
- (id)initWithZoneID:(id)a0;
- (void)markChanged;
- (void)markDeleted;

@end
