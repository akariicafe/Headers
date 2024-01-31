@class NSString, NSMutableDictionary;
@protocol ISCompositorRecipe, ISCompositorResourceProvider;

@interface _ISCompositorElement : NSObject <ISCompositorElement, ISCompositorResourceProvider>

@property (retain) id<ISCompositorRecipe> recipe;
@property (readonly) NSMutableDictionary *resourceByName;
@property (readonly) id<ISCompositorResourceProvider> resourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearResources;
- (id)init;
- (void)setResource:(id)a0 forName:(id)a1;
- (void)addResourcesFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)resourceNamed:(id)a0;
- (id)initWithRecipe:(id)a0 resources:(id)a1;

@end
