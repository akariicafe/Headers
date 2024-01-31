@class NSMutableArray;

@interface ETModelDef : NSObject {
    struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } layer_variable_names;
}

@property struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } network;
@property (retain) NSMutableArray *all_variables;
@property struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder *__ptr_; struct __shared_weak_count *__cntrl_; } gb;

- (id)initWithNetwork:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)layerNames;
- (struct shared_ptr<Espresso::blob<float, 1>> { void *x0; struct __shared_weak_count *x1; })biasesForLayer:(id)a0;
- (void)updateLayer:(id)a0 withWeights:(struct shared_ptr<float> { float *x0; struct __shared_weak_count *x1; })a1 length:(unsigned long long)a2;
- (int)configureLayersToTrain:(id)a0 reinitializeVariables:(BOOL)a1;
- (void *)layerForName:(id)a0;
- (void)randomizeWeightsForLayer:(id)a0 withSeed:(float)a1;
- (void)setupVariablesDef;
- (struct shared_ptr<std::string> { void *x0; struct __shared_weak_count *x1; })topNamesForLayerIndex:(int)a0;
- (void)transformForTraining:(struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })a0;
- (void)updateLayer:(id)a0 withBiases:(struct shared_ptr<float> { float *x0; struct __shared_weak_count *x1; })a1 length:(unsigned long long)a2;
- (id)variableForLayer:(id)a0 kind:(unsigned long long)a1;
- (id)variableNameForLayer:(id)a0 kind:(unsigned long long)a1;
- (id)variables;
- (struct shared_ptr<Espresso::blob<float, 2>> { void *x0; struct __shared_weak_count *x1; })weightsForLayer:(id)a0;

@end
