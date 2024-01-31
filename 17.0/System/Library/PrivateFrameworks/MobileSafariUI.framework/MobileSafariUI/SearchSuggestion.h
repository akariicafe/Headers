@class WBSQuerySuggestion, NSString, WBSCompletionQuery, SFSearchResult;
@protocol CompletionItemActionHandler;

@interface SearchSuggestion : NSObject <CompletionItem> {
    BOOL _asTypedSuggestion;
    BOOL _recentSearch;
    BOOL _searchEngineSuggestion;
    SFSearchResult *_sfSearchResultValue;
    id<CompletionItemActionHandler> _handler;
    BOOL _handlingAccessoryButtonTap;
    BOOL _forPrivateBrowsing;
}

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) BOOL goesToURL;
@property (readonly, nonatomic) NSString *titleForHistoryServiceCompletionList;
@property (readonly, nonatomic) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, nonatomic) BOOL usesDefaultHeaderView;
@property (readonly, nonatomic) BOOL needsSectionHeader;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) BOOL restoresSearchState;
@property (retain, nonatomic) id<CompletionItemActionHandler> handlerForActionItem;
@property (readonly, nonatomic) long long completionCellBackgroundModeInTopSection;
@property (readonly, nonatomic) NSString *urlStringForHistoryServiceCompletionList;
@property (readonly, copy, nonatomic) NSString *subtextForHistoryServiceCompletionList;
@property (retain, nonatomic) WBSCompletionQuery *query;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (nonatomic) long long parsecQueryID;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEquivalentTo:(id)a0;
- (id)userVisibleURLString;
- (void).cxx_destruct;
- (id)originalURLString;
- (void)_accessoryButtonTapped;
- (id)_initWithString:(id)a0 userQuery:(id)a1 forPrivateBrowsing:(BOOL)a2;
- (void)acceptCompletionWithActionHandler:(id)a0;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)a0;
- (double)completionTableViewCellCustomHeightForCompletionList:(id)a0;
- (id)completionTableViewCellForCompletionList:(id)a0;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)a0 forCompletionList:(id)a1;
- (id)initWithRecentSearchString:(id)a0 userQuery:(id)a1 forPrivateBrowsing:(BOOL)a2;
- (id)initWithSearchEngineSuggestion:(id)a0 userQuery:(id)a1 forPrivateBrowsing:(BOOL)a2;
- (id)initWithUserTypedQuery:(id)a0 forPrivateBrowsing:(BOOL)a1;
- (id)reflectedStringForUserTypedString:(id)a0;

@end
