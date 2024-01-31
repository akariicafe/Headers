@class NSSet, NSArray, NSString, NSNumber;

@interface RMModelAppManagedDeclaration_Attributes : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadAssociatedDomains;
@property (copy, nonatomic) NSNumber *payloadAssociatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSString *payloadCellularSliceUUID;
@property (copy, nonatomic) NSString *payloadContentFilterUUID;
@property (copy, nonatomic) NSString *payloadDNSProxyUUID;
@property (copy, nonatomic) NSString *payloadRelayUUID;
@property (copy, nonatomic) NSNumber *payloadTapToPayScreenLock;
@property (copy, nonatomic) NSString *payloadVPNUUID;

+ (id)buildRequiredOnly;
+ (id)buildWithAssociatedDomains:(id)a0 associatedDomainsEnableDirectDownloads:(id)a1 cellularSliceUUID:(id)a2 contentFilterUUID:(id)a3 dnsProxyUUID:(id)a4 relayUUID:(id)a5 tapToPayScreenLock:(id)a6 VPNUUID:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
