@interface IDSMPPublicDeviceIdentity : IDSMPIdentity

+ (id)deviceIdentityFromDataRepresentation:(id)a0 error:(id *)a1;
+ (id)deviceIdentityFromDataRepresentation:(id)a0 publicAdminServiceIdentity:(id)a1 error:(id *)a2;

- (id)dataRepresentationWithError:(id *)a0;

@end
