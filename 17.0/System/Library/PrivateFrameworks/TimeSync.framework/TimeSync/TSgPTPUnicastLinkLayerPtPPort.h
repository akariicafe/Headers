@class NSData, TSDgPTPUnicastLinkLayerPtPPort, TSXgPTPUnicastLinkLayerPtPPort;

@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort {
    TSDgPTPUnicastLinkLayerPtPPort *_implDC;
    TSXgPTPUnicastLinkLayerPtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)keyPathsForValuesAffectingDestinationMACAddress;

- (void).cxx_destruct;
- (id)initWithImplDC:(id)a0;
- (id)destinationMACAddress;
- (id)initWithImplXPC:(id)a0;

@end
