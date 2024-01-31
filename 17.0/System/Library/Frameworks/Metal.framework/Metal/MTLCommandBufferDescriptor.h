@interface MTLCommandBufferDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL retainedReferences;
@property (nonatomic) unsigned long long errorOptions;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
