@class CIColor, UIColor;

@interface UICIColor : UIColor {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (void)setStroke;
- (struct CGColor { } *)CGColor;
- (BOOL)getWhite:(double *)a0 alpha:(double *)a1;
- (void)setFill;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (void)set;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCIColor:(id)a0;
- (id)_rgbColor;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CIColor;

@end
