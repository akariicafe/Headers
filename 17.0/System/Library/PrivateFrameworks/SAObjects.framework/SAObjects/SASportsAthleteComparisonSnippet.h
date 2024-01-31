@class NSDictionary;

@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (copy, nonatomic) NSDictionary *comparisonItemDetails;

+ (id)athleteComparisonSnippetWithDictionary:(id)a0 context:(id)a1;
+ (id)athleteComparisonSnippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
