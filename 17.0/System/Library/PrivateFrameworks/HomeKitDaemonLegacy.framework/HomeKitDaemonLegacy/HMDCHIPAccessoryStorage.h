@class NSSet, NSDictionary, NSData, NSNumber;

@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *nodeID;
@property (copy) NSNumber *vendorID;
@property (copy) NSNumber *productID;
@property (copy) NSData *attributeDatabase;
@property (copy) NSSet *pairings;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;

+ (id)logCategory;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateAccessoryModel:(id)a0;
- (BOOL)updateUsingAccessoryModel:(id)a0;

@end
