@interface CHProcessHandle : BSProcessHandle

@property (readonly) BOOL hasDataStoreReadOnlyEntitlement;
@property (readonly) BOOL hasDataStoreReadWriteEntitlement;
@property (readonly) BOOL hasDataVaultEntitlement;

+ (id)processHandle;

@end
