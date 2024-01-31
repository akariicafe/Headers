@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *iphone;
@property (readonly, nonatomic) NSString *ipad;
@property (readonly, nonatomic) NSString *ipod;
@property (readonly, nonatomic) NSString *appletv;
@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) NSString *watch;
@property (readonly, nonatomic) NSString *vision;
@property (readonly, nonatomic) NSString *specifiediphone;

+ (id)fromDeviceVersion;

- (unsigned long long)hash;
- (id)asDictionary;
- (BOOL)isEqualToOSVersionRequirement:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0 deviceClass:(id)a1;
- (id)versionForDeviceClass:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
