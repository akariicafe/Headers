@interface ACMExternalEnvironmentPreferences : ACMEnvironmentPreferences

+ (id)externalEnvironmentSpecifications;

- (id)generateAndSendSecCodeURLString;
- (id)authenticateURLString;
- (id)defaultPublicKeyString;
- (id)environmentSpecificationForRealm:(id)a0;
- (id)getTrustedDevicesURLString;
- (id)myAppleIDURL;
- (id)serverAttemptsDelays;
- (id)serverHosts;
- (id)verifySecurityCodeURLString;
- (id)verifyTicketURLString;

@end
