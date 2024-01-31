@interface MDMDeviceQueryUtilities : NSObject

+ (id)allowedDeviceQueriesForAccessRights:(unsigned long long)a0 isDataSeparated:(BOOL)a1;
+ (id)allowedDeviceQueriesOnUserChannelForAccessRights:(unsigned long long)a0;
+ (id)allowedDeviceQueriesWithUserEnrollment;

@end
