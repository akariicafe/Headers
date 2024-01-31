@class CNUnfairLock;

@interface CNStringTokenizer : NSObject

@property (readonly, nonatomic) struct __CFStringTokenizer { } *tokenizer;
@property (readonly, nonatomic) CNUnfairLock *lock;

+ (id)tokenizeString:(id)a0;
+ (id)adjustRanges:(id)a0 toIncludeNonBreakingCharactersInString:(id)a1;
+ (BOOL)isCharacterNonBreaking:(unsigned short)a0;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)rangesOfWordUnitTokensInString:(id)a0;
- (id)tokenizeString:(id)a0;
- (id)rangesOfWordTokensInString:(id)a0;

@end
