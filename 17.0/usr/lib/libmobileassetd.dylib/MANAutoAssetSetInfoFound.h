@class NSString, MANAutoAssetSetStatus;

@interface MANAutoAssetSetInfoFound : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetSetIdentifier;
@property (readonly, retain, nonatomic) MANAutoAssetSetStatus *currentSetStatus;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initForAssetSetIdentifier:(id)a0 reportingStatus:(id)a1;

@end
