@class STSSearchModel, NSString, STSSuggestionView;
@protocol STSSuggestionViewControllerDelegate;

@interface STSSuggestionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, STSSuggestionViewDelegate, STSSearchModelQuerySuggestionsDelegate>

@property (retain, nonatomic) STSSuggestionView *view;
@property (retain, nonatomic) STSSearchModel *searchModel;
@property (weak, nonatomic) id<STSSuggestionViewControllerDelegate> selectionDelegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)clearSuggestions;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_hideNoticeOverlay;
- (void)_updateFooterOrigin;
- (void)_updateFooterOriginForBoundsHeight:(double)a0;
- (void)noticeViewDidDismiss:(id)a0;
- (void)searchModelUpdatedQuerySuggestions:(id)a0;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(id)a0;
- (void)suggestionViewDidTapLogo:(id)a0;
- (void)updateContentOffset:(double)a0;
- (void)updateQuerySuggestions:(id)a0;

@end
