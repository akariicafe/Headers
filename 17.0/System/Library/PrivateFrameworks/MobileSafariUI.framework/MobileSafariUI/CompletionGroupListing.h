@class NSArray, PencilInputCompletionItem, QuickWebsiteSearchCompletionItem, NSSet, WBSBrowserTabCompletionMatch, CalculationResultCompletionItem, FindOnPageCompletionItem, WBSCompletionQuery, NSMutableArray;
@protocol CompletionGroupTitleProviding, CompletionItem;

@interface CompletionGroupListing : NSObject {
    BOOL _needsRebuild;
    NSArray *_groupListing;
    NSMutableArray *_displayedParsecResults;
    BOOL _databaseResultsSufficientForDisplay;
    BOOL _isForFirstDisplay;
    BOOL _isForPrivateBrowsing;
    BOOL _shouldDemoteTabCompletionMatch;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL hasParsecCompletions;
@property (readonly, nonatomic) WBSCompletionQuery *query;
@property (retain, nonatomic) WBSCompletionQuery *rewrittenQuery;
@property (readonly, nonatomic) unsigned long long numberOfGroups;
@property (readonly, copy, nonatomic) NSArray *groups;
@property (readonly, nonatomic, getter=isAwaitingParsec) BOOL awaitingParsec;
@property (readonly, nonatomic, getter=isAwaitingSearchProvider) BOOL awaitingSearchProvider;
@property (readonly, nonatomic, getter=isAwaitingCompletionDatabase) BOOL awaitingCompletionDatabase;
@property (readonly, nonatomic, getter=isAwaitingTabCompletion) BOOL awaitingTabCompletion;
@property (readonly, nonatomic, getter=isSufficientlyComputedForDisplay) BOOL sufficientlyComputedForDisplay;
@property (copy, nonatomic) NSArray *URLCompletionMatches;
@property (readonly, nonatomic) id<CompletionItem> topHit;
@property (readonly, copy, nonatomic) NSSet *topHitAddresses;
@property (readonly, copy, nonatomic) NSArray *topHits;
@property (readonly, nonatomic) unsigned long long indexOfTopHitsGroup;
@property (copy, nonatomic) NSArray *parsecTopHits;
@property (copy, nonatomic) NSArray *localTopHits;
@property (copy, nonatomic) WBSBrowserTabCompletionMatch *tabCompletionMatch;
@property (copy, nonatomic) NSArray *topParsecResults;
@property (copy, nonatomic) NSArray *bottomParsecResults;
@property (retain, nonatomic) QuickWebsiteSearchCompletionItem *quickWebsiteSearchItem;
@property (readonly, nonatomic) long long searchSuggestionsSource;
@property (readonly, copy, nonatomic) NSArray *searchSuggestions;
@property (readonly, nonatomic) unsigned long long indexOfSearchSuggestionsGroup;
@property (copy, nonatomic) NSArray *suggestedSites;
@property (retain, nonatomic) CalculationResultCompletionItem *calculationResultItem;
@property (retain, nonatomic) PencilInputCompletionItem *pencilCompletionItem;
@property (retain, nonatomic) FindOnPageCompletionItem *findOnPageCompletionItem;
@property (weak, nonatomic) id<CompletionGroupTitleProviding> completionGroupTitleProvider;

- (void).cxx_destruct;
- (id)groupAtIndex:(unsigned long long)a0;
- (id)initWithQuery:(id)a0 titleProvider:(id)a1 options:(unsigned long long)a2;
- (void)markDatabaseResultsReceived;
- (void)markParsecResultsReceived;
- (void)markSearchResultsReceived;
- (void)markTabCompletionReceived;
- (void)setNeedsParsecDatabaseQueryRewrite;
- (void)setSearchSuggestions:(id)a0 fromSource:(long long)a1;
- (BOOL)updateWithQuery:(id)a0;

@end
