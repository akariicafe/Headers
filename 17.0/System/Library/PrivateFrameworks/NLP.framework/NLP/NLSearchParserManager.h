@interface NLSearchParserManager : NSObject {
    void *_parser;
}

@property (class, readonly) NLSearchParserManager *defaultManager;

+ (id)availableLanguages;

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (id)tokenizeAndEnumerateAttributedParsesForQuery:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (id)initWithLocale:(id)a0 context:(id)a1 options:(id)a2;
- (void)enumerateAttributedParsesForQuery:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;
- (void)enumerateDateRangeAttributedParseForOptions:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateSearchSuggestions:(id)a0 options:(id)a1 withBlock:(id /* block */)a2;

@end
