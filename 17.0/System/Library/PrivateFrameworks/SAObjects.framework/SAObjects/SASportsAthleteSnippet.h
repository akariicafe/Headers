@class NSArray;

@interface SASportsAthleteSnippet : SASportsSnippet

@property (copy, nonatomic) NSArray *athletes;

+ (id)athleteSnippetWithDictionary:(id)a0 context:(id)a1;
+ (id)athleteSnippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
