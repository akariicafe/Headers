@class NSEnumerator, NSMutableDictionary, NSString, NSMutableSet, NSMutableArray, TSKSearch;
@protocol TSKSearchable, TSKFindReplaceDelegate, TSKDocumentRootProvider, TSKSearchTargetProvider;

@interface TSKFindReplaceController : NSObject {
    BOOL _onlySearchesAnnotations;
    NSEnumerator *_currentModelEnumerator;
    id<TSKSearchable> _currentSearchable;
    TSKSearch *_currentSearch;
    double _currentSearchStartTime;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currentRootSearchTargetRange;
@property (retain, nonatomic) NSMutableArray *layoutSearchResults;
@property (retain, nonatomic) NSMutableDictionary *layoutSearchCountForRootIndexMap;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSMutableSet *annotationDisplayStringTypes;
@property (readonly, nonatomic) id<TSKFindReplaceDelegate> findReplaceDelegate;
@property (readonly, nonatomic) id<TSKSearchTargetProvider> searchTargetProvider;
@property (nonatomic) id<TSKDocumentRootProvider> documentRootProvider;
@property (readonly, nonatomic) unsigned long long searchResultsCount;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) unsigned long long searchOptions;
@property (nonatomic) BOOL commentsIncludedInAnnotationSearch;
@property (nonatomic) BOOL countSearchHits;
@property (copy, nonatomic) id /* block */ searchResultComparator;

+ (void)_assertSearchTargetImplementsProperMethods:(id)a0;
+ (void)_recursiveSearchWithSearchTarget:(id)a0 forAnnotationsWithHitBlock:(id /* block */)a1;
+ (void)_recursiveSearchWithSearchTarget:(id)a0 forString:(id)a1 options:(unsigned long long)a2 hitBlock:(id /* block */)a3;
+ (BOOL)p_searchReference:(id)a0 comparedWithSearchReference:(id)a1 orEqual:(BOOL)a2 inDirection:(unsigned long long)a3 before:(BOOL)a4 comparator:(id /* block */)a5;
+ (BOOL)searchReference:(id)a0 isAfterSearchReference:(id)a1 orEqual:(BOOL)a2 inDirection:(unsigned long long)a3 comparator:(id /* block */)a4;
+ (BOOL)searchReference:(id)a0 isBeforeSearchReference:(id)a1 orEqual:(BOOL)a2 inDirection:(unsigned long long)a3 comparator:(id /* block */)a4;

- (void)dealloc;
- (void)invalidateSearchResults;
- (id)documentRoot;
- (void)p_buildSearchResultsIfNecessary;
- (void)_buildLayoutSearchResultsForRootSearchTargetsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 resultsArray:(id)a1;
- (id)_firstResultInDirection:(unsigned long long)a0;
- (id)_lastResultInDirection:(unsigned long long)a0;
- (unsigned long long)_nextRootSearchTargetFromIndex:(unsigned long long)a0 inDirection:(unsigned long long)a1 wrapped:(BOOL *)a2;
- (void)_nextSearchTargetWithMatchInDirection:(unsigned long long)a0;
- (unsigned long long)_resultCountInRootObjectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)annotationSearchReferenceForAnnotation:(id)a0;
- (id)firstVisibleResultInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)indexOfVisibleSearchReference:(id)a0;
- (id)initWithDocumentRootProvider:(id)a0 delegate:(id)a1;
- (id)initWithDocumentRootProvider:(id)a0 delegate:(id)a1 onlySearchesAnnotations:(BOOL)a2;
- (id)initWithDocumentRootProvider:(id)a0 delegate:(id)a1 targetProvider:(id)a2 onlySearchesAnnotations:(BOOL)a3;
- (void)p_buildVisibleSearchResultsIfNecessary;
- (void)p_continueCountingHits;
- (BOOL)p_searchCriteriaIsValid;
- (BOOL)p_shouldCountAnnotation:(id)a0;
- (void)p_startCountingHits;
- (void)p_stopCountingHits;
- (id)searchReferenceAfterReference:(id)a0 inDirection:(unsigned long long)a1;
- (id)searchReferencesToHighlightInVisibleRootObjectRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setSearchProgressBlock:(id /* block */)a0;
- (void)sortLayoutSearchResultsArray:(id)a0;

@end
