@class NSArray;

@interface SAClockSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *clocks;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
