@protocol HAPBTLECentralManagerDelegate;

@interface HAPComponent : HMFObject

@property (weak, nonatomic) id<HAPBTLECentralManagerDelegate> centralManagerDelegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
