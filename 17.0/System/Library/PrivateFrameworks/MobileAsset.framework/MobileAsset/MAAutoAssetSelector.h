@class NSString, NSData;

@interface MAAutoAssetSelector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSData *downloadDecryptionKey;

- (id)persistedEntryID;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)newSummaryDictionary;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3;
- (id)copy;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (id)copyClearingWriteOnlyFields;
- (BOOL)isEqual:(id)a0;
- (id)initForAssetType:(id)a0;
- (void)assignAssetVersion:(id)a0;
- (id)initWithCoder:(id)a0;

@end
