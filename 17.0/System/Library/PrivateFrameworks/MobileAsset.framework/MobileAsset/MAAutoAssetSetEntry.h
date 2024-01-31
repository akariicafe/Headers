@class MAAutoAssetSelector;

@interface MAAutoAssetSetEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (nonatomic) BOOL assetLockedInhibitsRemoval;

- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 assetLockedInhibitsRemoval:(BOOL)a2;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2 assetLockedInhibitsRemoval:(BOOL)a3;

@end
