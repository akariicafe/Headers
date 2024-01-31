@interface MTLAccelerationStructureAllocationDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
