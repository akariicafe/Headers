@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
