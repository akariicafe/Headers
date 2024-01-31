@interface MTLIntersectionFunctionTableDescriptorInternal : MTLIntersectionFunctionTableDescriptor {
    struct MTLIntersectionFunctionTableDescriptorPrivate { unsigned long long functionCount; BOOL forceResourceIndex; unsigned long long resourceIndex; } _private;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)setResourceIndex:(unsigned long long)a0;
- (void)setForceResourceIndex:(BOOL)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)resourceIndex;
- (unsigned long long)hash;
- (id)description;
- (BOOL)forceResourceIndex;
- (unsigned long long)functionCount;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFunctionCount:(unsigned long long)a0;

@end
