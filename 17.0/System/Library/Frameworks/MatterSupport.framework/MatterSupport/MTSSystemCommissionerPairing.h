@class MTRSetupPayload, NSUUID, NSString, NSArray, NSNumber;

@interface MTSSystemCommissionerPairing : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSNumber *nodeID;
@property (readonly, copy) NSNumber *vendorID;
@property (readonly, copy) NSNumber *productID;
@property (readonly, copy) NSNumber *deviceType;
@property (readonly, copy) NSString *serialNumber;
@property (readonly, copy) NSString *name;
@property (readonly) MTRSetupPayload *setupPayload;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 nodeID:(id)a1 vendorID:(id)a2 productID:(id)a3 deviceType:(id)a4 serialNumber:(id)a5 name:(id)a6 setupPayload:(id)a7;

@end
