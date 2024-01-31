@class NRDeviceIdentifier, NSString;

@interface NREndpoint : NSObject <NSCopying>

@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (retain, nonatomic) NSString *portString;
@property (nonatomic) unsigned char dataProtectionClass;

- (id)description;
- (id)copyEndpoint;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyNWEndpoint;
- (id)initWithDeviceIdentifier:(id)a0 portString:(id)a1 dataProtectionClass:(unsigned char)a2;

@end
