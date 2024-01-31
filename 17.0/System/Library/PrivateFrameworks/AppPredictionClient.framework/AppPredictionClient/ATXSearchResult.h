@class ATXScoredPrediction, ATXProactiveSuggestion, ATXResponse;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXScoredPrediction *scoredBundleId;
@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

- (id)initWithScoredBundleId:(id)a0 response:(id)a1 proactiveSuggestion:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
