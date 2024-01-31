@class NSSet, NSString, NSNumber;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadPath;
@property (copy, nonatomic) NSNumber *payloadHide;

+ (id)buildRequiredOnlyWithPath:(id)a0;
+ (id)buildWithPath:(id)a0 withHide:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
