@class NSUUID, NSData;

@interface IFImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL placeholder;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSData *bitmapData;
@property BOOL largest;
@property (readonly) double dimension;
@property struct CGSize { double x0; double x1; } minimumSize;
@property BOOL placeholder;
@property unsigned long long validationFlags;
@property struct CGSize { double x0; double x1; } iconSize;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) struct CGImage { } *CGImage;
@property (readonly) struct CGImage { } *cgImage;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (struct CGImage { } *)createCGImageWithBitmapData:(id)a0;
+ (struct CGImage { } *)createCGImageWithBitmapData:(id)a0 imageHeader:(struct { unsigned int x0; unsigned int x1; unsigned int x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned char x9[12]; } *)a1;
+ (struct CGColorSpace { } *)defaultCGColorSpace;
+ (id)imageWithContentsOfURL:(id)a0;
+ (struct CGImage { } *)escapingCGImageWithCGImage:(struct CGImage { } *)a0;

- (BOOL)writeToURL:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)digest;
- (id)validationToken;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (id)_init;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (struct CGSize { double x0; double x1; })pixelSize;
- (id)initWithContentsOfURL:(id)a0;
- (id)uuid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (double)dimension;
- (id)initWithCoder:(id)a0;
- (id)initWithContentsOfURL:(id)a0 scale:(double)a1;
- (id)initWithData:(id)a0 uuid:(id)a1;

@end
