@class NSString;

@interface MDLLight : MDLObject {
    struct RTLight { void /* function */ **x0; struct CGColor *x1; id x2; int x3; } *_light;
    NSString *_colorSpace;
    struct CGColorSpace { } *_cgColorSpace;
}

@property (nonatomic) unsigned long long lightType;
@property (copy, nonatomic) NSString *colorSpace;

- (void)setTransform:(id)a0;
- (id)init;
- (void)dealloc;
- (void /* unknown type, empty encoding */)position;
- (void).cxx_destruct;
- (struct RTLight { void /* function */ **x0; struct CGColor *x1; id x2; int x3; } *)rtLight;
- (struct CGColor { } *)irradianceAtPoint:(SEL)a0;
- (struct CGColor { } *)irradianceAtPoint:(SEL)a0 colorSpace:(struct CGColorSpace { } *)a1;

@end
