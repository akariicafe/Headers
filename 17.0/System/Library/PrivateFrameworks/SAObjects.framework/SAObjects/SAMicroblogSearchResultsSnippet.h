@class NSArray;

@interface SAMicroblogSearchResultsSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *searches;

+ (id)searchResultsSnippet;
+ (id)searchResultsSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
