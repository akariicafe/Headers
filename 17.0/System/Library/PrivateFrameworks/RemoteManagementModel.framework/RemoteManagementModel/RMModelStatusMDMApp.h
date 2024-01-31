@class NSSet, NSString, NSNumber;

@interface RMModelStatusMDMApp : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusName;
@property (copy, nonatomic) NSString *statusExternalVersionId;
@property (copy, nonatomic) NSString *statusVersion;
@property (copy, nonatomic) NSString *statusShortVersion;
@property (copy, nonatomic) NSString *statusState;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 name:(id)a2 externalVersionId:(id)a3 version:(id)a4 shortVersion:(id)a5 state:(id)a6;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
