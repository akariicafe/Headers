@interface WFSharingSettings : NSObject

+ (BOOL)sharingEnabled;
+ (BOOL)isPrivateSharingEnabled;
+ (id)privateSharingDisabledAlertWithShortcutName:(id)a0;
+ (id)privateSharingDisabledErrorWithShortcutName:(id)a0;
+ (id)sharingDisabledAlertWithShortcutName:(id)a0;
+ (id)sharingDisabledAlertWithWorkflowName:(id)a0;
+ (id)shortcutFileSharingDisabledAlert;
+ (id)shortcutFileSharingDisabledError;
+ (BOOL)shortcutFileSharingEnabled;

@end
