@class NSData, TSDgPTPUnicastUDPv6PtPPort, TSXgPTPUnicastUDPv6PtPPort;

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort {
    TSDgPTPUnicastUDPv6PtPPort *_implDC;
    TSXgPTPUnicastUDPv6PtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)initWithimplDC:(id)a0;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:(id)a0;

@end
