@class NSMutableSet;

@interface DYPluginLoader : NSObject {
    NSMutableSet *_loadedPluginNames;
    BOOL _loading;
}

+ (id)getLoadedPluginNames;
+ (id)loadGPUToolsPlugins;
+ (id)loadGPUToolsPluginsInMainBundleOnly:(BOOL)a0;
+ (BOOL)loadPluginWithBundle:(id)a0;
+ (id)loadPluginsInDirectory:(id)a0 pathExtension:(id)a1;
+ (id)loadPluginsInDirectory:(id)a0 pathExtension:(id)a1 matchingRegex:(id)a2;
+ (id)loadPluginsWithProvider:(id)a0 pathExtension:(id)a1;
+ (id)loadPluginsWithProvider:(id)a0 pathExtension:(id)a1 matchingRegex:(id)a2;
+ (id)sharedPluginLoader;

- (id)init;
- (void)dealloc;
- (BOOL)_loadBundle:(id)a0;
- (id)_loadPluginsInDirectory:(id)a0 pathExtension:(id)a1 matchingRegex:(id)a2;
- (id)_loadPluginsWithProvider:(id)a0 pathExtension:(id)a1;
- (id)_loadPluginsWithProvider:(id)a0 pathExtension:(id)a1 matchingRegex:(id)a2;

@end
