@class NSDictionary;

@interface EMFQueryResultOverrideList : NSObject {
    NSDictionary *_overrideMap;
}

- (void).cxx_destruct;
- (id)_metadataForString:(id)a0;
- (id)_overriddenResultsRawStringExactMatchForQuery:(id)a0;
- (id)_overriddenResultsRawStringExactMatchForRawString:(id)a0 andSearchType:(unsigned long long)a1;
- (id)_overriddenResultsRawStringPrefixMatchForQuery:(id)a0;
- (id)_overriddenResultsTokenExactMatchForQuery:(id)a0;
- (id)_overriddenResultsTokenPrefixMatchForQuery:(id)a0;
- (id)initWithOverrideListURL:(id)a0;
- (id)overriddenResultsForQuery:(id)a0;
- (id)overriddenResultsForQuery:(id)a0 searchType:(unsigned long long)a1;

@end
