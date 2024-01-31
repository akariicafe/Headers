@class NSString, NSMutableDictionary;

@interface NWStatsEntityMapperProcessWatcher : NWStatsEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (id)init;
- (id)stateDictionary;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)_uuidProcessNameMapPrune;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;
- (void).cxx_destruct;

@end
