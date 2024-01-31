@class NSSet, NSString, NSArray;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadContext;
@property (copy, nonatomic) NSArray *payloadPaths;

+ (id)buildRequiredOnlyWithContext:(id)a0 withPaths:(id)a1;
+ (id)buildWithContext:(id)a0 withPaths:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
