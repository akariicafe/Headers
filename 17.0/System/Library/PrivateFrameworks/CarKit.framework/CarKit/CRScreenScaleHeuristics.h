@interface CRScreenScaleHeuristics : NSObject

+ (double)getPrimaryDisplayScale:(struct CGSize { double x0; double x1; })a0 viewAreas:(id)a1;
+ (double)getSecondaryDisplayScale:(struct CGSize { double x0; double x1; })a0 physicalSize:(struct CGSize { double x0; double x1; })a1;
+ (void)scaledDisplays:(id)a0 reply:(id /* block */)a1;

@end
