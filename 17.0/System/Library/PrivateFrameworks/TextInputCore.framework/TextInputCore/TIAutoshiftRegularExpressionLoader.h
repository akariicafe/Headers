@class NSString, NSRegularExpression;

@interface TIAutoshiftRegularExpressionLoader : NSObject

@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) NSString *nextSentencePrefixCharacters;
@property (retain, nonatomic) NSRegularExpression *regex;

+ (id)loaderWithSentenceDelimiters:(id)a0 trailingChars:(id)a1 prefixChars:(id)a2;

- (id)initWithSentenceDelimiters:(id)a0 trailingChars:(id)a1 prefixChars:(id)a2;
- (void).cxx_destruct;
- (void)startBackgroundLoad;

@end
