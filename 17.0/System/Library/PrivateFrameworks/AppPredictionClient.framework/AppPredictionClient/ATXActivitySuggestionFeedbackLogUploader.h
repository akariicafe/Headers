@interface ATXActivitySuggestionFeedbackLogUploader : NSObject

+ (id)_arrayToStringOfClasses:(id)a0;
+ (id)_generateCADictionaryForEvent:(id)a0;
+ (void)sendActivitySuggestionEventToCoreAnalytics:(id)a0;

@end
