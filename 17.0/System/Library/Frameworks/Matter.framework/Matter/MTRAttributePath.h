@class NSNumber;

@interface MTRAttributePath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *attribute;

+ (id)attributePathWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2;
+ (id)attributePathWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2;

- (id)initWithPath:(const void *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct ConcreteAttributePath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; })_asConcretePath;
- (BOOL)isEqualToAttributePath:(id)a0;

@end
