@class NSString, SFFluidCollectionViewUpdate, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol SFFluidCollectionShadowUpdateContainer;

@interface SFFluidCollectionShadowUpdateController : NSObject <SFFluidCollectionDataContainer> {
    NSMutableArray *_numberOfItems;
    NSMutableDictionary *_tokenToItemMapping;
    NSMutableSet *_updatesPendingRemoval;
    BOOL _needsInitialCounts;
}

@property (readonly, nonatomic) SFFluidCollectionViewUpdate *shadowUpdate;
@property (weak, nonatomic) id<SFFluidCollectionShadowUpdateContainer> container;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (id)init;
- (id)applyUpdate:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void)performBatchUpdatesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateCounts;
- (id)addShadowUpdateItems:(id)a0;
- (id)dataSourceIndexPathForIndexPath:(id)a0;
- (id)indexPathForDataSourceIndexPath:(id)a0;
- (void)removeShadowUpdateItemsForToken:(id)a0;

@end
