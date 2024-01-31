@interface BYLicenseAgreement : NSObject

+ (unsigned long long)versionOfAcceptedAgreement;
+ (BOOL)needsToAcceptNewAgreement;
+ (unsigned long long)versionOfOnDiskAgreement;
+ (void)_clearAcceptedLicenseVersion;
+ (void)recordUserAcceptedAgreementVersion:(unsigned long long)a0;

@end
