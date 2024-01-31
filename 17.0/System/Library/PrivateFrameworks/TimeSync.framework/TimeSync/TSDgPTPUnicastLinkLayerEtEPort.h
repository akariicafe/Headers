@class NSData;

@interface TSDgPTPUnicastLinkLayerEtEPort : TSDgPTPFDEtEPort

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)diagnosticInfoForService:(id)a0;

- (int)portType;
- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationMACAddress;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
