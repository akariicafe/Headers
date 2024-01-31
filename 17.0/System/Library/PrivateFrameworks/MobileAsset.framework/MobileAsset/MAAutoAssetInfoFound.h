@class MAAutoAssetSelector, NSDictionary, NSURL, MAAutoAssetStatus;

@interface MAAutoAssetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (readonly, retain, nonatomic) MAAutoAssetStatus *currentStatus;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initForSelector:(id)a0 withLocalContentURL:(id)a1 withAssetAttributes:(id)a2 reportingStatus:(id)a3;
- (id)initWithCoder:(id)a0;

@end
