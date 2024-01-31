@class NSString;

@interface VNEspressoResources : NSObject

@property (readonly) struct { void *plan; int network_index; } network;
@property (readonly) void *plan;
@property (readonly) void *context;
@property (readonly) NSString *modelPath;
@property (readonly) NSString *networkConfigurationName;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)free;
- (id)initWithModelPath:(id)a0 networkConfigurationName:(id)a1 network:(struct { void *x0; int x1; })a2 plan:(void *)a3 context:(void *)a4;

@end
