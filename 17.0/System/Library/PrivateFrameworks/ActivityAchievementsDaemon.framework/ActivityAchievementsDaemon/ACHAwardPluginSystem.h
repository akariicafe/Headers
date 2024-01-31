@class NSArray;

@interface ACHAwardPluginSystem : NSObject {
    NSArray *_plugins;
    NSArray *_progressProviders;
}

- (id)init;
- (id)createProgressProviders;
- (id)_pluginDirectoryPath;
- (id)_createPluginsFromClasses:(id)a0;
- (id)createTemplateAssetSources;
- (id)_loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtPath:(id)a1 error:(id *)a2;
- (Class)_loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtPath:(id)a1;
- (void).cxx_destruct;
- (id)_pluginClasses;
- (void)_loadPlugins;
- (id)_principalClassProtocols;

@end
