@class NSArray, CKRecordID, NSMutableSet, CKRecordZoneID;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSArray *desiredKeys;
@property (readonly, nonatomic) NSMutableSet *records;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0 options:(id)a1 promise:(id)a2 database:(id)a3 useAnonymousRequests:(BOOL)a4 zoneID:(id)a5 recordID:(id)a6 desiredKeys:(id)a7;

@end
