@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
