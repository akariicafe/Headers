@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}

- (id)init;
- (id)stateDictionary;
- (id)handleNewUUID:(id)a0;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;

@end
