@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (id)init;
- (void)_updateDefaults:(id)a0;
- (void)dealloc;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;
- (void)_postNotification;
- (BOOL)registerNetworkDefaultsForAppID:(id)a0;

@end
