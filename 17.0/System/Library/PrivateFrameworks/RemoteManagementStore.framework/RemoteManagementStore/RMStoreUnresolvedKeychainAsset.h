@class NSString, RMStoreDeclarationKey;

@interface RMStoreUnresolvedKeychainAsset : RMStoreUnresolvedAsset

@property (readonly, copy, nonatomic) RMStoreDeclarationKey *assetKey;
@property (readonly, copy, nonatomic) RMStoreDeclarationKey *configurationKey;
@property (readonly, copy, nonatomic) NSString *keychainGroup;
@property (readonly, copy, nonatomic) NSString *keychainDefaultAccessibility;
@property (readonly, nonatomic) BOOL useSystemKeychain;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAsset:(id)a0 assetKey:(id)a1 configurationKey:(id)a2 group:(id)a3 defaultAccessibility:(id)a4;
- (BOOL)isEqualToUnresolvedKeychainAsset:(id)a0;

@end
