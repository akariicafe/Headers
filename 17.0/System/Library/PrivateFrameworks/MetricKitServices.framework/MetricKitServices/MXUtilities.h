@interface MXUtilities : NSObject

+ (id)modelIdentifier;
+ (id)osVersion;
+ (id)containerPath;
+ (id)regionFormat;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;

@end
