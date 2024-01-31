@interface _UIAnimatingLabel : UILabel {
    BOOL _shouldAnimateVariantWeight;
}

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setFont:(id)a0;

@end
