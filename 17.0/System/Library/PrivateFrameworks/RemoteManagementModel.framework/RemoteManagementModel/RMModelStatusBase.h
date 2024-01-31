@class NSString;

@interface RMModelStatusBase : RMModelPayloadBase

@property (class, readonly, copy) NSString *statusItemType;
@property (class, readonly) BOOL isArrayValue;

- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
