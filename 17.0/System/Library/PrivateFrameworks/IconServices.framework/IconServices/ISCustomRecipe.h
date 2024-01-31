@class NSDictionary, IFBundle, NSString;
@protocol ISCompositorRecipe;

@interface ISCustomRecipe : NSObject <ISCompositorResourceProvider>

@property (readonly) IFBundle *bundle;
@property (readonly) NSDictionary *bitmapResources;
@property (readonly) NSDictionary *symbolResources;
@property (readonly) id<ISCompositorRecipe> recipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customRecipeWithInfo:(id)a0 bundle:(id)a1;

- (void).cxx_destruct;
- (id)resourceNamed:(id)a0;
- (id)initWithRecipe:(id)a0 bitmapResources:(id)a1 symbolResources:(id)a2 bundle:(id)a3;

@end
