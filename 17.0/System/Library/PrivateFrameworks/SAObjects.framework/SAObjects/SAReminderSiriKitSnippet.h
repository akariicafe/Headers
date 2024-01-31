@class NSArray;

@interface SAReminderSiriKitSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *interactions;

+ (id)siriKitSnippet;
+ (id)siriKitSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
