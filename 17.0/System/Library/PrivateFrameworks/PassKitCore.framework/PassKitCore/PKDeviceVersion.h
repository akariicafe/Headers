@class NSString;

@interface PKDeviceVersion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) NSString *generation;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) PKDeviceVersion *companion;

+ (id)fromCurrentDeviceVersion;

- (unsigned long long)hash;
- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDeviceVersion:(id)a0;

@end
