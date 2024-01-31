@class NSMutableDictionary;

@interface IDSAPSUserPayload : NSObject

@property (retain, nonatomic) NSMutableDictionary *payload;

- (id)extractCommandWebTunnelResponseFrom:(id)a0;
- (id)extractMadridProtocolPayloadFrom:(id)a0;
- (id)extractQuickRelaySelfAllocTokenFrom:(id)a0;
- (id)extractCommandResponseFrom:(id)a0;
- (id)extractQuickRelayAllocationStatusFrom:(id)a0;
- (void)logDiffBetween:(id)a0 andTarget:(id)a1 withKeyPath:(id)a2;
- (id)extractMadridDeliveryContextFrom:(id)a0;
- (id)extractMadridHttpHeadersFrom:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlastDoorObject:(id)a0;
- (void)logHeaderDiffAgainstSource:(id)a0;

@end
