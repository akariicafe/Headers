@class NSString, NSMutableDictionary, UITextRange, _UITextSearchingFindSessionAggregator, NSMutableArray, UIFindInteraction, NSMutableOrderedSet, UITextSearchOptions;
@protocol UITextSearching, NSObject, NSCopying;

@interface UITextSearchingFindSession : UIFindSession {
    BOOL _awaitingFirstResults;
    BOOL _readyToPerformDelayedSearchOperations;
    UITextRange *_highlightedTextRange;
    id<NSObject, NSCopying> _highlightedDocument;
    NSMutableOrderedSet *_sortedDocumentIdentifiers;
    NSMutableDictionary *_sortedResultsByDocument;
    NSMutableArray *_blocksAwaitingSearchResults;
    NSString *_lastSearchQuery;
    UITextSearchOptions *_lastSearchOptions;
    _UITextSearchingFindSessionAggregator *_aggregator;
    UITextRange *_highlightedRangeBeforeSubsequentSearch;
    id<NSObject, NSCopying> _highlightedDocumentBeforeSubsequentSearch;
    struct { unsigned char supportsTextReplacement : 1; unsigned char shouldReplaceFoundTextInRange : 1; unsigned char replaceFoundTextInRange : 1; unsigned char replaceAllOccurrencesOfQueryString : 1; unsigned char willHighlightFoundTextRange : 1; unsigned char scrollRangeToVisible : 1; unsigned char shouldBeginTextSearchOperation : 1; unsigned char didBeginTextSearchOperation : 1; unsigned char didEndTextSearchOperation : 1; unsigned char searchResultDisplayStyle : 1; unsigned char selectedTextSearchDocument : 1; unsigned char compareOrderFromDocument : 1; unsigned char compareFoundRangeToRange : 1; } _searchableObjectConformsTo;
    UIFindInteraction *_parentInteraction;
}

@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (weak, nonatomic) id<UITextSearching> searchableObject;
@property (retain, nonatomic) id<UITextSearching> stronglyHeldSearchableObject;

- (long long)resultCount;
- (void)reset;
- (void).cxx_destruct;
- (id)_allFoundRanges;
- (void)highlightNextResultInDirection:(long long)a0;
- (void)performSearchWithQuery:(id)a0 options:(id)a1;
- (void)_performDelayedSearchOperations;
- (void)replaceAllInstancesOfSearchQuery:(id)a0 withReplacementString:(id)a1 options:(id)a2;
- (id /* block */)_documentComparator;
- (void)_finishedSearching;
- (void)_foundRange:(id)a0 forSearchString:(id)a1 inDocument:(id)a2;
- (BOOL)_hasResults;
- (void)_invalidateAllFoundRanges;
- (void)_invalidateFoundRange:(id)a0 inDocument:(id)a1;
- (BOOL)_isCurrentSearchQueryValid;
- (id)_nearestRangeToSelectedRangeInDocument:(id)a0;
- (id)_nextItemInOrderedSet:(id)a0 usingComparator:(id /* block */)a1 fromItem:(id)a2 inDirection:(long long)a3 loopAround:(BOOL)a4;
- (void)_nextResultRelativeToRange:(out id *)a0 document:(out id *)a1 inDirection:(long long)a2;
- (void)_performBlockWhenSearchResultsAreAvailable:(id /* block */)a0;
- (void)_readilyHighlightNearestRangeToSelectedRangeIfNecessary;
- (void)_readilyHighlightNextResultInDirection:(long long)a0;
- (void)_replaceHighlightedTextRangeWithReplacementString:(id)a0;
- (void)_setHighlightedRange:(id)a0 inDocument:(id)a1;
- (void)_setNeedsResultCountUpdate;
- (void)_setReadyToPerformDelayedSearchOperations;
- (id /* block */)_textRangeComparatorForDocument:(id)a0;
- (void)_updateResultCountLabel;
- (void)_updateSearchableObjectProtocolConformance;
- (BOOL)allowsReplacementForCurrentlyHighlightedResult;
- (void)highlightNearestFoundRangeToSelectedRangeIfNecessary;
- (long long)highlightedResultIndex;
- (id)initWithSearchableObject:(id)a0;
- (id)initWithStronglyHeldSearchableObject:(id)a0;
- (void)invalidateFoundResults;
- (id)parentInteraction;
- (void)performSingleReplacementWithSearchQuery:(id)a0 replacementString:(id)a1 options:(id)a2;
- (void)setParentInteraction:(id)a0;
- (BOOL)supportsReplacement;

@end
