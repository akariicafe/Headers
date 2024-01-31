@interface MTLAccelerationStructureDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long usage;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isInstanceDescriptor;

@end
