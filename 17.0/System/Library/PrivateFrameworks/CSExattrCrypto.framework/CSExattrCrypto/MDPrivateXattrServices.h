@interface MDPrivateXattrServices : NSObject

+ (id)defaultServices;

- (void)_restoreAttributesFromDictionary:(id)a0 intoDictionary:(id)a1;
- (void)_restoreAttributesFromPlistBytes:(id)a0 intoDictionary:(id)a1;
- (id)copyPrivateXattrsDictionary:(id)a0 cryptoCallback:(id /* block */)a1;
- (id)copyPrivateXattrsFromData:(id)a0;
- (id)copyPrivateXattrsFromData:(id)a0 decryptedXids:(id *)a1;
- (id)decryptDataArrayWithCryptoCallback:(id /* block */)a0 dataArray:(id)a1 existingXIDArray:(id)a2 uuids:(id)a3 xpc_uuids:(id)a4 xids:(id)a5;
- (id)decryptDataArrayWithCryptoCallback:(id /* block */)a0 dataArray:(id)a1 existingXIDArray:(id)a2 uuids:(id)a3 xpc_uuids:(id)a4 xids:(id)a5 decrypted:(id *)a6;
- (void)digestUUIDBytesWithKey:(id)a0 forUUID:(id)a1 uuidBytes:(unsigned char[16])a2;
- (void)digestUUIDBytesWithKey:(id)a0 forXPCUUID:(id)a1 uuidBytes:(unsigned char[16])a2;
- (void)extractDecryptedDataWith:(id)a0 cryptoCallback:(id /* block */)a1 decryptableXids:(id)a2 intoDict:(id)a3 keyRing:(id)a4 xid:(id)a5;
- (void)updatePrivateXattrParams:(id)a0 flags:(unsigned long long)a1 forFileDescriptor:(int)a2;
- (void)updatePrivateXattrParams:(id)a0 flags:(unsigned long long)a1 forFileDescriptor:(int)a2 completionHandler:(id /* block */)a3;
- (void)updatePrivateXattrParams:(id)a0 flags:(unsigned long long)a1 forFileDescriptor:(int)a2 mergeCallback:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)xidDictWithUUIDs:(id)a0 allKeyUUIDs:(id)a1;
- (id)xidDictWithUUIDs:(id)a0 fromKeyRing:(id)a1;
- (id)xidDictWithXPCUUIDs:(id)a0 allKeyUUIDs:(id)a1;

@end
