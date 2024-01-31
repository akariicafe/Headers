@interface FxColor : NSObject <NSCoding> {
    void *_priv;
    void *_pad[3];
}

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCIColor:(id)a0;
+ (id)colorWithString:(id)a0;

- (double)green;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (double)blue;
- (const double *)components;
- (double)red;
- (id)stringRepresentation;
- (void)dealloc;
- (struct CGColorSpace { } *)colorSpace;
- (void)encodeWithCoder:(id)a0;
- (double)alpha;
- (id)ciColor;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)description;
- (unsigned long long)numberOfComponents;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGColor { } *)_cgColor;
- (void)convertToRGBA:(double *)a0;

@end
