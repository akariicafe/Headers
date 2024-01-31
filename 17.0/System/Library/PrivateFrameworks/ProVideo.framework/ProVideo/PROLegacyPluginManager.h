@class NSString, NSMutableDictionary, NSMutableArray;

@interface PROLegacyPluginManager : NSObject <PROAPIAccessing> {
    NSMutableDictionary *_pluginRegistry;
    NSMutableArray *_pluginProtocols;
    NSMutableArray *_pluginSearchDirectories;
    struct __CFDictionary { } *_apiRegistry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginManager;

- (id)init;
- (void)dealloc;
- (id)apiForProtocol:(id)a0;
- (int)addPluginProtocol:(id)a0;
- (int)addPluginSearchDirectory:(id)a0;
- (int)getBundlePath:(id *)a0 forPluginClassName:(id)a1;
- (int)getNumPluginsForProtocol:(id)a0;
- (int)getPluginClass:(Class *)a0 forPluginClassName:(id)a1;
- (int)getPluginClass:(Class *)a0 forPluginDisplayName:(id)a1;
- (int)getPluginClass:(Class *)a0 forPluginDisplayName:(id)a1 forProtocol:(id)a2;
- (int)getPluginClassNames:(id)a0 forGroupName:(id)a1;
- (int)getPluginClassNames:(id)a0 forGroupName:(id)a1 forProtocol:(id)a2;
- (int)getPluginClassNames:(id)a0 forProtocol:(id)a1;
- (int)getPluginDisplayNames:(id)a0 forGroupName:(id)a1;
- (int)getPluginDisplayNames:(id)a0 forGroupName:(id)a1 forProtocol:(id)a2;
- (int)getPluginDisplayNames:(id)a0 forProtocol:(id)a1;
- (int)getPluginGroupNames:(id)a0;
- (int)getPluginGroupNames:(id)a0 forProtocol:(id)a1;
- (int)getPluginInfoDictionaries:(id)a0 forProtocol:(id)a1;
- (int)loadPluginClass:(Class *)a0 withName:(id)a1 fromBundlePath:(id)a2;
- (void)localizeKey:(id)a0 withDefault:(id)a1 forPlugin:(id)a2 fromBundle:(id)a3;
- (int)registerBundle:(id)a0 withPluginDictionaryList:(id)a1;
- (int)registerBundleDynamic:(id)a0;
- (int)registerPluginWithDictionary:(id)a0 withClassName:(id)a1 withBundle:(id)a2 withProtocolName:(id)a3;
- (int)removeApiForProtocol:(id)a0;
- (int)scanForPlugins;
- (int)scanForPluginsInDirectory:(id)a0;
- (int)setApiObject:(id)a0 forProtocol:(id)a1;
- (int)setApiObjects:(id)a0 forProtocols:(id)a1;
- (int)setPluginSearchDirectories:(id)a0;

@end
