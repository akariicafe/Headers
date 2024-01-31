@interface DMFUpdateAppRequest : DMFAppRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
