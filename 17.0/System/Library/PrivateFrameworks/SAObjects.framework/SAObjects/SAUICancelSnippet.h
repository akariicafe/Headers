@interface SAUICancelSnippet : SAUISnippetInteraction

+ (id)cancelSnippet;
+ (id)cancelSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
