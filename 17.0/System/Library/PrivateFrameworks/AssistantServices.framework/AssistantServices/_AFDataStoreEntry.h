@interface _AFDataStoreEntry : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id value;

- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 value:(id)a1;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)a0;
- (id)_valueForPropertyListRepresentation:(id)a0 type:(long long)a1;
- (id)_valuePropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)a0 error:(id *)a1;

@end
