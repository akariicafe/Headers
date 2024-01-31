@class NSSet, NSString, RMModelPasscodeSettingsDeclaration_CustomRegexDescription;

@interface RMModelPasscodeSettingsDeclaration_CustomRegex : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRegex;
@property (copy, nonatomic) RMModelPasscodeSettingsDeclaration_CustomRegexDescription *payloadDescription;

+ (id)buildRequiredOnlyWithRegex:(id)a0;
+ (id)buildWithRegex:(id)a0 description:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (void)combineWithOther:(id)a0;

@end
