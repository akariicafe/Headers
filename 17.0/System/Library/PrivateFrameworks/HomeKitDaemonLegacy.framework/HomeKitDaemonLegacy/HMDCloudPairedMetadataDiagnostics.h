@class NSURL, NSDictionary, HMDNetworkRouterFirewallRuleAccessoryIdentifier;

@interface HMDCloudPairedMetadataDiagnostics : HMFObject

@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSURL *uploadDestination;
@property (readonly, nonatomic) unsigned long long consentVersion;
@property (readonly, nonatomic) unsigned long long uploadType;
@property (readonly, nonatomic) NSDictionary *prettyJSONDictionary;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)a0 jsonDictionary:(id)a1;
- (id)initWithAccessoryIdentifier:(id)a0 privacyPolicyURL:(id)a1 uploadDestination:(id)a2 consentVersion:(unsigned long long)a3 uploadType:(unsigned long long)a4;

@end
