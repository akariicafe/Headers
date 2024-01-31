@class NSSet, NSString, NSNumber;

@interface CEMDeviceEraseCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadPreserveDataPlan;
@property (copy, nonatomic) NSNumber *payloadDisallowProximitySetup;
@property (copy, nonatomic) NSString *payloadPIN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withPIN:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withPreserveDataPlan:(id)a1 withDisallowProximitySetup:(id)a2 withPIN:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)executionLevel;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
