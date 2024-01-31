@class NSSet, NSString;

@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSString *statusExtensionPoint;
@property (copy, nonatomic) NSString *statusDisplayName;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withExtensionPoint:(id)a1 withDisplayName:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withExtensionPoint:(id)a1 withDisplayName:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
