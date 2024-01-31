@class WFGiphySessionManager, UICollectionView, NSArray, UICollectionViewFlowLayout, UIView, NSString;
@protocol WFGiphyViewControllerDelegate;

@interface WFGiphyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UISearchBarDelegate>

@property (readonly, weak, nonatomic) UIView *emptyListView;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) WFGiphySessionManager *sessionManager;
@property (copy, nonatomic) NSArray *objects;
@property (readonly, nonatomic) BOOL selectMultiple;
@property (readonly, copy, nonatomic) NSString *query;
@property (weak, nonatomic) id<WFGiphyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setQuery:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)done;
- (void)loadView;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)cancel;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)accessibilityPerformEscape;
- (id)initWithQuery:(id)a0 selectMultiple:(BOOL)a1;
- (void)updateResults;

@end
