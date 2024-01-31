@class SAUIAppPunchOut;

@interface SAUIAttributionSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *appPunchOut;
@property (nonatomic) BOOL showKeyLine;

+ (id)attributionSnippetWithDictionary:(id)a0 context:(id)a1;
+ (id)attributionSnippet;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
