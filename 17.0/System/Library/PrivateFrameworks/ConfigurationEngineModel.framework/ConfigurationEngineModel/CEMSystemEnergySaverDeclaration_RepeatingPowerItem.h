@class NSSet, NSString, NSNumber;

@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadEventtype;
@property (copy, nonatomic) NSNumber *payloadWeekdays;
@property (copy, nonatomic) NSNumber *payloadTime;

+ (id)buildRequiredOnlyWithEventtype:(id)a0;
+ (id)buildWithEventtype:(id)a0 withWeekdays:(id)a1 withTime:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
