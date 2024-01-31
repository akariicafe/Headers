@class NSMutableDictionary;

@interface ATXHomeScreenLogWidgetRotationDictionaries : NSObject {
    NSMutableDictionary *_widgetRotationDictionaries;
}

+ (id)_sourceKeyForWidgetRotationForRotationSession:(id)a0;
+ (id)_sourceKeyOfNonProactiveWidgetRotationForReason:(id)a0;
+ (id)_suggestionReasonToWidgetRotationDictionariesSourceKey:(int)a0;
+ (id)widgetRotationDictionaryAccumulatorKeys;

- (id)init;
- (void).cxx_destruct;
- (void)sendToCoreAnalytics;
- (id)_createNewWidgetRotationDictionaryForBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2 source:(id)a3 location:(id)a4 isNPlusOne:(BOOL)a5 isFirstRotationToNPlusOne:(BOOL)a6;
- (id)_widgetRotationDictionaryForWidgetBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2 source:(id)a3 location:(id)a4 isNPlusOne:(BOOL)a5 isFirstRotationToNPlusOne:(BOOL)a6;
- (id)_widgetRotationDictionaryKeyWithWidgetId:(id)a0 widgetKind:(id)a1 widgetSize:(unsigned long long)a2 source:(id)a3 location:(id)a4 isNPlusOne:(BOOL)a5 isFirstRotationToNPlusOne:(BOOL)a6;
- (id)dryRunResult;
- (void)updateWithRotationSession:(id)a0;

@end
