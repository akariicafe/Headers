@interface MapsSuggestions.MapsSuggestionsContactActivityDeduper : MapsSuggestionsBaseDeduper

+ (BOOL)isEnabled;

- (id)init;
- (BOOL)dedupeByEnrichingEntry:(id)a0 withEntry:(id)a1;

@end
