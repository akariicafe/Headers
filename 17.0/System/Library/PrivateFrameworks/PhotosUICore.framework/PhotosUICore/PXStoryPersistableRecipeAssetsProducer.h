@class NSObject;
@protocol OS_dispatch_queue, PFStoryRecipe;

@interface PXStoryPersistableRecipeAssetsProducer : NSObject <PXStoryAssetsProducer>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<PFStoryRecipe> persistableRecipe;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPersistableRecipe:(id)a0;
- (id)requestAssetsWithOptions:(unsigned long long)a0 storyQueue:(id)a1 resultHandler:(id /* block */)a2;

@end
