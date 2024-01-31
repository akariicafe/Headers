@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)init;
- (void)reset;
- (void)removeUser:(unsigned int)a0;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)cachedComponents;
- (id)cachedUserComponents;
- (int)addGroupStatesFromBuffer:(id)a0;
- (void).cxx_destruct;
- (unsigned int)stateOfMasterComponent;
- (id)cachedGroupComponentsForUser:(unsigned int)a0;
- (unsigned int)stateOfComponent:(id)a0;

@end
