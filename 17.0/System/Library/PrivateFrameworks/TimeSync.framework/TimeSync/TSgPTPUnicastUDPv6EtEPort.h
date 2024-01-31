@class NSData, TSXgPTPUnicastUDPv6EtEPort, TSDgPTPUnicastUDPv6EtEPort;

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort {
    TSDgPTPUnicastUDPv6EtEPort *_implDC;
    TSXgPTPUnicastUDPv6EtEPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:(id)a0;

@end
