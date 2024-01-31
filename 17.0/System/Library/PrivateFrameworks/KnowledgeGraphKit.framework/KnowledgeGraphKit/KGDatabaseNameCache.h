@class NSMutableDictionary;

@interface KGDatabaseNameCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _loaded;
    NSMutableDictionary *_labelIdByName;
    NSMutableDictionary *_labelNameById;
    NSMutableDictionary *_attrIdByPropertyName;
    NSMutableDictionary *_propertyNameByAttrId;
    unsigned long long _highestLabelId;
    unsigned long long _highestAttrId;
    unsigned long long _useCount;
    BOOL _readOnly;
    BOOL _loadedInThisTransaction;
}

- (id)init;
- (void)addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)_addLabelName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (id)labelNameForIdentifier:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (void)setWritable;
- (void)transactionEnd;
- (id)labelIdentifierForName:(id)a0 database:(id)a1;
- (id)propertyNameForIdentifier:(id)a0 database:(id)a1;
- (void)_loadCacheIfNeeded:(id)a0;
- (void)_addPropertyName:(id)a0 identifier:(id)a1 database:(id)a2;
- (void)unloadCache;
- (id)attrIdentifierForPropertyName:(id)a0 database:(id)a1;

@end
