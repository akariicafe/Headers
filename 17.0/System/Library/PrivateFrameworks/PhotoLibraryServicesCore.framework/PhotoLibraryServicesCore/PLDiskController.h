@interface PLDiskController : NSObject {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { unsigned char needToCheckDiskSpace : 1; unsigned char probablyLowOnDiskSpace : 1; unsigned char isAssetsd : 1; unsigned int extra : 28; } _flags;
}

+ (id)sharedInstance;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForUse;
+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (id)mountPointForPath:(id)a0;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)hasEnoughDiskToTakePicture;
- (void)updateAvailableDiskSpace;
- (void)_updateCookie;
- (void)_actuallyUpdateCookie;
- (void)_diskSpaceDidBecomeLow;
- (long long)bytesToAutomaticallyClear;

@end
