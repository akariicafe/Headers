@class UIEvent, NSSet, NSMapTable;

@interface _UIRIPDeliveryRecord : NSObject {
    NSMapTable *_receivers;
}

@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) UIEvent *event;
@property (readonly, nonatomic) NSSet *presses;

- (id)description;
- (void).cxx_destruct;
- (id)diffToRecord:(id)a0 press:(id)a1;
- (id)initWithPresses:(id)a0 inPhase:(long long)a1 withEvent:(id)a2;
- (void)responder:(id)a0 class:(Class)a1 receivedPresses:(id)a2 inPhase:(long long)a3 withEvent:(id)a4;

@end
