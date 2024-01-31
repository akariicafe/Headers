@class NSData, NSString;

@interface SPAccessoryInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *productData;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSString *protocolVersion;
@property (nonatomic) unsigned long long accessoryCategory;
@property (nonatomic) unsigned int accessoryCapabilities;
@property (nonatomic) unsigned char batteryType;
@property (nonatomic) unsigned char batteryState;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProductData:(id)a0 manufacturerName:(id)a1 modelName:(id)a2 firmwareVersion:(id)a3 protocolVersion:(id)a4 accessoryCategory:(unsigned long long)a5 accessoryCapabilities:(unsigned int)a6 batteryType:(unsigned char)a7 batteryState:(unsigned char)a8;

@end
