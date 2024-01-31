@interface _ATXAppPredictionPanelSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (id)initWithAppPredictionPanel:(id)a0 containingStack:(id)a1 suggestionDeduplicator:(id)a2 hyperParameters:(id)a3;
- (BOOL)addSuggestion:(id)a0 asMainSuggestion:(BOOL)a1 dryRun:(BOOL)a2;
- (id)initWithAppPredictionPanel:(id)a0 containingStack:(id)a1 suggestionLayout:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (id)initForPreviewWithHyperParameters:(id)a0;
- (BOOL)containsIdenticalContentOfSuggestion:(id)a0;

@end
