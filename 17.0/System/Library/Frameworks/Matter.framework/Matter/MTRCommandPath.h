@class NSNumber;

@interface MTRCommandPath : MTRClusterPath

@property (readonly, copy, nonatomic) NSNumber *command;

+ (id)commandPathWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2;
+ (id)commandPathWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2;

- (id)initWithPath:(const struct ConcreteCommandPath { unsigned short x0; BOOL x1; unsigned int x2; unsigned int x3; } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
