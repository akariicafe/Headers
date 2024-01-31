@interface NRGResourceCache : NSObject

+ (id)cacheDirPathForAppBundleID:(id)a0 withPairedDeviceStorePath:(id)a1;
+ (id)cacheDirPathForPairedDevice;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)a0;
+ (id)cachePathForIconVariant:(int)a0 inBundleID:(id)a1 withPairedDeviceStorePath:(id)a2;
+ (void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)a0;
+ (id)iconCacheDirPathForAppBundleID:(id)a0 withPairedDeviceStorePath:(id)a1;
+ (id)iconForIconVariant:(int)a0 inBundleID:(id)a1 withPairedDeviceStorePath:(id)a2;
+ (void)invalidateBundleID:(id)a0 withPairedDeviceStorePath:(id)a1;
+ (void)invalidatePairedDevice:(id)a0;
+ (void)setIcon:(id)a0 forIconVariant:(int)a1 inBundleID:(id)a2 withPairedDeviceStorePath:(id)a3;

@end
