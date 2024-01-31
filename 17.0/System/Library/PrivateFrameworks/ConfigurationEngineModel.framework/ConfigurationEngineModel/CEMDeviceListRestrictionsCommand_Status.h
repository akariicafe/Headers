@class NSSet, CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary, CEMDeviceListRestrictionsCommand_StatusProfileRestrictions;

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *statusGlobalRestrictions;
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *statusProfileRestrictions;

+ (id)buildRequiredOnlyWithGlobalRestrictions:(id)a0 withProfileRestrictions:(id)a1;
+ (id)buildWithGlobalRestrictions:(id)a0 withProfileRestrictions:(id)a1;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
