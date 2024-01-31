@class MPSectionedCollection;

@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject {
    MPSectionedCollection *_underlyingSectionedCollection;
}

@property (readonly, nonatomic) MPSectionedCollection *_underlyingSectionedCollection;
@property (readonly, nonatomic) id underlyingSectionedCollection;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly, nonatomic) id /* block */ itemAtIndexPathBlock;
@property (readonly, nonatomic) id /* block */ sectionItemAtIndexPathBlock;

- (id)allItems;
- (id)init;
- (id)allSections;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)a0;
- (id)initWithUnderlyingSectionedCollection:(id)a0;
- (void)enumerateTitledSectionsUsingBlock:(id /* block */)a0;

@end
