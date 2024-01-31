@class NSArray, UICollectionView, NSDictionary, NSString, _TtC26DocumentManagerExecutables25DOCTagsCollectionViewData;
@protocol DOCTagsCollectionViewDelegate;

@interface DOCTagsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DOCTagsCollectionItemContentViewDelegate, DocumentManagerExecutables.DOCTagsCollectionViewDataDelegate>

@property (readonly, nonatomic) _TtC26DocumentManagerExecutables25DOCTagsCollectionViewData *tagsData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } lastIntrinsicContentSize;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) NSDictionary *sizingCells;
@property (weak, nonatomic) id<DOCTagsCollectionViewDelegate> delegate;
@property (retain, nonatomic) NSArray *nodes;
@property (nonatomic) BOOL showsAddTagButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_layout;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)_reloadData;
- (void)collectionView:(id)a0 willDisplayContextMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 willEndContextMenuInteractionWithConfiguration:(id)a1 animator:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 contextMenuConfiguration:(id)a1 highlightPreviewForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)doc_commonInit;
- (void)updateForChangedTraitsAffectingFonts;
- (id)_cellMenuTargetForIndexPath:(id)a0;
- (id)_indexPathOfTag:(id)a0;
- (id)cellForIndexPath:(id)a0 dequeueCell:(id /* block */)a1;
- (void)setupCells:(id)a0 registerClasses:(BOOL)a1;
- (void)tagsCollectionDataNeedsReload:(id)a0;
- (void)tagsCollectionItem:(id)a0 didDeleteTag:(id)a1;

@end
