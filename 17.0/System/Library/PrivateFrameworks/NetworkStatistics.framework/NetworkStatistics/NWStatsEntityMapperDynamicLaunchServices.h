@class NWStatsEntityMapCache;

@interface NWStatsEntityMapperDynamicLaunchServices : NWStatsEntityMapperNEHelper {
    NWStatsEntityMapCache *_entityMap;
    void *_coreServicesDylibHandle;
    Class _LSPlugInKitProxyClass;
    Class _LSApplicationWorkspaceClass;
    Class _LSApplicationProxyClass;
}

- (id)init;
- (void)dealloc;
- (id)stateDictionary;
- (id)handleNewUUID:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;
- (id)extensionNameForUUID:(id)a0;

@end
