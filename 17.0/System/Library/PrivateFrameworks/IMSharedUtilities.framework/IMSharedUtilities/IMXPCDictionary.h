@interface IMXPCDictionary : IMXPCObject

+ (struct _xpc_type_s { } *)type;

- (id)dictionaryForKey:(const char *)a0;
- (id)initWithDictionary:(id)a0 key:(const char *)a1;

@end
