@interface CATintedImage : NSObject <NSSecureCoding> {
    unsigned int _copy_flags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) struct CGImage { } *image;
@property (retain) struct CGColor { } *tint;

+ (id)tintedImageWithCGImage:(struct CGImage { } *)a0 tint:(struct CGColor { } *)a1 copyFlags:(unsigned int)a2;
+ (void)CAMLParserStartElement:(id)a0;
+ (id)tintedImageWithCABackingStore:(struct CABackingStore { } *)a0;
+ (id)tintedImageWithCGImage:(struct CGImage { } *)a0 tint:(struct CGColor { } *)a1;

- (void)CA_prepareRenderValue;
- (void)dealloc;
- (void)CAMLParser:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)CAMLTypeForKey:(id)a0;
- (id)initWithCoder:(id)a0;

@end
