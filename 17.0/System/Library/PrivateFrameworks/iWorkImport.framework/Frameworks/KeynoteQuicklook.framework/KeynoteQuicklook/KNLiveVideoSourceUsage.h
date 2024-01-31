@class NSDictionary;

@interface KNLiveVideoSourceUsage : NSObject <NSCopying>

@property (readonly, nonatomic) NSDictionary *entriesForLiveVideoSourceUUIDs;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEntriesForLiveVideoSourceUUIDs:(id)a0;
- (id)initWithLiveVideoInfos:(id)a0;
- (id)initWithLiveVideoSourceUUIDMessages:(const void *)a0 entryMessages:(const void *)a1 unarchiver:(id)a2;
- (id)initWithMergedUsages:(id)a0;
- (void)saveToLiveVideoSourceUUIDMessages:(void *)a0 entryMessages:(void *)a1 archiver:(id)a2;
- (id)usedSourcesInContext:(id)a0;
- (BOOL)usesSource:(id)a0 withBackgroundKind:(long long)a1;
- (BOOL)usesSourceWithUUID:(id)a0;

@end
