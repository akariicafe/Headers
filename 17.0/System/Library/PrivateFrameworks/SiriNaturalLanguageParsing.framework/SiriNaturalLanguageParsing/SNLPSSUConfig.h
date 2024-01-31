@interface SNLPSSUConfig : NSObject

+ (BOOL)isInternalInstall;
+ (id)loadAppShortcutAlwaysTriggeredAllowList;
+ (id)loadAppShortcutAlwaysTriggeredAllowListPlist;
+ (id)loadAppShortcutAlwaysTriggeredAllowListUserDefaults;
+ (id)loadPlistArrayFromURL:(id)a0;

@end
