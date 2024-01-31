@class NSString, NSArray, NSData, NSUUID;

@interface CARSessionRequestHost : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSArray *wiredIPv6Addresses;
@property (copy, nonatomic) NSArray *wirelessIPv6Addresses;
@property (nonatomic) long long port;
@property (copy, nonatomic) NSString *carplayWiFiUUID;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *sourceVersion;
@property (nonatomic) BOOL supportsMutualAuthentication;
@property (copy, nonatomic) NSData *authenticationCertificateSerial;
@property (copy, nonatomic) NSUUID *pairedVehicleIdentifier;
@property (nonatomic, getter=isWiredCarPlaySimulator) BOOL wiredCarPlaySimulator;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayName:(id)a0 wiredIPv6Addresses:(id)a1 wirelessIPv6Addresses:(id)a2 port:(long long)a3 carplayWiFiUUID:(id)a4 deviceIdentifier:(id)a5 publicKey:(id)a6 sourceVersion:(id)a7 supportsMutualAuthentication:(BOOL)a8 authenticationCertificateSerial:(id)a9 pairedVehicleIdentifier:(id)a10 wiredCarPlaySimulator:(BOOL)a11;
- (id)initWithHostProperties:(id)a0;

@end
