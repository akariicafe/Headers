@interface CIConstColor : CIColor

+ (id)alloc;

- (double)green;
- (id)retain;
- (double)blue;
- (const double *)components;
- (double)red;
- (unsigned long long)hash;
- (void)dealloc;
- (struct CGColorSpace { } *)colorSpace;
- (unsigned long long)retainCount;
- (id)autorelease;
- (double)alpha;
- (unsigned long long)numberOfComponents;
- (struct CGColor { } *)cgColor;
- (BOOL)isEqual:(id)a0;
- (oneway void)release;
- (struct CGColor { } *)rgbColor;

@end
