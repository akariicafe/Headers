@class NSString;

@interface RKNLEventTokenizer : NSObject

@property struct __CFStringTokenizer { } *tokenizer;
@property (readonly) NSString *languageID;

+ (void)initialize;
+ (BOOL)isSpecialToken:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)transform:(id)a0;
- (id)buildTokenSquence:(id)a0 withOffset:(unsigned long long)a1;
- (id)getTokens:(id)a0;
- (BOOL)hasEmoticon:(id)a0;
- (id)initWithLanguageID:(id)a0;
- (id)processForEmoticons:(id)a0;
- (id)processForEmoticonsAndEmojis:(id)a0;
- (id)processForHyphenation:(id)a0;
- (id)tokenizeWithDataDetectors:(id)a0;

@end
