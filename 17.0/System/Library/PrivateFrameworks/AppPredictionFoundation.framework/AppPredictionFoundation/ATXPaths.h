@interface ATXPaths : NSObject

+ (id)metricsRootDirectory;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)biomeStreamsRootDirectory;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)uiCachesRootDirectory;
+ (id)contextualActionsModelDirectory;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)onboardingStackResultCacheFilePath;
+ (id)bookmarksPathFile:(id)a0;
+ (id)appPredictionDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (void)createDataVault:(id)a0;
+ (id)scoreNormalizationModelDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)modeCachesRootDirectory;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (void)createDirectoriesIfNeeded;
+ (id)feedbackRootDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)widgetPredictionModelDirectory;
+ (id)clientModelCachesRootDirectory;
+ (id)posterDescriptorCacheFilePath;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)posterConfigurationCacheFilePath;

@end
