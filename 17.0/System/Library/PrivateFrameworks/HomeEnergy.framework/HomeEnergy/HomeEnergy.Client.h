@class NSSet;

@interface HomeEnergy.Client : _TtCs12_SwiftObject <HomeEnergy.HomeEnergyClientXPCProtocol>

- (void)serverDidUpdateEnergyWindowsForGridIds:(NSSet *)a0 completionHandler:(void (^)(void))a1;

@end
