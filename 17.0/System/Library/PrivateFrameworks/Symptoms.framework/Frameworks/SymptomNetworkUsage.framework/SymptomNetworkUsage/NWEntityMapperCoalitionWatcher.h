@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (id)init;
- (BOOL)noteUUID:(id)a0 forPid:(int)a1;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)_uuidCoalitionNameMapPrune;
- (void).cxx_destruct;

@end
