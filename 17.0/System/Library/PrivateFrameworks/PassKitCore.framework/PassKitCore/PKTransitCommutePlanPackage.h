@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *transitCommutePlans;
@property (retain, nonatomic) NSMutableDictionary *commutePlanLookupDictionary;
@property (nonatomic) unsigned long long transitCommutePlanType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 backFieldBuckets:(id)a1 bundle:(id)a2 privateBundle:(id)a3 passType:(unsigned long long)a4;
- (id)planForIdentifier:(id)a0;

@end
