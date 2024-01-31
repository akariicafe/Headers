@interface INJSONDecoder : NSObject

- (id)_decodeWithCodableAttribute:(id)a0 from:(id)a1;
- (id)decodeWithCodableAttribute:(id)a0 from:(id)a1;
- (id)decodeObjectsOfClass:(Class)a0 from:(id)a1;
- (void)decodeObject:(id)a0 withCodableDescription:(id)a1 from:(id)a2;
- (id)_decodeObjectOfClass:(Class)a0 withCodableDescription:(id)a1 from:(id)a2 outCodableDescription:(id *)a3;
- (id)decodeObjectOfClass:(Class)a0 from:(id)a1;

@end
