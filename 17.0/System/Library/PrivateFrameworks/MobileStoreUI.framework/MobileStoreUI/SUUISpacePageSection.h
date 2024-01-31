@class SUUISpacePageComponent;

@interface SUUISpacePageSection : SUUIStorePageSection

@property (readonly, nonatomic) SUUISpacePageComponent *pageComponent;

- (long long)numberOfCells;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)willAppearInContext:(id)a0;

@end
