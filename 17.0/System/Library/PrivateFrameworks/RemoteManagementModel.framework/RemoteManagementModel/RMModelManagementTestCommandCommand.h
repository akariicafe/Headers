@class NSSet, NSString;

@interface RMModelManagementTestCommandCommand : RMModelCommandBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadEcho;
@property (copy, nonatomic) NSString *payloadReturnStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0 echo:(id)a1;
+ (id)buildWithIdentifier:(id)a0 echo:(id)a1 returnStatus:(id)a2;

@end
