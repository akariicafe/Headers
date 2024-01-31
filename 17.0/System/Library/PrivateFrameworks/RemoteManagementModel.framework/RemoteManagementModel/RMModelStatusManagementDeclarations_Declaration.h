@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelStatusManagementDeclarations_Declaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusServerToken;
@property (copy, nonatomic) NSNumber *statusActive;
@property (copy, nonatomic) NSString *statusValid;
@property (copy, nonatomic) NSArray *statusReasons;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 serverToken:(id)a1 active:(id)a2 valid:(id)a3;
+ (id)buildWithIdentifier:(id)a0 serverToken:(id)a1 active:(id)a2 valid:(id)a3 reasons:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
