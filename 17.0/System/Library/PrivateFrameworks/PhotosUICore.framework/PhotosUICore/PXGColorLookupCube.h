@class NSData;

@interface PXGColorLookupCube : NSObject <NSCopying>

@property (nonatomic) long long edgeSize;
@property (readonly, nonatomic) BOOL shouldCache;
@property (readonly, nonatomic) NSData *textureData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ center;

- (id)createTextureWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
