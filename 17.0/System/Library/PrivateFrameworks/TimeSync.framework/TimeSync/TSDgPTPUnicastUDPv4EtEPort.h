@class NSNumber;

@interface TSDgPTPUnicastUDPv4EtEPort : TSDgPTPFDEtEPort

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)diagnosticInfoForService:(id)a0;

- (int)portType;
- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationIPv4Address;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
