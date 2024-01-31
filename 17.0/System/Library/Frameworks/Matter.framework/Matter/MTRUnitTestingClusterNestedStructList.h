@class NSNumber, MTRUnitTestingClusterSimpleStruct, NSArray;

@interface MTRUnitTestingClusterNestedStructList : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c;
@property (copy, nonatomic) NSArray *d;
@property (copy, nonatomic) NSArray *e;
@property (copy, nonatomic) NSArray *f;
@property (copy, nonatomic) NSArray *g;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
