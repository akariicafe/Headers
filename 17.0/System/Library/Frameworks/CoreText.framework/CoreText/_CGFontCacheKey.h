@class NSURL;

@interface _CGFontCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) double opticalSize;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
