@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelNetworkWiFiDeclaration_HotSpot : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDisplayedOperatorName;
@property (copy, nonatomic) NSString *payloadDomainName;
@property (copy, nonatomic) NSArray *payloadRoamingConsortiumOIs;
@property (copy, nonatomic) NSNumber *payloadServiceProviderRoamingEnabled;
@property (copy, nonatomic) NSString *payloadHESSID;
@property (copy, nonatomic) NSArray *payloadNAIRealmNames;
@property (copy, nonatomic) NSArray *payloadMCCAndMNCs;

+ (id)buildRequiredOnly;
+ (id)buildWithDisplayedOperatorName:(id)a0 domainName:(id)a1 roamingConsortiumOIs:(id)a2 serviceProviderRoamingEnabled:(id)a3 HESSID:(id)a4 naiRealmNames:(id)a5 mccAndMNCs:(id)a6;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
