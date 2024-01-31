@class WBSQuerySuggestion, NSString, WBSCompletionQuery, SFSearchResult, WBSCalculationResult;
@protocol CompletionItemActionHandler;

@interface CalculationResultCompletionItem : NSObject <CompletionItem> {
    WBSCompletionQuery *_query;
}

@property (readonly, nonatomic) WBSCalculationResult *calculationResult;
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
- (void).cxx_destruct;
- (void)acceptCompletionWithActionHandler:(id)a0;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)a0;
- (id)completionTableViewCellForCompletionList:(id)a0;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)a0 forCompletionList:(id)a1;
- (id)initWithQuery:(id)a0 calculationResult:(id)a1;
- (id)reflectedStringForUserTypedString:(id)a0;

@end
