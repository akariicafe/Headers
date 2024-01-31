@interface DMFRemoveAppRequest : DMFAppRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
