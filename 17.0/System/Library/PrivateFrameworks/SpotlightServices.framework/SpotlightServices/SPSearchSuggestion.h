@class NSArray, NSString, NSDictionary;

@interface SPSearchSuggestion : SFSearchSuggestion {
    NSString *_completion;
    NSString *_spotlightQuery;
    NSDictionary *_categories;
    NSDictionary *_terms;
}

@property unsigned long long queryLen;
@property unsigned long long queryFragmentCount;
@property unsigned long long queryCompletionCount;
@property unsigned long long fragments;
@property double age;
@property double prob;
@property unsigned long long maxscore;
@property int weight;
@property int parentWeight;
@property int rootWeight;
@property double phraseScore;
@property double punishment;
@property double compositeScore;
@property int completionType;
@property int prefixLen;
@property float fieldWeight;
@property BOOL isSingleThread;
@property BOOL hasUsedDate;
@property BOOL isShortcut;
@property BOOL hasMultipleResults;
@property (retain) NSArray *bundleIDs;
@property (readonly, nonatomic) NSArray *searchEntities;

+ (id)suggestionsWithData:(id)a0 queryString:(id)a1;
+ (id)suggestionsWithNLPData:(id)a0 queryString:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (Class)classForCoder;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithNLPData:(id)a0 queryString:(id)a1;
- (id)initWithSuggestion:(id)a0 query:(id)a1 scores:(id)a2 bundleIDs:(id)a3;
- (id)suggestionsFeedbackData;

@end
