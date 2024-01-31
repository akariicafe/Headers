@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)init;
- (void)showSelectedSearchResult;
- (void)setResults:(id)a0;
- (void)_selectAndScrollToIndexPath:(id)a0;
- (void)viewDidLoad;
- (unsigned long long)totalSearchResults;
- (void)searchQueryCompleted;
- (void)selectPreviousSearchResult;
- (void)searchQueryFoundItems:(id)a0;
- (void)searchQueryStarted;
- (double)iconWidth;
- (void).cxx_destruct;
- (void)selectNextSearchResult;
- (void)scrollViewDidScroll:(id)a0;

@end
