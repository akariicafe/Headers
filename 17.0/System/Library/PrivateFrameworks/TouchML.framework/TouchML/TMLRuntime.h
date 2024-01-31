@interface TMLRuntime : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)registerClass:(id)a0;
+ (void)bootstrap;
+ (id)classForObject:(id)a0;
+ (id)classForName:(id)a0;
+ (void)addProperty:(id)a0 toClass:(Class)a1;
+ (id)childClassForName:(id)a0 inClass:(id)a1;
+ (Class)createClass:(id)a0;
+ (id)createObjectWithIdentifier:(id)a0 ofClass:(id)a1 initializer:(id /* block */)a2;
+ (id)createObjectWithIdentifier:(id)a0 ofType:(id)a1 initializer:(id /* block */)a2;
+ (id)createObjectWithIdentifier:(id)a0 ofType:(id)a1 initializer:(id /* block */)a2 parentObject:(id)a3;
+ (id)ensureClass:(id)a0;
+ (id)ensurePropertyWithKeyPath:(id)a0 forObject:(id)a1 writable:(BOOL)a2;
+ (void)makeObject:(id)a0 implementProtocols:(id)a1;
+ (id)property:(id)a0 forClass:(id)a1;
+ (id)property:(id)a0 forObject:(id)a1;
+ (id)propertyWithKeyPath:(id)a0 forObject:(id)a1;
+ (id)propertyWithKeyPath:(id)a0 inClass:(id)a1;
+ (id)protocolForName:(id)a0;
+ (void)registerClass:(id)a0 className:(id)a1;
+ (void)registerMethod:(id)a0 forObject:(id)a1;
+ (void)registerProperty:(id)a0 forObject:(id)a1;
+ (void)registerProtocol:(id)a0;
+ (void)registerSignal:(id)a0 forObject:(id)a1;
+ (id)requireModule:(id)a0;
+ (id)rootClassDescriptor;
+ (id)signal:(id)a0 forObject:(id)a1;
+ (void)verifyMethod:(id)a0 forProtocol:(id)a1;
+ (void)verifyMethod:(id)a0 withClass:(Class)a1;
+ (void)verifyProperty:(id)a0 withClass:(Class)a1;

@end
