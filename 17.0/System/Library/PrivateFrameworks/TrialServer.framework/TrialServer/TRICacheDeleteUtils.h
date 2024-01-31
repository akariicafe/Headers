@interface TRICacheDeleteUtils : NSObject

+ (BOOL)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;
+ (id)getPurgeableDiskSpace;
+ (id)getFreeDiskSpace;

@end
