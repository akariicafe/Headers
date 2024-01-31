@class NSString, CSSuggestion, NSArray, SFSearchSuggestion;

@interface SPSearchSuggestionResult : SFSearchResult_SpotlightExtras

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) SFSearchSuggestion *suggestion;
@property (readonly, nonatomic) CSSuggestion *spotlightSuggestion;
@property (readonly, nonatomic) NSArray *searchEntities;

+ (BOOL)supportsSecureCoding;
+ (id)searchSuggestionRankingResultWithResult:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
+ (id)searchSuggestionRankingResultWithSpotlightSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
+ (id)searchSuggestionRankingResultWithSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
+ (void)updateRankingItemForSuggestionResult:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareByRank:(id)a0;
- (id)initWithSearchSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
- (id)initWithSearchResult:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
- (id)initWithSpotlightSuggestion:(id)a0 query:(id)a1 sectionBundleIdentifier:(id)a2 queryId:(unsigned long long)a3;
- (id)localSuggestionFeatures;
- (id)suggestionsFeedbackData;

@end
