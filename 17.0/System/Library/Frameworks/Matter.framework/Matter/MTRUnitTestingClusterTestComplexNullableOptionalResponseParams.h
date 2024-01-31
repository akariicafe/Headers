@class NSString, NSArray, MTRUnitTestingClusterSimpleStruct, NSNumber;

@interface MTRUnitTestingClusterTestComplexNullableOptionalResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nullableIntWasNull;
@property (copy, nonatomic) NSNumber *nullableIntValue;
@property (copy, nonatomic) NSNumber *optionalIntWasPresent;
@property (copy, nonatomic) NSNumber *optionalIntValue;
@property (copy, nonatomic) NSNumber *nullableOptionalIntWasPresent;
@property (copy, nonatomic) NSNumber *nullableOptionalIntWasNull;
@property (copy, nonatomic) NSNumber *nullableOptionalIntValue;
@property (copy, nonatomic) NSNumber *nullableStringWasNull;
@property (copy, nonatomic) NSString *nullableStringValue;
@property (copy, nonatomic) NSNumber *optionalStringWasPresent;
@property (copy, nonatomic) NSString *optionalStringValue;
@property (copy, nonatomic) NSNumber *nullableOptionalStringWasPresent;
@property (copy, nonatomic) NSNumber *nullableOptionalStringWasNull;
@property (copy, nonatomic) NSString *nullableOptionalStringValue;
@property (copy, nonatomic) NSNumber *nullableStructWasNull;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableStructValue;
@property (copy, nonatomic) NSNumber *optionalStructWasPresent;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *optionalStructValue;
@property (copy, nonatomic) NSNumber *nullableOptionalStructWasPresent;
@property (copy, nonatomic) NSNumber *nullableOptionalStructWasNull;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableOptionalStructValue;
@property (copy, nonatomic) NSNumber *nullableListWasNull;
@property (copy, nonatomic) NSArray *nullableListValue;
@property (copy, nonatomic) NSNumber *optionalListWasPresent;
@property (copy, nonatomic) NSArray *optionalListValue;
@property (copy, nonatomic) NSNumber *nullableOptionalListWasPresent;
@property (copy, nonatomic) NSNumber *nullableOptionalListWasNull;
@property (copy, nonatomic) NSArray *nullableOptionalListValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })_setFieldsFromDecodableStruct:(const void *)a0;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
