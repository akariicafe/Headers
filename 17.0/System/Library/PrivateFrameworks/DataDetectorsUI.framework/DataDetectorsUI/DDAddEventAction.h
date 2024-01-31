@class DDRemoteActionViewController;

@interface DDAddEventAction : DDAction

@property (retain, nonatomic) DDRemoteActionViewController *viewController;

+ (BOOL)isAvailable;
+ (BOOL)actionAvailableForEvent:(id)a0;
+ (id)cachedEventForICSString:(id)a0;
+ (id)icsEventForICSString:(id)a0;

- (id)iconName;
- (void)invalidate;
- (id)localizedName;
- (void).cxx_destruct;
- (id)notificationURL;
- (int)interactionType;
- (id)notificationTitle;
- (id)variantIconName;
- (id)compactTitle;
- (id)eventStartDateFromCache;
- (id)eventTitleFromCache;
- (id)notificationIconBundleIdentifier;
- (void)prepareViewControllerForActionController:(id)a0;
- (id)quickActionTitle;

@end
