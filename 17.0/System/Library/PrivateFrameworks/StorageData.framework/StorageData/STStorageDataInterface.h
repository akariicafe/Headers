@class STStorageAppsMonitor;

@interface STStorageDataInterface : NSObject

@property (retain) STStorageAppsMonitor *appsMonitor;

+ (id)storageInfoDict_Remote;

- (id)init;
- (void).cxx_destruct;
- (id)apps;
- (id)storageInfoDict;
- (id)appSizesDict;
- (id)appsOrderedByName;
- (id)appsOrderedBySize;
- (id)categorySizesDict;

@end
