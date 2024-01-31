@class UIStackView, NSString, NSArray, UICollectionViewFlowLayout, NTKGalleryCollection, UICollectionView, NSLayoutConstraint, UILabel;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <NTKGalleryCollectionDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSLayoutConstraint *cvHeightConstraint;
@property (retain, nonatomic) UIStackView *contentStack;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *footerStack;
@property (retain, nonatomic) UILabel *footer;
@property (copy, nonatomic) NSArray *snapshotRequests;
@property (nonatomic) BOOL allSnapshotsLoaded;
@property (nonatomic) BOOL showFooterInCollectionView;
@property (retain, nonatomic) NTKGalleryCollection *collection;
@property (weak, nonatomic) id<NTKCGalleryCellDelegate> delegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)estimatedRowHeight;
+ (id)reuseIdentifier;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutSubviews;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_configureViews;
- (struct CGPoint { double x0; double x1; })_contentInsetPoint;
- (void)_fontSizeDidChange;
- (void)_resetSnapshotRequests;
- (void)clearSelectedFaces;
- (id)containerViewForFace:(id)a0;
- (id)faceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)galleryCollectionDidChange:(id)a0 shouldUpdateSnaphots:(BOOL)a1;
- (void)selectFace:(id)a0;
- (void)updateFaceAtIndex:(unsigned long long)a0;

@end
