@interface UIRuntimeEventConnection : UIRuntimeConnection

@property unsigned long long eventMask;
@property (readonly) SEL action;
@property (readonly) id target;

- (void)encodeWithCoder:(id)a0;
- (void)connect;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)connectForSimulator;

@end
