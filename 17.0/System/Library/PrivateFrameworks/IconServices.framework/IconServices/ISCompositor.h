@class NSMutableArray, CIContext;
@protocol ISCompositorRecipe;

@interface ISCompositor : NSObject

@property (retain) id<ISCompositorRecipe> recipe;
@property (retain) NSMutableArray *elements;
@property (readonly) BOOL canUseCoreImage;
@property (readonly) CIContext *sharedCIContext;
@property unsigned long long renderingMode;

- (id)maskImageForLayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 resourceProvider:(id)a3;
- (void)clearResources;
- (id)init;
- (id)initWithRecipe:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)filterForLayer:(id)a0 scale:(double)a1 resourceProvider:(id)a2;
- (BOOL)canUseCoreImageForEffects;
- (void)drawElement:(id)a0 inContext:(id)a1;
- (void)drawLayer:(id)a0 resourceProvider:(id)a1 inContext:(id)a2;
- (void)drawInContext:(id)a0;
- (BOOL)canUseCoreImage;
- (void)setResource:(id)a0 named:(id)a1;
- (id)scaledImageFromContent:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 needsScaled:(BOOL *)a3;
- (void)addElement:(id)a0;
- (void)addResourcesFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)addElementWithRecipe:(id)a0 resources:(id)a1;

@end
