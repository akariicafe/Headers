@class NSString, SFCommand, CSSuggestion;

@interface SPSearchCommandEntity : SPSearchEntity {
    NSString *_symbolName;
    SFCommand *_performCommand;
    CSSuggestion *_searchModel;
}

+ (BOOL)supportsSecureCoding;

- (id)queryString;
- (id)command;
- (void)encodeWithCoder:(id)a0;
- (id)symbolName;
- (id)currentSearchString;
- (void).cxx_destruct;
- (void)updateSearchString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)spotlightQueryString;
- (id)initWithCommand:(id)a0 fromSuggestion:(BOOL)a1;
- (id)initWithSpotlightSuggestion:(id)a0 symbolName:(id)a1 fromSuggestion:(BOOL)a2;
- (BOOL)isCommandEntitySearch;
- (BOOL)isPhotosEntitySearch;
- (BOOL)isScopedSearch;
- (BOOL)isServerEntitySearch;
- (id)spotlightFilterQueries;

@end
