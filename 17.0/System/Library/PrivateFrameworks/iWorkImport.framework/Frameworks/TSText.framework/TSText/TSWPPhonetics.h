@class NSDictionary;

@interface TSWPPhonetics : NSObject {
    NSDictionary *_transcribers;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedDictionary;
+ (id)_singletonAlloc;
+ (id)orderedTranscriberIDsForLanguage:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pronunciationSuggestionsForBaseText:(id)a0 locale:(id)a1 language:(int)a2;
- (id)transcriberForBaseText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 documentLocale:(id)a2 outLanguageLocale:(id *)a3 outTextLanguageCode:(int *)a4;
- (id)transcriberWithIdentifier:(id)a0;

@end
