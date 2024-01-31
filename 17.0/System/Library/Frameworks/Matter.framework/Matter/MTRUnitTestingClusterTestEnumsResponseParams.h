@class NSNumber;

@interface MTRUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *arg1;
@property (copy, nonatomic) NSNumber *arg2;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned short x0; unsigned char x1; } *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
