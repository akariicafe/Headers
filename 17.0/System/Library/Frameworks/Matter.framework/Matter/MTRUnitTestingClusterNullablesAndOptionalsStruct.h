@class NSString, NSArray, MTRUnitTestingClusterSimpleStruct, NSNumber;

@interface MTRUnitTestingClusterNullablesAndOptionalsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nullableInt;
@property (copy, nonatomic) NSNumber *optionalInt;
@property (copy, nonatomic) NSNumber *nullableOptionalInt;
@property (copy, nonatomic) NSString *nullableString;
@property (copy, nonatomic) NSString *optionalString;
@property (copy, nonatomic) NSString *nullableOptionalString;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableStruct;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *optionalStruct;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *nullableOptionalStruct;
@property (copy, nonatomic) NSArray *nullableList;
@property (copy, nonatomic) NSArray *optionalList;
@property (copy, nonatomic) NSArray *nullableOptionalList;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
