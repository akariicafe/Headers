@class NSUUID, NSString, MTSDevicePairingEcosystem, NSArray, NSNumber;

@interface MTSDevicePairingFabric : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSNumber *index;
@property (readonly, copy) NSString *displayName;
@property (readonly, copy) MTSDevicePairingEcosystem *ecosystem;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)UUIDFromIdentifier:(id)a0 ecosystem:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 ecosystem:(id)a2;
- (id)initWithIdentifier:(id)a0 index:(id)a1 displayName:(id)a2 ecosystem:(id)a3;

@end
