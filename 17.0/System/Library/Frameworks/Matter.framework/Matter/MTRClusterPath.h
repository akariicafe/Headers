@class NSNumber;

@interface MTRClusterPath : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *endpoint;
@property (readonly, copy, nonatomic) NSNumber *cluster;

+ (id)clusterPathWithEndpointID:(id)a0 clusterID:(id)a1;

- (id)initWithPath:(const struct ConcreteClusterPath { unsigned short x0; BOOL x1; unsigned int x2; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToClusterPath:(id)a0;

@end
