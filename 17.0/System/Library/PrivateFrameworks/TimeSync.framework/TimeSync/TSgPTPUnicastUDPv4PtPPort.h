@class NSNumber, TSDgPTPUnicastUDPv4PtPPort, TSXgPTPUnicastUDPv4PtPPort;

@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort {
    TSDgPTPUnicastUDPv4PtPPort *_implDC;
    TSXgPTPUnicastUDPv4PtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationIPv4Address;
- (id)initWithImplXPC:(id)a0;

@end
