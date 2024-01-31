@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {
    id _accountUpdateObserver;
    NSString *_dsid;
    struct RetainPtr<_PCSIdentitySetData *> { void *m_ptr; } _pcsIdentitySet;
    struct RetainPtr<_OpaquePCSShareProtection *> { void *m_ptr; } _pcsShareProtection;
    struct RetainPtr<const __CFData *> { void *m_ptr; } _serializedPCSObject;
}

@property (readonly, nonatomic) NSUbiquitousKeyValueStore *backingStore;

+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:(id)a0;

- (void)_setObject:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (int)_currentPCSConfiguration;
- (id)_objectForKey:(id)a0 ofClass:(Class)a1;
- (id)initWithStore:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void)removeObjectForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)dictionaryRepresentation;
- (void)synchronize;
- (id)encryptPropertyList:(id)a0;
- (id)_dsidForPrimaryAccount;
- (id)decryptEntry:(id)a0;

@end
