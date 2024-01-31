@class NSString, NSArray;

@interface MKAutocompleteAnalyticsState : NSObject

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSArray *suggestionEntries;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 queryTokens:(id)a1 suggestionEntries:(id)a2;

@end
