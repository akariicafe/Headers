@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ACDKeychainItem : NSObject {
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
}

@property (readonly, nonatomic) struct __CFData { } *persistentRef;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *accessibility;
@property (nonatomic) BOOL synchronizable;
@property (readonly, nonatomic) BOOL useDataProtectionKeychain;
@property (readonly, nonatomic) BOOL hasCustomAccessControl;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long version;

+ (id)new;

- (BOOL)save:(id *)a0;
- (void)reload;
- (void)_markPropertyDirty:(id)a0;
- (id)init;
- (void)dealloc;
- (id)_modifiedProperties;
- (id)_metadataWithError:(id *)a0;
- (id)description;
- (void)migrateToKeyBagFromLegacy;
- (BOOL)_setMetadata:(id)a0 withError:(id *)a1;
- (void)_clearDirtyProperties;
- (void).cxx_destruct;
- (void)_reloadProperties;
- (id)debugDescription;
- (id)initWithPersistentRef:(struct __CFData { } *)a0;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (id)initWithPersistentRef:(struct __CFData { } *)a0 properties:(id)a1;

@end
