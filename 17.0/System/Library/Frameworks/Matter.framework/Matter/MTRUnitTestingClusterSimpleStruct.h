@class NSNumber, NSData, NSString;

@interface MTRUnitTestingClusterSimpleStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *a;
@property (copy, nonatomic) NSNumber *b;
@property (copy, nonatomic) NSNumber *c;
@property (copy, nonatomic) NSData *d;
@property (copy, nonatomic) NSString *e;
@property (copy, nonatomic) NSNumber *f;
@property (copy, nonatomic) NSNumber *g;
@property (copy, nonatomic) NSNumber *h;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
