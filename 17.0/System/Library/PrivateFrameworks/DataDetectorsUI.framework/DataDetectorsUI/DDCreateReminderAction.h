@interface DDCreateReminderAction : DDAction

+ (BOOL)isAvailable;

- (id)iconName;
- (id)localizedName;
- (int)interactionType;
- (BOOL)canBePerformedByOpeningURL;
- (void)prepareViewControllerForActionController:(id)a0;

@end
