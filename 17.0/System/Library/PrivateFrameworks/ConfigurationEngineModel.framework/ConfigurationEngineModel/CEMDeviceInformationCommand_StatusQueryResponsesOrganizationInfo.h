@class NSSet, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusOrganizationName;
@property (copy, nonatomic) NSString *statusOrganizationAddress;
@property (copy, nonatomic) NSString *statusOrganizationPhone;
@property (copy, nonatomic) NSString *statusOrganizationEmail;
@property (copy, nonatomic) NSString *statusOrganizationMagic;

+ (id)buildRequiredOnlyWithOrganizationName:(id)a0;
+ (id)buildWithOrganizationName:(id)a0 withOrganizationAddress:(id)a1 withOrganizationPhone:(id)a2 withOrganizationEmail:(id)a3 withOrganizationMagic:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
