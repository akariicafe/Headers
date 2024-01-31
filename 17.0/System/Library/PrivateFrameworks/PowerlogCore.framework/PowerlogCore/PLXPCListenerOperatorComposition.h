@class PLOperator, NSDictionary;

@interface PLXPCListenerOperatorComposition : NSObject

@property (weak) PLOperator *operator;
@property (readonly) NSDictionary *registration;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (void)messageRecievedForClientID:(short)a0 withProcessName:(id)a1 withKey:(id)a2 withPayload:(id)a3;
- (id)initWithOperator:(id)a0 withRegistration:(id)a1 withBlock:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;

@end
