@interface ATXNewsTodayWidgetPlacementPolicyProvider : NSObject

+ (id)_parsecEditorialLocales;
+ (id)_newsSupportedCountries;

- (BOOL)isTodayWidgetPermittedForLocale:(id)a0;

@end
