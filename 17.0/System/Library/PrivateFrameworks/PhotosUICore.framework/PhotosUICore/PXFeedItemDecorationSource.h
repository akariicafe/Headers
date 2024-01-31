@class PXGLayout, PXSectionedDataSource, PXFeedSectionContentLayout, PXSelectionSnapshot, NSString;

@interface PXFeedItemDecorationSource : NSObject <PXGSelectionDecorationSource>

@property (readonly, nonatomic) PXFeedSectionContentLayout *decoratedSectionContentLayout;
@property (weak, nonatomic) PXGLayout *decoratedLayout;
@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) long long section;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataSource:(id)a0 section:(long long)a1;
- (long long)selectionDecorationStyleInLayout:(id)a0;
- (id)_spriteIndexesForItems:(id)a0 inLayout:(id)a1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(id)a0;
- (id)selectedSpriteIndexesInLayout:(id)a0;
- (void).cxx_destruct;
- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)a0 inLayout:(id)a1;
- (struct { float x0; float x1; float x2; float x3; })overlayInsetsForSpriteIndex:(unsigned int)a0 inLayout:(id)a1;

@end
