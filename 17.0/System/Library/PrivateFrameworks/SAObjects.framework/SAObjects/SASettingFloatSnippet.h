@class NSNumber;

@interface SASettingFloatSnippet : SASettingNumericSnippet

@property (copy, nonatomic) NSNumber *value;

+ (id)floatSnippet;
+ (id)floatSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
