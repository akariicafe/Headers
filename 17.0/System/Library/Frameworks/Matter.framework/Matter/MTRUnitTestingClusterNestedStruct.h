@class NSNumber, MTRUnitTestingClusterSimpleStruct;

@interface MTRUnitTestingClusterNestedStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
