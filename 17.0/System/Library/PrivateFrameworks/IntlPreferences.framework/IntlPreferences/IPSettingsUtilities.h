@interface IPSettingsUtilities : NSObject

+ (void)setRegion:(id)a0;
+ (void)setLanguage:(id)a0;
+ (void)mirrorToWatchIfNecessary;
+ (void)runPostLanguageChangeOperationsWithNotifications:(BOOL)a0;
+ (void)setLanguage:(id)a0 postNotification:(BOOL)a1;
+ (void)setLanguageAndRegion:(id)a0;
+ (void)setLanguageAndRegion:(id)a0 postNotification:(BOOL)a1;
+ (void)setRegion:(id)a0 changeLanguageVariant:(BOOL)a1 postNotification:(BOOL)a2;
+ (void)setRegion:(id)a0 postNotification:(BOOL)a1;
+ (void)writeLanguageAndLocaleConfigurationIfNeededWithCompletion:(id /* block */)a0;

@end
