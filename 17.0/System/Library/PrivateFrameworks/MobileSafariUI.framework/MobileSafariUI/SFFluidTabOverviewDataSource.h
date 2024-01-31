@class NSArray, NSString, NSOrderedSet, SFFluidCollectionView;

@interface SFFluidTabOverviewDataSource : NSObject <SFFluidCollectionViewDataSource> {
    NSArray *_sections;
    NSOrderedSet *_pinnedItems;
    NSOrderedSet *_unpinnedItems;
}

@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) SFFluidCollectionView *fluidCollectionView;
@property (copy, nonatomic) id /* block */ itemViewConfigurationBlock;
@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)itemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionForIdentifier:(long long)a0;
- (unsigned long long)fluidCollectionView:(id)a0 numberOfItemsInSection:(unsigned long long)a1;
- (id)fluidCollectionView:(id)a0 viewForItemAtIndexPath:(id)a1;
- (id)fluidCollectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (unsigned long long)numberOfSectionsForFluidCollectionView:(id)a0;
- (id)indexPathForItem:(id)a0;
- (long long)identifierForSectionAtIndex:(unsigned long long)a0;
- (void)setItemsWithPinnedItems:(id)a0 unpinnedItems:(id)a1;

@end
