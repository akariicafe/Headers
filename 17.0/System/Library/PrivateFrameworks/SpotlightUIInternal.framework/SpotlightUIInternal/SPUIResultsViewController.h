@class SFResultSection, NSTimer, NSArray, SFSearchResult, SPSearchEntity, SearchUILoadingView, UISearchToken, NSString, SPUISearchModel;
@protocol SPUIResultsViewDelegate, SearchUIBackgroundColorDelegate;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPUIResultsViewTestingDelegate, SPSearchAgentDelegate, SearchUIBackgroundColorProtocol> {
    unsigned long long _startTime;
}

@property (retain) NSArray *resultSections;
@property (retain) SFResultSection *suggestionsSection;
@property (readonly) SFSearchResult *actualSearchSuggestionResult;
@property BOOL hasResultsWaitingToUpdate;
@property (retain) SFResultSection *searchThroughSection;
@property unsigned long long previousQueryId;
@property (retain) SFSearchResult *highlightedResult;
@property (retain) SearchUILoadingView *loadingView;
@property (retain) NSTimer *loadingViewTimer;
@property BOOL queryJustHasTopHits;
@property struct CGSize { double width; double height; } oldContentSize;
@property (weak, nonatomic) id<SPUIResultsViewDelegate> delegate;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (readonly) UISearchToken *searchToken;
@property (readonly) SPUISearchModel *model;
@property (retain) SPSearchEntity *searchEntity;
@property BOOL allowHighlightingWhenInactive;
@property (weak, nonatomic) id<SearchUIBackgroundColorDelegate> backgroundColorDelegate;
@property (readonly, nonatomic) BOOL isHighlighting;
@property (nonatomic) BOOL useLoadingView;
@property (nonatomic) BOOL shouldAnimateUpdates;
@property (copy, nonatomic) id /* block */ didFinishGettingAllResultsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeCompletionAndHighlightAsTyped:(BOOL)a0;
- (void)searchAgentClearedResults:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)changeTextFieldsReturnKeyType:(long long)a0 withGoTakeoverResult:(id)a1;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setRestorationContext:(id)a0;
- (void)searchAgentUpdatedResults:(id)a0;
- (BOOL)isResultOriginalSearchSuggestion:(id)a0;
- (BOOL)searchAgentHasWindow:(id)a0;
- (id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)a0 detailText:(id)a1 suggestionIdentifier:(id)a2 queryContext:(id)a3;
- (BOOL)_hasRealSuggestions;
- (id)searchUIBackgroundColor;
- (void)clearSuggestionSection;
- (id)restorationContext;
- (void)unhideLoadingView;
- (void)searchAgentFinishedQueryWithoutAdditionalResults:(id)a0;
- (void).cxx_destruct;
- (void)highlightResultAfterUnmarkingText;
- (id)initWithSearchModel:(id)a0 searchEntity:(id)a1;
- (void)searchUpdatedWithString:(id)a0 tokenEntity:(id)a1 queryId:(unsigned long long)a2 wantsCompletions:(BOOL)a3 keyboardLanguage:(id)a4;
- (void)_pushSectionsUpdate;
- (void)forceHighlightForResult:(id)a0;
- (id)initWithSearchModel:(id)a0;
- (id)asTypedSearchResult;
- (void)finishedGettingResults:(BOOL)a0;

@end
