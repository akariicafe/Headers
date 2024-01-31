@class NSSet, CKServerChangeToken, NSString, HMBLocalZoneMirrorInput;

@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging>

@property (readonly, nonatomic) NSSet *interestedRecordIDs;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (readonly, nonatomic) CKServerChangeToken *originalChangeToken;
@property (retain, nonatomic) HMBLocalZoneMirrorInput *mirrorInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (id)initWithOptions:(id)a0 changeToken:(id)a1 promise:(id)a2 database:(id)a3 useAnonymousRequests:(BOOL)a4 interestedRecordIDs:(id)a5 mirrorInput:(id)a6;

@end
