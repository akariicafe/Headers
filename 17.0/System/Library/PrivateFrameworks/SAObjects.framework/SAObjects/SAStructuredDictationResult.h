@class NSArray;

@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *items;

+ (id)structuredDictationResult;
+ (id)structuredDictationResultWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
