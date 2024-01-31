@class SADomainObject;

@interface SAUISnippetObjectInteraction : SAUISnippetInteraction

@property (retain, nonatomic) SADomainObject *object;

+ (id)snippetObjectInteraction;
+ (id)snippetObjectInteractionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
