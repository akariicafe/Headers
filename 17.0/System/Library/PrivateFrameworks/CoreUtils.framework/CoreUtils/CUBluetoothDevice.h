@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject

@property (nonatomic) struct { unsigned char bytes[6]; } address;
@property (copy) NSString *addressString;
@property (nonatomic) int colorCode;
@property (nonatomic) unsigned int connectedServices;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) int disconnectReason;
@property (copy) NSString *firmwareVersion;
@property (copy) NSUUID *identifier;
@property (nonatomic) BOOL magicPaired;
@property (copy) NSString *manufacturer;
@property (copy) NSString *modelNumber;
@property (copy) NSString *name;
@property (nonatomic) int primaryPlacement;
@property (nonatomic) int secondaryPlacement;
@property (nonatomic) BOOL present;
@property (nonatomic) unsigned int productIdentifier;
@property (nonatomic) int streamState;
@property (nonatomic) BOOL supportsAACPService;
@property (nonatomic) unsigned int versionID;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
