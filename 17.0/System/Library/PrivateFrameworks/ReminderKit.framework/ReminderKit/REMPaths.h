@interface REMPaths : NSObject

+ (id)attributesForGroupContainerDirectory;
+ (id)legacy_applicationDocumentsURL;
+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (id)legacy_centralizedDataPath;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)dataSeparationEnabled_applicationDocumentsURL;

@end
