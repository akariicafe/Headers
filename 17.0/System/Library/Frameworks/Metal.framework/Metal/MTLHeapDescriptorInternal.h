@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *_private;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setType:(long long)a0;
- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)cpuCacheMode;
- (void)setSize:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; } *)descriptorPrivate;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)setStorageMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (unsigned long long)memoryPoolId;
- (unsigned long long)resourceOptions;
- (unsigned long long)hazardTrackingMode;
- (void)setResourceOptions:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (id)init;
- (unsigned long long)hash;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (unsigned long long)protectionOptions;
- (unsigned long long)pinnedGPUAddress;
- (void)dealloc;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (unsigned long long)size;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMemoryPoolId:(unsigned long long)a0;

@end
