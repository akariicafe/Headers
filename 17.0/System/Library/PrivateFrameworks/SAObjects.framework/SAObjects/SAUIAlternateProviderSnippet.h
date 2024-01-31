@class NSArray;

@interface SAUIAlternateProviderSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *alternateProviderResults;

+ (id)alternateProviderSnippet;
+ (id)alternateProviderSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
