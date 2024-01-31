@interface _CHSWidgetDisplayProperties : CHSWidgetDisplayProperties

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithScale:(double)a0 colorGamut:(unsigned long long)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 colorGamut:(unsigned long long)a2;
- (id)initWithWidgetDisplayProperties:(id)a0;

@end
