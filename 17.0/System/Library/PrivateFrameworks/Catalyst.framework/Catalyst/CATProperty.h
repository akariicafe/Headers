@class NSString;

@interface CATProperty : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *instanceVariableName;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) Class objectClass;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic, getter=isNonAtomic) BOOL nonAtomic;
@property (readonly, nonatomic) long long association;
@property (readonly, nonatomic) SEL customGetterSelector;
@property (readonly, nonatomic) SEL customSetterSelector;
@property (readonly, nonatomic, getter=isWeakReference) BOOL weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)a0;
+ (id)propertiesForProtocol:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(const char *)a0 attributes:(const char *)a1;

@end
