@class NSDictionary, NSMutableDictionary;

@interface SAAppSizerResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *reportedTelemetry;
@property (retain) NSMutableDictionary *pathsList;
@property (retain) NSMutableDictionary *attributionTags;
@property (retain) NSMutableDictionary *FSPurgeableData;
@property (retain) NSMutableDictionary *hiddenAppsData;
@property long long time;
@property long long status;
@property unsigned long long diskCapacity;
@property unsigned long long diskUsed;
@property (retain) NSMutableDictionary *appData;
@property (retain) NSDictionary *systemDataDetails;

- (id)init;
- (void)print;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateTimestamp;
- (void)addSystemVolumeWithCapacity:(unsigned long long)a0 used:(unsigned long long)a1 withReplyBlock:(id /* block */)a2;
- (unsigned char)initDiskUsedAndCapacity;
- (id)mergeAppSet:(id)a0 withAppSet:(id)a1;
- (unsigned long long)postProcessFilteringWithAppPathList:(id)a0;
- (void)postProcessMerging;
- (void)removeBundleSet:(id)a0;
- (void)setAppSet:(id)a0 withAppSize:(id)a1;
- (void)setDiskUsed:(unsigned long long)a0 andCapacity:(unsigned long long)a1;
- (void)updateAppSet:(id)a0 fixedSize:(unsigned long long)a1 dataSize:(unsigned long long)a2 cloneSize:(unsigned long long)a3 purgeableSize:(unsigned long long)a4 FSPurgeableSize:(unsigned long long)a5 physicalSize:(unsigned long long)a6 appCacheSize:(unsigned long long)a7 CDPluginSize:(unsigned long long)a8;
- (void)updateAppSet:(id)a0 withAppSize:(id)a1;
- (void)updateBundleID:(id)a0 WithCloneSize:(unsigned long long)a1;
- (void)updateBundleID:(id)a0 withDataSize:(unsigned long long)a1;
- (void)updateSystemDataDetailsWith:(id)a0 andSize:(unsigned long long)a1;

@end
