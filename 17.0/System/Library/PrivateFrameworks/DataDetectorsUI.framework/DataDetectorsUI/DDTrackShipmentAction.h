@interface DDTrackShipmentAction : DDAction

- (id)iconName;
- (id)localizedName;
- (id)notificationURL;
- (id)notificationTitle;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (void)performFromView:(id)a0;
- (id)quickActionTitle;

@end
