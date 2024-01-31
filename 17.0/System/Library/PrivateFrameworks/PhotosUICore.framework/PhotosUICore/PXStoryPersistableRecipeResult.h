@class PXStoryMiroMemoryConverter;
@protocol PFStoryRecipe;

@interface PXStoryPersistableRecipeResult : NSObject

@property (readonly, nonatomic) id<PFStoryRecipe> recipe;
@property (readonly, nonatomic) PXStoryMiroMemoryConverter *miroInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistableRecipe:(id)a0;
- (id)initWithPersistableRecipe:(id)a0 miroInfo:(id)a1;

@end
