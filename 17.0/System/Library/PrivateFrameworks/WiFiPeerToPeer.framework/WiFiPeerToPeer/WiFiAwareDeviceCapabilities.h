@class NSNumber, NSArray, NSString;

@interface WiFiAwareDeviceCapabilities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *operatingChannel;
@property (readonly, nonatomic) NSNumber *operatingClass;
@property (readonly, nonatomic) NSArray *supportedCipherSuites;
@property (readonly, nonatomic) unsigned char supportedBands;
@property (readonly, nonatomic) BOOL supportsDataTransfer;
@property (readonly, nonatomic) NSString *discoveryInterfaceName;

+ (id)currentDeviceCapabilities;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperatingChannel:(id)a0 operatingClass:(id)a1 supportedCipherSuites:(id)a2 supportsDataTransfer:(BOOL)a3 supportedBands:(unsigned char)a4 discoveryInterfaceName:(id)a5;

@end
