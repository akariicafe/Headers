@interface HUEnergyAnalytics : NSObject

+ (void)sendEnergyWindowsToUTFFromData:(id)a0;
+ (unsigned long long)getUTFAnalyticsEventTypeFrom:(unsigned long long)a0;
+ (void)saveTapEvent:(unsigned long long)a0 withInteractionType:(unsigned long long)a1;
+ (void)saveViewAccessedFromURLEvent:(unsigned long long)a0 deepLinkFrom:(id)a1;
+ (void)saveViewDurationEvent:(unsigned long long)a0 withDuration:(id)a1;
+ (void)saveViewDurationEvent:(unsigned long long)a0 withDuration:(id)a1 withUserHasAccessories:(BOOL)a2;
+ (void)saveViewVisitEvent:(unsigned long long)a0;
+ (void)saveViewVisitEvent:(unsigned long long)a0 withData:(id)a1;
+ (void)saveViewVisitEvent:(unsigned long long)a0 withState:(unsigned long long)a1;
+ (void)saveWidgetSettingsEvent:(unsigned long long)a0 withLocation:(unsigned long long)a1;
+ (void)sendToUTFWithData:(id)a0 withSubsystem:(id)a1 withCategory:(id)a2;

@end
