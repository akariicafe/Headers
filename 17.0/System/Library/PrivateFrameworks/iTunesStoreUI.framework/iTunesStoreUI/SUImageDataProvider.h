@class UIColor, SUImageModifier;

@interface SUImageDataProvider : ISDataProvider <NSCopying>

@property (retain) UIColor *fillColor;
@property struct CGSize { double width; double height; } finalSize;
@property double inputImageScale;
@property (retain) SUImageModifier *modifier;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_getFinalSize:(struct CGSize { double x0; double x1; } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forImage:(id)a2 withModifier:(id)a3;
- (id)newImageFromImage:(id)a0;

@end
