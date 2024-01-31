@class UIColor, NSString, NSData, UITextView, HKIncrementalSearchBar, NSOperationQueue, NSMutableArray, _IncrementalSearchOperation;

@interface HKLargePlainTextViewController : HKViewController <HKIncrementalSearchBarDelegate>

@property (readonly, nonatomic) NSString *dataAsString;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar;
@property (readonly, nonatomic) NSOperationQueue *searchQueue;
@property (retain) _IncrementalSearchOperation *currentSearch;
@property (retain, nonatomic) NSMutableArray *currentRanges;
@property long long currentSearchItem;
@property (readonly, nonatomic) UIColor *normalTextViewBackground;
@property (readonly, nonatomic) UIColor *selectedTextViewBackground;
@property (readonly, nonatomic) UIColor *currentSelectionForeground;
@property (readonly, nonatomic) UIColor *currentSelectionBackground;
@property (readonly, nonatomic) UIColor *otherSelectionForeground;
@property (readonly, nonatomic) UIColor *otherSelectionBackground;
@property (nonatomic) double currentKeyboardHeight;
@property (readonly) NSData *data;

- (void)loadView;
- (id)initWithData:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)addSearchResults:(struct IncrementalSearchResultsDefn { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1[64]; })a0;
- (void)cancelCurrentSearch;
- (void)resetSearchResults;
- (id)_selectionAttributes:(BOOL)a0;
- (id)_standardPlainTextFont;
- (void)_updateCurrentSearchItem:(unsigned long long)a0 hitsChanged:(BOOL)a1 resetSearch:(BOOL)a2;
- (BOOL)_updateMatchDisplayString:(unsigned long long)a0 numMatches:(unsigned long long)a1;
- (void)endSearchResults;
- (void)finishSearchResults;
- (void)incrementalSearchOperation:(id)a0;
- (void)resetCurrentSearchItem;
- (void)searchBarChangeSearch:(id)a0 searchString:(id)a1;
- (void)searchBarDoneAction:(id)a0;
- (void)searchBarDownAction:(id)a0;
- (void)searchBarUpAction:(id)a0;
- (id)searchBodyWithAttributes;
- (void)startIncrementalSearch;

@end
