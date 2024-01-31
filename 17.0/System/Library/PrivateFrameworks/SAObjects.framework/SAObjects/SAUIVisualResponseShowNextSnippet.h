@class SAUIVisualResponseSnippet;

@interface SAUIVisualResponseShowNextSnippet : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIVisualResponseSnippet *visualResponse;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
