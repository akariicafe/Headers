@class NSSet, NSString;

@interface CEMActivationAdvancedDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusServerHash;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withServerHash:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withServerHash:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
