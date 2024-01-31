@class PLOperator;

@interface PLHIDEventOperatorComposition : NSObject

@property (retain) PLOperator *operator;
@property struct __IOHIDEventSystemClient { } *eventSystemClient;
@property (copy, nonatomic) id /* block */ operatorBlock;

- (id)initWithOperator:(id)a0 forUsagePage:(unsigned long long)a1 andUsage:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;

@end
