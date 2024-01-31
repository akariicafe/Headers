@interface CALNNotificationUtilities : NSObject

+ (void)createSentinelFileIfNeeded;
+ (BOOL)shouldBehaveAsRestart;
+ (id)_pathForSentinelFile;

@end
