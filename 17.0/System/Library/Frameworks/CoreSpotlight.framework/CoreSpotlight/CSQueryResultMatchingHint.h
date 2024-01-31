@class NSString, NSArray;

@interface CSQueryResultMatchingHint : NSObject

@property (readonly, copy) NSString *attribute;
@property (readonly, copy) NSArray *tokens;

+ (id)_snippetHintAttributeSet;
+ (id)randomTokensFromText:(id)a0 maxTokens:(unsigned long long)a1 maxTextLength:(unsigned long long)a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isValidAttributeForSnippetHint:(id)a0;
- (id)flattenedHints;
- (id)initWithAttribute:(id)a0 tokens:(id)a1;
- (id)initWithBackingHint:(id)a0;

@end
