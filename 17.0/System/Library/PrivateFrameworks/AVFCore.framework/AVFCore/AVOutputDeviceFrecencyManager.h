@interface AVOutputDeviceFrecencyManager : NSObject

+ (double)frecencyScoreForDeviceID:(id)a0;
+ (id)_frecentsWriter;
+ (id)_frecentsContainerPath;
+ (id)_frecentsFilePath;
+ (void)updateFrecencyListForDeviceID:(id)a0;
+ (id)_applicationSupportPath;
+ (id)_frecentsReaderAfterMigrationIfNecessary;
+ (BOOL)_migrateFrecentsFromCFPreferencesToFrecentsFilePath:(id)a0;

@end
