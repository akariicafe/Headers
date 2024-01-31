@interface TCBundleResourceDebugEntry : NSObject {
    unsigned long long mCacheCount;
    unsigned long long mUncachedCount;
}

+ (void)addEntry:(id)a0 ofType:(id)a1 inPackage:(id)a2 cacheResult:(BOOL)a3;
+ (void)dumpUsage;

@end
