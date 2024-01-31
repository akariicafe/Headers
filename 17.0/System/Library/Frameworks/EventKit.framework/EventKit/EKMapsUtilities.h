@interface EKMapsUtilities : NSObject

+ (void)geocodeEventIfNeeded:(id)a0;
+ (id)mapsURLForLocation:(id)a0 onEvent:(id)a1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)a2;
+ (id)_locationStringForStructuredLocation:(id)a0 withTitle:(id)a1;

@end
