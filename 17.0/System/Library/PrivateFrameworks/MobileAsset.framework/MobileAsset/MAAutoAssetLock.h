@class MAAutoAssetSelector, NSDictionary, NSURL, NSMutableDictionary;

@interface MAAutoAssetLock : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (readonly, retain, nonatomic) NSURL *localContentURL;
@property (readonly, retain, nonatomic) NSDictionary *assetAttributes;
@property (nonatomic) BOOL inhibitedFromEmergencyRemoval;
@property (retain, nonatomic) NSMutableDictionary *lockReasons;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initForSelector:(id)a0 withLocalContentURL:(id)a1 withAssetAttributes:(id)a2;
- (id)initWithCoder:(id)a0;

@end
