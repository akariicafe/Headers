@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _cachedCalculatedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNSizeRange *pixelsWideRange;
@property (readonly, nonatomic) VNSizeRange *pixelsHighRange;
@property (readonly, nonatomic) unsigned long long aspectRatioHandling;
@property (readonly, nonatomic) unsigned int idealImageFormat;
@property (readonly, nonatomic) unsigned int idealOrientation;
@property (readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedPixelsWide:(unsigned long long)a0 pixelsHigh:(unsigned long long)a1;
- (id)initWithIdealFormat:(unsigned int)a0 pixelsWideRange:(id)a1 pixelsHighRange:(id)a2 aspectRatioHandling:(unsigned long long)a3 idealOrientation:(unsigned int)a4 orientationAgnostic:(BOOL)a5;
- (id)initWithIdealFormat:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 orientation:(unsigned int)a3 aspectRatioHandling:(unsigned long long)a4 orientationAgnostic:(BOOL)a5;

@end
