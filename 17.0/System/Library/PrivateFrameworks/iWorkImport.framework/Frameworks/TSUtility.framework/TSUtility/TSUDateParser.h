@class NSMutableArray, TSULocale;

@interface TSUDateParser : NSObject {
    NSMutableArray *_formatCategories;
    TSULocale *_locale;
    BOOL _isJapaneseLocale;
    struct __CFDateFormatter { } *_specialCaseFormatter;
}

- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)newDateFromString:(id)a0 preferredFormatString:(id)a1 successfulFormatString:(id *)a2 tryAggressiveFormats:(BOOL)a3;
- (id)newDateFromString:(id)a0 successfulFormatString:(id *)a1;
- (struct __CFDateFormatter { } *)specialCaseDateFormatterForLocale:(id)a0;
- (id)formatStringsDictionary;
- (void)p_addFormat:(id)a0 locale:(id)a1 formatCategoryMap:(id)a2;
- (id)p_initialPatternParsingFormat:(id)a0 separator:(unsigned short *)a1;
- (void)_commonInitWithLocale:(id)a0;
- (id)allFormats;
- (id)initWithLocale:(id)a0 usingLimitedFormats:(id)a1;
- (id)p_newDateFromStringTryingFormats:(id)a0 locale:(id)a1 formats:(id)a2 outSuccessfulFormatString:(id *)a3 perfect:(BOOL *)a4;

@end
