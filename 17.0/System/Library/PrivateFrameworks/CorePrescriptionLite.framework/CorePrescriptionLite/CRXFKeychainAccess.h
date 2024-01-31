@class CRXUDispatchQueue, NSString, NSObject;
@protocol OS_os_log;

@interface CRXFKeychainAccess : NSObject {
    NSObject<OS_os_log> *_log;
    struct __CFDictionary { } *_createQuery;
    struct __CFDictionary { } *_addQuery;
    struct __CFDictionary { } *_findAllQuery;
    struct __CFDictionary { } *_deleteOrUpdateQuery;
    struct __CFString { } *_keyType;
    struct __CFNumber { } *_keySizeInBits;
    CRXUDispatchQueue *_queue;
    NSString *_deviceModel;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)createASAKeyWithError:(id *)a0;
- (id)createErrorForStatus:(int)a0 fromFunction:(id)a1;
- (BOOL)deleteASAKeyWithName:(id)a0 error:(id *)a1;
- (BOOL)deleteAllASAKeysWithError:(id *)a0;
- (id)derivePublicKeyFromPrivateKey:(id)a0 error:(id *)a1;
- (void)fetchASAKeysWithCompletion:(id /* block */)a0;
- (id)initWithDeviceModel:(id)a0;
- (id)insertASAKey:(id)a0 withName:(id)a1 error:(id *)a2;
- (id)prefixedNameForName:(id)a0;

@end
