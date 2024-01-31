@interface SASupport : NSObject

+ (int)enableDirStatInfoForPath:(id)a0 andGetInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
+ (int)enableDirStatsForPath:(id)a0;
+ (unsigned long long)getCloneDstreamIDForPath:(id)a0;
+ (int)getDirStatInfoForPath:(id)a0 info:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
+ (id)getFSPurgeableDataOnVolumes:(id)a0;
+ (unsigned long long)getInodeIDForPath:(id)a0;
+ (id)getLSAppRecordForBundle:(id)a0;
+ (void)getVolSizeFromAttrList:(const char *)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isAppUserVisible:(id)a0;
+ (BOOL)isAppsSetUserVisible:(id)a0;
+ (BOOL)isFileCloned:(const char *)a0;
+ (BOOL)isFilePurgeable:(const char *)a0;
+ (BOOL)isItemMountedOnSystemVolume:(id)a0;
+ (BOOL)targetDeviceIsIpad;

@end
