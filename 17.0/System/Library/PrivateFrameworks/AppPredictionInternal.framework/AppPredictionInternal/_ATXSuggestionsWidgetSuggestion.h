@interface _ATXSuggestionsWidgetSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (id)initForPreviewOfSize:(unsigned long long)a0 hyperParameters:(id)a1;
- (BOOL)addSuggestion:(id)a0 asMainSuggestion:(BOOL)a1 dryRun:(BOOL)a2;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionLayout:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (BOOL)containsIdenticalContentOfSuggestion:(id)a0;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionDeduplicator:(id)a2 hyperParameters:(id)a3;

@end
