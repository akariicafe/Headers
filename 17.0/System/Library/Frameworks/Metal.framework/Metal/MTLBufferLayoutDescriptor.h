@interface MTLBufferLayoutDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long stepFunction;
@property (nonatomic) unsigned long long stepRate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (unsigned long long)hash;
- (BOOL)isStrideDynamic;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
