@interface DDOpenMapsAction : DDAction

+ (BOOL)actionAvailableForCachedEvent:(id)a0;
+ (BOOL)actionAvailableForContact:(id)a0;

- (id)iconName;
- (id)localizedName;
- (id)notificationURL;
- (id)notificationTitle;
- (id)variantIconName;
- (BOOL)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;

@end
