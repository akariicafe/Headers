@interface VUIImageFactory : NSObject

+ (id)URLFromSource:(id)a0 extension:(id)a1 p3Specifier:(id)a2 cropCode:(id)a3 imageSize:(struct CGSize { double x0; double x1; })a4 centerGrowth:(BOOL)a5 focusSizeIncrease:(double)a6;
+ (id)_getResourceImageFromDescriptor:(id)a0;
+ (id)_imageProxyWithURL:(id)a0;
+ (id)_makeImageViewWithDescriptor:(id)a0 proxy:(id)a1 existingView:(id)a2;
+ (id)_makeSourceStringFromSource:(id)a0 p3Specifier:(id)a1;
+ (id)makeImageProxyWithDescriptor:(id)a0;
+ (id)makeImageViewWithDescriptor:(id)a0 existingView:(id)a1;
+ (id)makeImageViewWithResourceDescriptor:(id)a0 existingView:(id)a1;

@end
