@interface DMFStopManagingBooksRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

@end
