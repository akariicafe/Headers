@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {
    NSArray *_schemes;
    unsigned long long _options;
    NSString *_string;
    id _orthographyArray;
    id _tokenArray;
    void *_reserved;
}

@property (readonly, copy) NSArray *tagSchemes;
@property (retain) NSString *string;
@property (readonly, copy) NSString *dominantLanguage;

+ (id)availableTagSchemesForLanguage:(id)a0;
+ (id)availableTagSchemesForUnit:(long long)a0 language:(id)a1;
+ (id)dominantLanguageForString:(id)a0;
+ (void)enumerateTagsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 unit:(long long)a2 scheme:(id)a3 options:(unsigned long long)a4 orthography:(id)a5 usingBlock:(id /* block */)a6;
+ (BOOL)supportsLanguage:(id)a0;
+ (id)tagForString:(id)a0 atIndex:(unsigned long long)a1 unit:(long long)a2 scheme:(id)a3 orthography:(id)a4 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a5;
+ (id)tagsForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 unit:(long long)a2 scheme:(id)a3 options:(unsigned long long)a4 orthography:(id)a5 tokenRanges:(id *)a6;

- (void)dealloc;
- (id)description;
- (BOOL)_acceptSentenceTerminatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokens:(struct _NSLTToken { unsigned short x0; unsigned char x1; unsigned char x2; unsigned int x3; union { void *x0; struct { unsigned char x0; unsigned char x1; } x1; } x4; } *)a2 count:(unsigned long long)a3 tokenIndex:(unsigned long long)a4;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_analyzeTokensInWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_detectOrthographyIfNeededAtIndex:(unsigned long long)a0;
- (void)_enumerateTagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 scheme:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)_nativeSetOrthography:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_sentenceRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_setOrthography:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_tagAtIndex:(unsigned long long)a0 scheme:(id)a1 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)_tagSchemeForScheme:(id)a0;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 requireLemmas:(BOOL)a2 requirePartsOfSpeech:(BOOL)a3 requireNamedEntities:(BOOL)a4;
- (id)_tokenDataForParagraphAtIndex:(unsigned long long)a0 paragraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 tagScheme:(id)a2;
- (id)_tokenDataForParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 requireLemmas:(BOOL)a1 requirePartsOfSpeech:(BOOL)a2 requireNamedEntities:(BOOL)a3;
- (void)_tokenizeParagraphAtIndex:(unsigned long long)a0 requireLemmas:(BOOL)a1 requirePartsOfSpeech:(BOOL)a2 requireNamedEntities:(BOOL)a3;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 scheme:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)enumerateTagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unit:(long long)a1 scheme:(id)a2 options:(unsigned long long)a3 usingBlock:(id /* block */)a4;
- (id)initWithTagSchemes:(id)a0 options:(unsigned long long)a1;
- (id)orthographyAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)possibleTagsAtIndex:(unsigned long long)a0 scheme:(id)a1 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 scores:(id *)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sentenceRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setOrthography:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)stringEditedInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 changeInLength:(long long)a1;
- (id)tagAtIndex:(unsigned long long)a0 scheme:(id)a1 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)tagAtIndex:(unsigned long long)a0 unit:(long long)a1 scheme:(id)a2 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (id)tagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 scheme:(id)a1 options:(unsigned long long)a2 tokenRanges:(id *)a3;
- (id)tagsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unit:(long long)a1 scheme:(id)a2 options:(unsigned long long)a3 tokenRanges:(id *)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeAtIndex:(unsigned long long)a0 unit:(long long)a1;

@end
