@interface SFSettingsAnalytics : NSObject

+ (void)trackingSettingsSearchUsed:(BOOL)a0 isUser65AgeOrOlder:(BOOL)a1 searchFromSpotlight:(BOOL)a2 searchActivityID:(id)a3;
+ (void)trackingControlValueChanged:(id)a0 sender:(id)a1;
+ (void)trackingSettingsSearchUsed:(BOOL)a0 isUser65AgeOrOlder:(BOOL)a1 numberOfSectionsInResults:(unsigned long long)a2 numberOfTotalResults:(unsigned long long)a3 searchFromSpotlight:(BOOL)a4 methodForEndingSearch:(unsigned long long)a5 searchResultURL:(id)a6 searchActivityID:(id)a7;
+ (void)trackingSettingsSearchUsed:(BOOL)a0 searchFromSpotlight:(BOOL)a1 methodForEndingSearch:(unsigned long long)a2 searchResultURL:(id)a3;
+ (void)trackingStateOfRequestForSpecificApp:(unsigned long long)a0 view:(id)a1;
+ (void)trackingSettingsSearchUsed:(BOOL)a0 numberOfSectionsInResults:(unsigned long long)a1 numberOfTotalResults:(unsigned long long)a2 searchFromSpotlight:(BOOL)a3 methodForEndingSearch:(unsigned long long)a4 searchActivityID:(id)a5;
+ (void)trackingViewControllersVisitedInRootController:(id)a0;
+ (void)trackingRecordAppActivityVisited;
+ (void)trackingStateOfRequest:(BOOL)a0 askAppsToStopTracking:(BOOL)a1;
+ (void)trackingViewVisited;
+ (void)trackingAppAccessTransparencyVisited:(id)a0;
+ (void)trackingSettingsOpenByURL:(BOOL)a0 url:(id)a1;
+ (void)trackingPerformSelector:(id)a0 targetString:(id)a1;
+ (void)trackingAppActivitySaved;

@end
