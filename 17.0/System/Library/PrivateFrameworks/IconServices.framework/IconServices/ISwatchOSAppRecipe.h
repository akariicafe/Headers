@class NSString, IFIconSpecification;

@interface ISwatchOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISSuppliesIconSpecification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL shouldApplyMask;
@property (readonly) IFIconSpecification *iconSpecification;

- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
