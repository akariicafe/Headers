@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (id)mainPluginManager;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)a0;
- (void).cxx_destruct;
- (id)pluginManagerForBundle:(id)a0;

@end
