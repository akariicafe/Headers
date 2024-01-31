@class NSString;

@interface DNDMeDeviceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long meDeviceStatus;
@property (readonly, copy, nonatomic) NSString *meDeviceName;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStatus:(unsigned long long)a0 name:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
