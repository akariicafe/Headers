@interface HKPluginLoader : NSObject

+ (Class)loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtURL:(id)a1 skipIfLoaded:(BOOL)a2;
+ (id)loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtURL:(id)a1 skipLoadedBundles:(BOOL)a2 error:(id *)a3;

@end
