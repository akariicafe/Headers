@class NSData;

@interface DCAsset : NSObject

@property (nonatomic) unsigned long long version;
@property (nonatomic) double publicKeyRefreshInterval;
@property (copy, nonatomic) NSData *publicKey;

+ (id)assetWithMobileAsset:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
