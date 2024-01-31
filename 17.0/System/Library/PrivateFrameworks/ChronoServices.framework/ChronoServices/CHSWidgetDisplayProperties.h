@interface CHSWidgetDisplayProperties : NSObject <NSSecureCoding, NSCopying> {
    struct CGSize { double width; double height; } _size;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned long long colorGamut;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithDisplayConfiguration:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)comparedTo:(id)a0;
- (id)fallbackDisplayProperties;
- (id)initWithScale:(double)a0 colorGamut:(unsigned long long)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 colorGamut:(unsigned long long)a2;
- (id)initWithWidgetDisplayProperties:(id)a0;

@end
