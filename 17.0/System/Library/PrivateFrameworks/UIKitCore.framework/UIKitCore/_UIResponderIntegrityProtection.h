@class NSMutableArray, NSMapTable;

@interface _UIResponderIntegrityProtection : NSObject {
    NSMutableArray *_deliveryStack;
    NSMapTable *_pressBeganRecords;
}

+ (id)rip;

- (id)init;
- (void).cxx_destruct;
- (void)finishedDeliveringPresses;
- (void)responder:(id)a0 class:(Class)a1 receivedPresses:(id)a2 inPhase:(long long)a3 withEvent:(id)a4;
- (void)startDeliveringPresses:(id)a0 inPhase:(long long)a1 withEvent:(id)a2;

@end
