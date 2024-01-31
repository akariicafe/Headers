@class NSUUID;

@interface FPSharedCache : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) unsigned long long baseAddress;
@property (readonly, nonatomic) unsigned long long mappedSize;
@property (readonly, nonatomic) unsigned long long slide;
@property (readonly, nonatomic) unsigned int alignment;

+ (id)sharedCacheForDyldSnapshot:(struct dyld_process_snapshot_s { } *)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsAddress:(unsigned long long)a0;

@end
