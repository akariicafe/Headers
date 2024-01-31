@class NSDictionary;

@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSDictionary *allAvailableForStagingAttributes;
@property (readonly, nonatomic) unsigned long long totalExpectedBytes;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailableForStaging:(id)a0 withTotalExpectedBytes:(unsigned long long)a1;

@end
