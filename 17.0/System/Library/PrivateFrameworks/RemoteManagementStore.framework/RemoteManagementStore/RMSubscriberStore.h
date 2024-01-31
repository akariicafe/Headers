@interface RMSubscriberStore : RMBaseStore <NSSecureCoding, RMAssetResolverProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)unassignAssets:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)storesWithScope:(long long)a0 completionHandler:(id /* block */)a1;
+ (void)storeWithIdentifier:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
+ (void)subscribedStoreConfigurationsMissingUIWithScope:(long long)a0 configurationTypes:(id)a1 completionHandler:(id /* block */)a2;
+ (void)subscribedStoreDeclarationsWithScope:(long long)a0 configurationTypes:(id)a1 completionHandler:(id /* block */)a2;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToStore:(id)a0;
- (void)resolveAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeStatusForDeclarationIdentifier:(id)a0 declarationServerToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)_writeStatusForDeclaration:(id)a0 validity:(BOOL)a1 reasons:(id)a2 completionHandler:(id /* block */)a3;
- (void)assetCannotBeDeserialized:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)assetCannotBeDownloaded:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)assetCannotBeVerified:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)assetEncounteredInternalError:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)assetSuccessfullyResolved:(id)a0 completionHandler:(id /* block */)a1;
- (void)certificatePersistentRefForAssetKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)certificateStatusWithCompletionHandler:(id /* block */)a0;
- (void)configurationCannotBeDeserialized:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationErrorReasons:(id)a0 reasons:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationFailedAlreadyPresent:(id)a0 completionHandler:(id /* block */)a1;
- (void)configurationFailedToApply:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationIsInvalid:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationNotSupported:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationRemovedWithDeclarationIdentifier:(id)a0 declarationServerToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)configurationSuccessfullyApplied:(id)a0 completionHandler:(id /* block */)a1;
- (void)configurationSuccessfullyApplied:(id)a0 reasons:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isValidStatusItem:(Class)a0;
- (void)publishStatus:(id)a0 completionHandler:(id /* block */)a1;
- (void)setConfigurationUI:(id)a0 visible:(BOOL)a1 ui:(id)a2 completionHandler:(id /* block */)a3;

@end
