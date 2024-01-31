@class CSSuggestion;

@interface ICSearchSuggestionsContext : NSObject <NSCopying>

@property (class, readonly) BOOL supportsSearchSuggestions;

@property (retain, nonatomic) CSSuggestion *searchSuggestion;
@property (readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)changeScopeOfToken:(id)a0 toScopeAtIndex:(unsigned long long)a1;
- (id)initWithSearchSuggestion:(id)a0;
- (void)updateSearchSuggestion:(id)a0 interaction:(long long)a1;
- (void)updateTypedString:(id)a0 tokens:(id)a1;

@end
