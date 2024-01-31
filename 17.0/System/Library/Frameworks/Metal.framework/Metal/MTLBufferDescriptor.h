@interface MTLBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long pinnedGPUAddress;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) void *contents;
@property (nonatomic) BOOL noCopy;
@property (nonatomic) id /* block */ deallocator;
@property (nonatomic) unsigned long long alignment;

- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)cpuCacheMode;
- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)storageMode;
- (id)init;
- (unsigned long long)hash;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
