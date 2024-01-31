@class NSDictionary, NSString;

@interface HKStateMachineState : NSObject

@property (copy, nonatomic) NSDictionary *incomingTransitions;
@property (copy, nonatomic) NSDictionary *outgoingTransitions;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *label;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIndex:(long long)a0 label:(id)a1;

@end
