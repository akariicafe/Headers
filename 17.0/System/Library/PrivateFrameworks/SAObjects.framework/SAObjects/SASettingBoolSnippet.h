@class NSNumber;

@interface SASettingBoolSnippet : SASettingSnippet

@property (nonatomic) BOOL toggle;
@property (copy, nonatomic) NSNumber *value;

+ (id)boolSnippet;
+ (id)boolSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
