@class NSData, NSString, NSURL, UIImage, NSBundle, WFColor, WFImageSymbolConfiguration, NSImage;

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {
    id _internalCGImage;
    id _internalImageSource;
    UIImage *_UIImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *PNGRepresentation;
@property (readonly, nonatomic) struct CGImageSource { } *internalImageSource;
@property (readonly, nonatomic) struct CGImage { } *internalCGImage;
@property (readonly, nonatomic) long long representationType;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) WFImageSymbolConfiguration *symbolConfiguration;
@property (readonly, nonatomic) BOOL allowsAnimated;
@property (readonly, nonatomic) BOOL hasValidImage;
@property (copy, nonatomic) WFColor *tintColor;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, nonatomic) UIImage *platformImage;
@property (readonly, nonatomic) UIImage *untintedPlatformImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) UIImage *untintedUIImage;
@property (readonly, weak, nonatomic) NSImage *NSImage;
@property (readonly, nonatomic) NSImage *untintedNSImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } CGImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPoints;

+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithContentsOfURL:(id)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2;
+ (id)imageWithData:(id)a0 scale:(double)a1;
+ (id)applicationIconImageForBundleIdentifier:(id)a0;
+ (id)applicationIconImageForBundleIdentifier:(id)a0 format:(unsigned long long)a1;
+ (id)applicationIconImageForCalendarDate:(id)a0 format:(unsigned long long)a1;
+ (id)documentIconImageForFileType:(id)a0;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 inCatalogs:(id)a2;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 symbolSize:(unsigned long long)a2;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 symbolSize:(unsigned long long)a2 scaleFactor:(double)a3;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 symbolSize:(unsigned long long)a2 scaleFactor:(double)a3 rightToLeft:(BOOL)a4 appearanceName:(id)a5;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 symbolSize:(unsigned long long)a2 symbolWeight:(long long)a3 scaleFactor:(double)a4 rightToLeft:(BOOL)a5 appearanceName:(id)a6 inCatalogs:(id)a7;
+ (id)glyphNamed:(id)a0 pointSize:(double)a1 symbolWeight:(long long)a2 scaleFactor:(double)a3 inCatalogs:(id)a4;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 scale:(double)a2;
+ (id)imageWithData:(id)a0 scale:(double)a1 allowAnimated:(BOOL)a2;
+ (id)imageWithDeviceScreenScaleImageData:(id)a0;
+ (id)systemImageNamed:(id)a0 configuration:(id)a1 renderingMode:(unsigned long long)a2;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageWithRenderingMode:(unsigned long long)a0;
- (id)imageWithTintColor:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2;
- (id)initWithPlatformImage:(id)a0;
- (id)applicationIconImageWithFormat:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })contentsTransformForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)createNonRotatedCGImageRepresentation;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 blendMode:(int)a2 alpha:(double)a3;
- (id)imageByTintingBitmapWithTintColor:(id)a0;
- (id)imageWithDisplayStyle:(unsigned long long)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2 renderingMode:(unsigned long long)a3;
- (id)initWithData:(id)a0 scale:(double)a1 allowAnimated:(BOOL)a2;
- (id)initWithName:(id)a0 bundle:(id)a1 scale:(double)a2;
- (id)initWithPlatformImage:(id)a0 scale:(double)a1;
- (id)initWithRepresentationType:(long long)a0;
- (id)initWithSymbolName:(id)a0 configuration:(id)a1 renderingMode:(unsigned long long)a2;
- (id)resizedImageWithSizeInPoints:(struct CGSize { double x0; double x1; })a0;
- (id)resizedImageWithSizeInPoints:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)tintedImageWithColor:(id)a0;

@end
