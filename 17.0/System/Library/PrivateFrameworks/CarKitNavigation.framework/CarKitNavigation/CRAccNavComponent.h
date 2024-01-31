@class NSUUID, NSString, ACCNavigationAccessoryComponent, NSNumber;

@interface CRAccNavComponent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, nonatomic) NSNumber *componentIdentifier;
@property (readonly, nonatomic) ACCNavigationAccessoryComponent *component;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessoryUID:(id)a0 component:(id)a1;
- (id)initWithUUID:(id)a0 accessoryUID:(id)a1 component:(id)a2;

@end
