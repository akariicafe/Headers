@class NSString;

@interface VGChargingNetwork : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long globalBrandID;
@property (readonly, nonatomic) NSString *name;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChargingNetworkStorage:(id)a0;
- (id)initWithBrandInfoMapping:(id)a0;

@end
