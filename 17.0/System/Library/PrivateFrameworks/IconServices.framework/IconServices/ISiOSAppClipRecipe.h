@class NSString;

@interface ISiOSAppClipRecipe : NSObject <ISCompositorRecipe>

@property BOOL shouldOnlyDrawBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)blurRadius;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)appRect;

@end
