@class NSSet, NSArray, NSNumber;

@interface RMModelNetworkWiFiDeclaration_QoSMarkingPolicy : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSArray *payloadAllowListAppIdentifiers;
@property (copy, nonatomic) NSNumber *payloadAppleAudioVideoCalls;
@property (copy, nonatomic) NSNumber *payloadEnabled;

+ (id)buildRequiredOnly;
+ (id)buildWithAllowListAppIdentifiers:(id)a0 appleAudioVideoCalls:(id)a1 enabled:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
