@interface DMFRestartDeviceRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
