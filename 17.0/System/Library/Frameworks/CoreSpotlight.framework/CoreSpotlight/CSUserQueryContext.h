@class NSDictionary;

@interface CSUserQueryContext : CSSearchQueryContext {
    BOOL _enableSuggestionTokens;
    NSDictionary *_queryParserOptions;
}

@property (nonatomic) BOOL enableRankedResults;
@property (nonatomic) long long maxResultCount;
@property (nonatomic) long long maxSuggestionCount;

+ (id)userQueryContextWithCurrentSuggestion:(id)a0;
+ (id)userQueryContext;

- (id)getParserOptions;
- (void).cxx_destruct;
- (void)updateWithOptions:(id)a0;

@end
