@class HKObserverBridge;

@interface HKObserverBridgeHandle : NSObject

@property (readonly, weak, nonatomic) HKObserverBridge *bridge;

- (id)initWithBridge:(id)a0;
- (void).cxx_destruct;
- (BOOL)notifyObserversOfChangeForKey:(id)a0 newValue:(id)a1;

@end
