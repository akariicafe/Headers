@class STSSearchModel, NSArray, NSString, STSCategoryView, NSMutableArray;
@protocol STSCategoryViewControllerDelegate;

@interface STSCategoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate> {
    BOOL _isScrolling;
    NSMutableArray *_displayedResults;
}

@property (retain, nonatomic) STSCategoryView *view;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *recents;
@property (retain, nonatomic) NSMutableArray *model;
@property (retain, nonatomic) STSSearchModel *searchModel;
@property (weak, nonatomic) id<STSCategoryViewControllerDelegate> selectionDelegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) BOOL sendFeedbackOnViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)reload;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateModel;
- (void)updateRecents:(id)a0;
- (void)_commitClearRecents;
- (void)_reportFeedbackDisplayedResultsDidScroll:(BOOL)a0;
- (id)_searchResultIdentifierForSuggestion:(id)a0 recent:(BOOL)a1;
- (void)clearButton:(id)a0 pressedForCategoryResult:(id)a1;
- (void)clearRecents;
- (void)sendRankSectionsFeedback;
- (void)sendVisibleResultsFeedback;
- (void)updateContentOffset:(double)a0;

@end
