@class CEMDeviceListRestrictionsCommand_StatusBooleanDictionary, NSSet, CEMDeviceListRestrictionsCommand_StatusValueDictionary, CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *statusRestrictedBool;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusValueDictionary *statusRestrictedValue;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusIntersection;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusUnion;

+ (id)buildRequiredOnly;
+ (id)buildWithRestrictedBool:(id)a0 withRestrictedValue:(id)a1 withIntersection:(id)a2 withUnion:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
