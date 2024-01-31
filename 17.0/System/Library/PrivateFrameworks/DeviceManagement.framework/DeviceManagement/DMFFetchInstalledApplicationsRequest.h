@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
