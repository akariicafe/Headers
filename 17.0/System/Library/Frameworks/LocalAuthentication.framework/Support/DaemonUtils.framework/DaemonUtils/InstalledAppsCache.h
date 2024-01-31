@interface InstalledAppsCache : NSObject

+ (id)sharedInstance;

- (id)_bundleForPid:(int)a0;
- (id)_bundlePathForPid:(int)a0;
- (id)_localizedNameForBundle:(id)a0;
- (id)_localizedNameForPath:(id)a0;
- (id)_localizedNameFromInfoDict:(id)a0 path:(id)a1;
- (id)appNameForPid:(int)a0 bundleId:(id *)a1;
- (id)binaryNameForPid:(int)a0;
- (id)bundlePathForPid:(int)a0 stripXPCService:(BOOL)a1;
- (id)pathForPid:(int)a0;

@end
