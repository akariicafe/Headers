@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKDeviceVersionRange *iphone;
@property (readonly, nonatomic) PKDeviceVersionRange *watch;
@property (readonly, nonatomic) PKDeviceVersionRange *ipad;
@property (readonly, nonatomic) PKDeviceVersionRange *ipod;
@property (readonly, nonatomic) PKDeviceVersionRange *appletv;
@property (readonly, nonatomic) PKDeviceVersionRange *vision;

- (unsigned long long)hash;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToHardwareVersionRange:(id)a0;
- (BOOL)matchesDeviceVersion:(id)a0;

@end
