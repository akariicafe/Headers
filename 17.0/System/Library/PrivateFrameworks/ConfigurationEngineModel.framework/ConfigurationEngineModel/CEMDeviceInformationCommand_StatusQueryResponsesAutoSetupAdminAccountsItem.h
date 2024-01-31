@class NSSet, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusGUID;
@property (copy, nonatomic) NSString *statusShortName;

+ (id)buildRequiredOnly;
+ (id)buildWithGUID:(id)a0 withShortName:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
