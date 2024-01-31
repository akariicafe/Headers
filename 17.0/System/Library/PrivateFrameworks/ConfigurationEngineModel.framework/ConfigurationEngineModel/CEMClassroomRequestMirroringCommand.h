@class NSSet, NSString, NSNumber;

@interface CEMClassroomRequestMirroringCommand : CEMCommandBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadDestinationName;
@property (copy, nonatomic) NSString *payloadDestinationDeviceID;
@property (copy, nonatomic) NSNumber *payloadScanTime;
@property (copy, nonatomic) NSString *payloadPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withDestinationName:(id)a1 withDestinationDeviceID:(id)a2 withScanTime:(id)a3 withPassword:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)executionLevel;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
