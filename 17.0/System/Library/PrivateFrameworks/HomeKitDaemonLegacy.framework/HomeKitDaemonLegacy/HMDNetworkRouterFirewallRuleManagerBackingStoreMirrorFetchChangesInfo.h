@class NSSet, NSDictionary, CKServerChangeToken, NSMutableSet, NSArray;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchChangesInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (readonly, nonatomic) NSSet *requestedRecordIDs;
@property (readonly, nonatomic) NSDictionary *zoneInfoMap;
@property (retain, nonatomic) CKServerChangeToken *databaseChangeToken;
@property (retain, nonatomic) CKServerChangeToken *originalDatabaseChangeToken;
@property (readonly, nonatomic) NSMutableSet *modifiedRecordIDs;
@property (readonly, nonatomic) BOOL zonesHaveChanged;
@property (readonly, nonatomic) BOOL zonesWereDeleted;
@property (retain, nonatomic) NSArray *signatureVerificationPublicKeys;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)__cleanupMirroredZones:(id)a0 cloudZones:(id)a1 result:(id)a2 error:(id)a3;
- (id)initWithActivity:(id)a0 options:(id)a1 databaseChangeToken:(id)a2 promise:(id)a3 xpcActivity:(id)a4 database:(id)a5 useAnonymousRequests:(BOOL)a6 recordIDs:(id)a7 lastSynchronizedRecordIDs:(id)a8;
- (void)markZonesChanged;
- (void)markZonesDeleted;

@end
