@class EMFEmojiSearchEngine, EMFAnchoredSearchManager, NSString, NSArray;

@interface EMFEmojiLocaleData : NSObject {
    BOOL _didTryLoadingSearchEngine;
}

@property (readonly, retain, nonatomic) EMFEmojiSearchEngine *searchEngine;
@property (readonly, retain, nonatomic) EMFAnchoredSearchManager *anchoredSearchManager;
@property (readonly, copy, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) struct __EmojiLocaleDataWrapper { } *emojiLocaleDataRef;
@property (readonly, copy, nonatomic) NSArray *emojiTokens;

+ (id)emojiLocaleDataWithLocaleIdentifier:(id)a0;
+ (id)emojiLocaleDataWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a0;

- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)a0;
- (id)emojiTokensForText:(id)a0 phoneticReading:(id)a1 options:(unsigned long long)a2 searchType:(int)a3 includePrefixMatches:(BOOL)a4;
- (void)enumerateAnchoredReplacementCandidatesForContext:(id)a0 withOptions:(unsigned int)a1 usingBlock:(id /* block */)a2;
- (id)_rawSearchEngineReference;
- (id)emojiTokensForOptions:(unsigned long long)a0 presentationStyle:(int)a1;
- (void)enumerateSearchResultsInText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 searchType:(int)a3 usingBlock:(id /* block */)a4;
- (id)initWithCEMEmojiLocaleData:(struct __EmojiLocaleDataWrapper { } *)a0;
- (void)preheatSearchEngine;

@end
