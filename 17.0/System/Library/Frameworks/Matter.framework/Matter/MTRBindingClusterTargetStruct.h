@class NSNumber;

@interface MTRBindingClusterTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *group;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
