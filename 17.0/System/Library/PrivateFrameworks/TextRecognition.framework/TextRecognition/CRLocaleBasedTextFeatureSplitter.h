@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter

- (id)initWithConfiguration:(id)a0;
- (id)preferredLocales;
- (id)_preferredLocaleFromScriptLocales:(id)a0;
- (id)_topScriptCategoryBasedOnPreferredLocales:(id)a0;
- (void)enumerateIndicesForLineRegions:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateLineRegions:(id)a0 usingBlock:(id /* block */)a1;
- (void)preferredLocaleBasedScriptVoting:(id)a0;

@end
