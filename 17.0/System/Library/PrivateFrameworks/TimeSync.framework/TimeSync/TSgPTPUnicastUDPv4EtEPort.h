@class NSNumber, TSXgPTPUnicastUDPv4EtEPort, TSDgPTPUnicastUDPv4EtEPort;

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort {
    TSDgPTPUnicastUDPv4EtEPort *_implDC;
    TSXgPTPUnicastUDPv4EtEPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv4Address;
- (id)initWithImplXPC:(id)a0;

@end
