@class NSSet, NSString, NSNumber;

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCurrentPassword;
@property (copy, nonatomic) NSString *payloadNewPassword;
@property (copy, nonatomic) NSNumber *payloadAllowOroms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withNewPassword:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withCurrentPassword:(id)a1 withNewPassword:(id)a2 withAllowOroms:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)executionLevel;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
