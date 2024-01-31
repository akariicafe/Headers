@interface PLDiagnostics : NSObject

+ (id)diagnosticsURLs;
+ (id)logDirectoryURL;
+ (long long)_deviceClassesFromDeviceClassesString:(id)a0;
+ (void)_fallBackTapToRadarWithTitle:(id)a0 description:(id)a1 radarComponent:(long long)a2;
+ (id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)a0;
+ (void)_radarComponentDetailsForComponent:(long long)a0 reply:(id /* block */)a1;
+ (void)_tapToRadarKitDraftWithTitle:(id)a0 description:(id)a1 radarComponent:(long long)a2 displayReason:(id)a3;
+ (id)_tapToRadarProcessName;
+ (unsigned long long)addOSStateHandlerWithTitle:(id)a0 queue:(id)a1 propertyListHandler:(id /* block */)a2;
+ (void)collectMomentsStatWithLibraryContext:(id)a0 completionBlock:(id /* block */)a1;
+ (id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)a0;
+ (void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)a0 handler:(id /* block */)a1;
+ (id)excludingNameExpression;
+ (void)fileRadarUserNotificationWithHeader:(id)a0 message:(id)a1 radarTitle:(id)a2 radarDescription:(id)a3;
+ (void)fileRadarUserNotificationWithHeader:(id)a0 message:(id)a1 radarTitle:(id)a2 radarDescription:(id)a3 radarComponent:(long long)a4;
+ (id)matchingNameExpression;
+ (id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)a0;
+ (BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)a0 radarTitle:(id)a1;
+ (BOOL)tapToRadarKitDisabled;
+ (void)tapToRadarWithTitle:(id)a0 description:(id)a1 radarComponent:(long long)a2 displayReason:(id)a3;

@end
