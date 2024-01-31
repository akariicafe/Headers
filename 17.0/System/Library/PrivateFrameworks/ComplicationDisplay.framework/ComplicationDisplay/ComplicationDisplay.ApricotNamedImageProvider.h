@interface ComplicationDisplay.ApricotNamedImageProvider : CLKImageProvider <CDSwiftUIImageProvider> {
    void /* unknown type, empty encoding */ named;
    void /* unknown type, empty encoding */ finalized;
    void /* unknown type, empty encoding */ _maxSize;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ font;
@property (nonatomic) void /* unknown type, empty encoding */ scale;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } maxSize;

- (id)initPrivate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithForegroundAccentImage:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;

@end
