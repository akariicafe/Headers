@interface CAMLegibilityViewHelper : NSObject

+ (id)_imageFromLabel:(id)a0 sizeToFit:(BOOL)a1;
+ (id)imageForText:(id)a0 font:(id)a1 textAlignment:(long long)a2 constrainedToSize:(struct CGSize { double x0; double x1; })a3;
+ (id)newLegibilityViewWithSettings:(id)a0 forLabel:(id)a1 sizeToFit:(BOOL)a2;

@end
