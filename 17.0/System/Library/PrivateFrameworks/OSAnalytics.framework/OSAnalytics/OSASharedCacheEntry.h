@interface OSASharedCacheEntry : NSObject

@property (readonly, nonatomic) unsigned int sharedCacheID;
@property (readonly, nonatomic) unsigned long long sharedCacheSlide;
@property (readonly, nonatomic) unsigned long long sharedCacheUnreliableSlidBaseAddress;
@property (readonly, nonatomic) char[37] *sharedCacheUuid;
@property (readonly, nonatomic) BOOL isDefaultSharedCache;
@property (readonly, nonatomic) struct dyld_shared_cache_loadinfo_v2 { unsigned long long x0; unsigned char x1[16]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *original;
@property (readonly, nonatomic) struct dyld_uuid_info_64 { unsigned long long x0; unsigned char x1[16]; } *layout;
@property (readonly, nonatomic) unsigned int layoutImageCount;

- (void)setSharedCacheInfo:(struct dyld_shared_cache_loadinfo_v2 { unsigned long long x0; unsigned char x1[16]; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *)a0;
- (void)setSharedCacheLayout:(struct dyld_uuid_info_64 { unsigned long long x0; unsigned char x1[16]; } *)a0 andCount:(unsigned int)a1;

@end
