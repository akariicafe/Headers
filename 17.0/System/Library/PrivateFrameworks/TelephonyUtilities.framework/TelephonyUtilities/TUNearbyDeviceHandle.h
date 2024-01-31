@class NSDictionary, NSString, TUNearbyDeviceHandleCapabilities;

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType;
@property (readonly, nonatomic) NSDictionary *plistRepresentation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long deviceModel;
@property (readonly, nonatomic) TUNearbyDeviceHandleCapabilities *capabilities;

- (unsigned long long)hash;
- (BOOL)isEquivalentToDeviceHandle:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)identifierWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2 capabilities:(id)a3;
- (id)description;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2 capabilities:(id)a3;
- (BOOL)isEqualToDeviceHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2;
- (id)identifierDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1;

@end
