@interface _CDPaths : NSObject

+ (id)defaultSleepPath;
+ (id)monitorBundlePath;
+ (id)eventPlistPath;
+ (id)policiesConfigPath;
+ (id)bundlePathForResource:(id)a0 ofType:(id)a1;
+ (id)modelDirectory;
+ (id)knowledgeTestDirectory;
+ (id)systemCachesDirectory;
+ (id)userKnowledgeDirectory;
+ (id)defaultSessionPathForDataCollection;
+ (id)simulatorSystemPathFor:(id)a0 withEnvVar:(id)a1;
+ (id)knowledgeDirectory;
+ (id)simulatorSharedPathFor:(id)a0;
+ (id)bundleBuiltInPlugInsPath;
+ (id)DKKnowledgeTestDirectoryString;
+ (id)interactionTestDirectory;
+ (id)otaSleepPath;
+ (id)simulatorHomePathFor:(id)a0;
+ (id)peopleDirectory;
+ (id)interactionCopyDirectory;
+ (id)defaultDirectoryPathForDataCollection;

@end
