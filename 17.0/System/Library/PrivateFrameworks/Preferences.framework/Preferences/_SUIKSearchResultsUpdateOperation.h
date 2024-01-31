@class NSArray, UICollectionViewDiffableDataSource;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface _SUIKSearchResultsUpdateOperation : NSOperation

@property (weak, nonatomic) NSArray *results;
@property (weak, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (weak, nonatomic) id<SUIKSearchResultsCollectionViewControllerDelegate> delegate;

- (void)main;
- (void).cxx_destruct;
- (id)initWithResults:(id)a0 diffableDataSource:(id)a1 delegate:(id)a2;

@end
