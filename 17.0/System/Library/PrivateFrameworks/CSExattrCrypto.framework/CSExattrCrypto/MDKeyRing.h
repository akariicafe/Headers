@class NSUUID, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MDKeyRing : NSObject <MDKeyRing> {
    NSUUID *_designatedKeyUUID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *keysByUUID;

+ (void)initialize;
+ (id)defaultKeyRing;

- (id)init;
- (void)dealloc;
- (id)dictionaryToSecItemFormat:(id)a0;
- (id)secItemFormatToDictionary:(id)a0;
- (struct __SecKey { } *)getKey:(id)a0;
- (struct __CFUUID { } *)_createKeyUUIDWithAccount:(id)a0 password:(id)a1;
- (id)allKeyUUIDs;
- (id)copyDecryptedData:(id)a0 withKeyUUID:(id)a1 iv1:(unsigned int)a2 iv2:(unsigned int)a3;
- (id)copyDesignatedKeyUUID;
- (id)copyEncryptedData:(id)a0 withKeyUUID:(id)a1 iv1:(unsigned int)a2 iv2:(unsigned int)a3;
- (id)copyPrivateKeyQuery:(id)a0;
- (id)copyRandomPassword;
- (BOOL)createKeychainItemForKey:(id)a0;
- (id)createRandomAESKey;
- (id)createRandomUUID;
- (id)fetchKeyFromKeychain:(id)a0;
- (int)restoreFromExistingKey:(id)a0;
- (void)scheduleAccessToKey:(struct __CFUUID { } *)a0 onQueue:(id)a1 usingBlock:(id /* block */)a2;
- (void)writeToKeychain:(id)a0;

@end
