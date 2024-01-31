@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned long long pixelType;
@property (readonly) unsigned int osType;
@property (readonly, nonatomic) long long pixelsHigh;
@property (readonly, nonatomic) long long pixelsWide;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) MLImageSizeConstraint *sizeConstraint;

+ (id)constraintWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2;
+ (id)constraintWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2 sizeConstraint:(id)a3;
+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)a0;
+ (id)stringForImagePixelType:(unsigned long long)a0;
+ (id)stringForPixelFormatType:(unsigned int)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForAllowedOSTypes;
- (BOOL)allowsPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2 sizeConstraint:(id)a3;

@end
