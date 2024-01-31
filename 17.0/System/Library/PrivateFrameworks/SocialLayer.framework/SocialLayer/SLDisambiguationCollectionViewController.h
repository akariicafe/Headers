@class NSDictionary, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot, SLHighlight, SLDisambiguationCompositionalLayout;

@interface SLDisambiguationCollectionViewController : UICollectionViewController

@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSDictionary *attributionMap;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLDisambiguationCompositionalLayout *layout;
@property (nonatomic) BOOL isInitialLoad;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } attributionViewFrame;

- (void)viewDidLayoutSubviews;
- (void)startAnimation;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0;
- (void)collectionViewBackgroundTapped:(id)a0;
- (id)cellForIndexPath:(id)a0 inCollectionView:(id)a1 withItemIdentifier:(id)a2;
- (id)dataSourceWithCollectionView:(id)a0;
- (id)initialLayoutGroup:(id)a0 itemsCount:(unsigned long long)a1 collectionWidth:(double)a2 targetItemHeight:(double)a3;
- (unsigned long long)cellPillViewVariant;
- (id)createAttributionMapWithHighlight:(id)a0;
- (id)finalCompositionalLayout;
- (id)finalLayoutGroup:(id)a0 itemsCount:(unsigned long long)a1 collectionWidth:(double)a2 targetItemHeight:(double)a3;
- (id)finalLayoutSectionForEnvironment:(id)a0;
- (id)initialCompositionalLayout;
- (id)initialLayoutSectionForEnvironment:(id)a0;
- (void)updateDataSourceSnapshot;

@end
