@class NSString, MAAutoAssetSelector, NSURL, NSDictionary;

@interface MAAutoAssetSetAtomicEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSString *assetID;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFullAssetSelector:(id)a0 withAssetID:(id)a1 withLocalContentURL:(id)a2 withAssetAttributes:(id)a3 inhibitedFromEmergencyRemoval:(BOOL)a4;

@end
