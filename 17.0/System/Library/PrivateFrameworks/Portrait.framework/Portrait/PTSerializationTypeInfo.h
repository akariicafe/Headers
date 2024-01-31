@interface PTSerializationTypeInfo : NSObject

@property unsigned int type;
@property (retain) Class providerClass;
@property BOOL isAtomContainerType;
@property BOOL isProviderArrayType;

- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 providerClass:(Class)a1;

@end
