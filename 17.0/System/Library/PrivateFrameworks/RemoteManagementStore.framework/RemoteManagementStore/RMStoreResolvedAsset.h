@class NSData, NSURL, NSString;

@interface RMStoreResolvedAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *assetData;
@property (readonly, copy, nonatomic) NSURL *assetFile;
@property (readonly, copy, nonatomic) NSData *assetKeychainReference;
@property (readonly, copy, nonatomic) NSString *assetKeychainUserName;

- (id)initWithFile:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeychainReference:(id)a0;
- (id)initWithKeychainReference:(id)a0 userName:(id)a1;
- (BOOL)isEqualToResolvedAsset:(id)a0;

@end
