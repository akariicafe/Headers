@class NSData;

@interface TSDgPTPUnicastUDPv6PtPPort : TSDgPTPFDPtPPort

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0 andIPv6Address:(char *)a1;

- (int)portType;
- (void).cxx_destruct;
- (id)_destinationAddressString;
- (id)_destinationIPv6Address;
- (id)_sourceAddressString;
- (id)initWithService:(id)a0 pid:(int)a1;
- (id)propertiesForXPC;

@end
