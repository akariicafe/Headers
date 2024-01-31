@interface AppPredictionInternal.ContextualEngineSuggestionStore : NSObject <ATXSuggestionModeFilterObserver> {
    void /* unknown type, empty encoding */ contextStore;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ actionToWidgetConverter;
    void /* unknown type, empty encoding */ modeFilter;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ disabledHeuristicSourceIdentifiers;
    void /* unknown type, empty encoding */ allowedAmbientClientModelTypes;
}

- (id)init;
- (void)configurationDidChangeForFilter:(id)a0;
- (void).cxx_destruct;

@end
