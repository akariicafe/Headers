@class NSArray, GKCollectionViewDataSource;

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) NSArray *metricsForSections;
@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource;
@property (retain, nonatomic) id target;

- (void)configureDataSource;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithDataSource:(id)a0 title:(id)a1;

@end
