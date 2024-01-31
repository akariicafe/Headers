@interface CloudTabServices : NSObject

+ (id)_serverConnection;
+ (void)clearTabsForCurrentDevice;
+ (void)clearAllCloudTabDevices;
+ (void)didToggleCloudTabs:(BOOL)a0;
+ (void)didToggleCloudTabs:(BOOL)a0 terminateAfterUpdating:(BOOL)a1;

@end
