@class NSSet, NSString, RMModelStatusServicesBackgroundTask_Launchd, NSNumber;

@interface RMModelStatusServicesBackgroundTask : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusCodeSignature;
@property (copy, nonatomic) NSNumber *statusUid;
@property (copy, nonatomic) NSString *statusPath;
@property (copy, nonatomic) NSString *statusState;
@property (copy, nonatomic) NSString *statusType;
@property (copy, nonatomic) RMModelStatusServicesBackgroundTask_Launchd *statusLaunchd;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 uid:(id)a1 path:(id)a2 state:(id)a3 type:(id)a4;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 codeSignature:(id)a2 uid:(id)a3 path:(id)a4 state:(id)a5 type:(id)a6 launchd:(id)a7;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
