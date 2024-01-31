@class NSSet, NSNumber, NSString;

@interface RMModelStatusSoftwareUpdateFailureReason : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusCount;
@property (copy, nonatomic) NSString *statusReason;
@property (copy, nonatomic) NSString *statusTimestamp;

+ (id)buildRequiredOnlyWithCount:(id)a0;
+ (id)buildWithCount:(id)a0 reason:(id)a1 timestamp:(id)a2;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
