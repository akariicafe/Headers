@class NSArray, ADInterSessionFilterParameters;

@interface ADInterSessionFilter : NSObject {
    unsigned int _version;
    ADInterSessionFilterParameters *_params;
    struct deque<Node *, std::allocator<Node *>> { struct __split_buffer<Node **, std::allocator<Node **>> { struct Node ***__first_; struct Node ***__begin_; struct Node ***__end_; struct __compressed_pair<Node ***, std::allocator<Node **>> { struct Node ***__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<Node *>> { unsigned long long __value_; } __size_; } _nodes;
    struct map<std::string, std::multiset<Element *, Element::ElementCompare> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::multiset<Element *, Element::ElementCompare> *>>> { struct __tree<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::multiset<Element *, Element::ElementCompare> *>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _sets;
    NSArray *_elementsNames;
    double *_weightedAverage;
    double *_sumOfWeights;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)persistenceData;
- (long long)fillWithDictionaryRepresentation:(id)a0;
- (long long)fillWithEntry:(id)a0;
- (id)initWithFieldNames:(id)a0 parameters:(id)a1;
- (id)insertEntryAndCalculate:(id)a0 withWeight:(double)a1;
- (double)LossFromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1;
- (double)TTESTWithCandidate:(unsigned int)a0 ByElement:(unsigned int)a1;
- (double)L2FromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1 ByElement:(unsigned int)a2 WithMean:(double)a3;
- (double)SLFromIndex:(unsigned int)a0;
- (unsigned int)kIndexCandidate;
- (BOOL)TtestStepWithCandidate:(unsigned int)a0;
- (double)V1FromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1;
- (double)V2FromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1;
- (id)calculate;
- (id)calculateInterSessionFilterResultFromIndex:(unsigned int)a0;
- (long long)insertEntry:(id)a0 withWeight:(double)a1;
- (void)markInStep:(unsigned int)a0;
- (long long)markOutliers:(unsigned int)a0;
- (void)resetElementFlags:(void *)a0;
- (double)samplesMeanFromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1 ByElement:(unsigned int)a2;
- (double)samplesVarianceFromIndex:(unsigned int)a0 ToIndex:(unsigned int)a1 ByElement:(unsigned int)a2 WithMean:(double)a3;
- (void)setOnlineWeights:(unsigned int)a0;
- (double)sigmaSWithCandidate:(unsigned int)a0 ByElement:(unsigned int)a1;
- (unsigned int)stepDetection;

@end
