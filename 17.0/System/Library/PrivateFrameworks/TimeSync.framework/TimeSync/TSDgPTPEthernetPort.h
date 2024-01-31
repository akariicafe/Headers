@interface TSDgPTPEthernetPort : TSDgPTPFDPtPPort

+ (id)diagnosticInfoForService:(id)a0;

- (int)portType;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
