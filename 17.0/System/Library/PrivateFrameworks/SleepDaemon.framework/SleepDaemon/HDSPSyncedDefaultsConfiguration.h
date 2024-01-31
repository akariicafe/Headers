@class NSArray, NSSet, NSDictionary, HDSPSyncedDefaultsInfo;

@interface HDSPSyncedDefaultsConfiguration : NSObject {
    NSDictionary *_keySetMap;
}

@property (readonly, nonatomic) HDSPSyncedDefaultsInfo *info;
@property (readonly, nonatomic) NSArray *keySets;
@property (readonly, nonatomic) NSSet *allKeysToPersist;
@property (readonly, nonatomic) NSSet *allKeysToSync;
@property (readonly, nonatomic) NSSet *allPerGizmoKeys;
@property (readonly, nonatomic) NSDictionary *allDefaultValues;

- (id)initWithInfo:(id)a0 keySets:(id)a1;
- (id)keySetForIdentifier:(id)a0;
- (id)filteredKeySetsWithKeysToSync:(id)a0;
- (id)_keySetForKey:(id)a0;
- (id)_accumulateKeysWithBlock:(id /* block */)a0 includeVersionInfo:(BOOL)a1 isForSync:(BOOL)a2;
- (id)_createKeySetMapForKeySets:(id)a0;
- (BOOL)shouldSyncKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldPersistKey:(id)a0;

@end
