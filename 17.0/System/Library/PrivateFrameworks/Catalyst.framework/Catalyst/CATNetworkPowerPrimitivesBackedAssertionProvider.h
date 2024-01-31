@protocol CATNetworkPowerPrimitives;

@interface CATNetworkPowerPrimitivesBackedAssertionProvider : NSObject <CATAssertionProviding>

@property (readonly, nonatomic) id<CATNetworkPowerPrimitives> networkPowerPrimitives;

- (void).cxx_destruct;
- (id)acquireAssertion;
- (id)initWithNetworkPowerPrimitives:(id)a0;

@end
