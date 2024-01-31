@class NSString, NSMutableArray;

@interface MADAutoAssetLookupGrant : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *holderJobUUID;
@property (retain, nonatomic) NSMutableArray *awaitingExclusiveGrant;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initForAssetType:(id)a0;
- (id)initWithCoder:(id)a0;

@end
