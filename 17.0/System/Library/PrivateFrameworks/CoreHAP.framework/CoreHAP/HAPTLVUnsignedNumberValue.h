@interface HAPTLVUnsignedNumberValue : HAPTLVNumberValueBase

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)description;
- (id)_serialize;
- (id)_parseFromData:(const char *)a0 length:(unsigned long long)a1 status:(int *)a2;

@end
