@class SNNMILContext, SNNMILSourceLocation, NSString, SNNMILFunction, NSMutableArray;

@interface SNNMILFunctionBuilder : NSObject {
    struct map<std::string, const MIL::IRValueType *, std::less<std::string>, std::allocator<std::pair<const std::string, const MIL::IRValueType *>>> { struct __tree<std::__value_type<std::string, const MIL::IRValueType *>, std::__map_value_compare<std::string, std::__value_type<std::string, const MIL::IRValueType *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, const MIL::IRValueType *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, const MIL::IRValueType *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, const MIL::IRValueType *>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } _inputs;
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } _outputs;
    struct vector<std::shared_ptr<MIL::IROperation>, std::allocator<std::shared_ptr<MIL::IROperation>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<MIL::IROperation> *, std::allocator<std::shared_ptr<MIL::IROperation>>> { void *__value_; } __end_cap_; } _operations;
    unsigned long long _symbolCounter;
}

@property (readonly, nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } milName;
@property (readonly, weak, nonatomic) SNNMILContext *context;
@property (readonly, nonatomic) SNNMILSourceLocation *location;
@property (readonly, nonatomic) SNNMILFunction *function;
@property (retain, nonatomic) NSMutableArray *outputNames;
@property (readonly, nonatomic) NSString *name;

- (id)build;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)constantOperationWithValue:(struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue *x0; } x0; })a0 name:(id)a1 location:(id)a2;
- (id)constantScalar:(id)a0 dataType:(unsigned long long)a1 location:(id)a2;
- (id)constantScalar:(id)a0 dataType:(unsigned long long)a1 name:(id)a2 location:(id)a3;
- (id)constantScalar:(id)a0 location:(id)a1;
- (id)constantScalar:(id)a0 name:(id)a1 location:(id)a2;
- (id)constantTensorBlobWithFilename:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 offset:(id)a3 location:(id)a4;
- (id)constantTensorBlobWithFilename:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 offset:(id)a3 name:(id)a4 location:(id)a5;
- (id)constantTensorWithBytes:(void *)a0 shape:(id)a1 dataType:(unsigned long long)a2 location:(id)a3;
- (id)constantTensorWithBytes:(void *)a0 shape:(id)a1 dataType:(unsigned long long)a2 name:(id)a3 location:(id)a4;
- (id)constantTensorWithScalars:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 location:(id)a3;
- (id)constantTensorWithScalars:(id)a0 shape:(id)a1 dataType:(unsigned long long)a2 name:(id)a3 location:(id)a4;
- (id)constantValue:(id)a0 name:(id)a1 location:(id)a2;
- (id)initWithName:(id)a0 context:(id)a1 location:(id)a2;
- (BOOL)isUniqueOutputName:(id)a0;
- (struct unique_ptr<MIL::IRArgument, std::default_delete<MIL::IRArgument>> { struct __compressed_pair<MIL::IRArgument *, std::default_delete<MIL::IRArgument>> { struct IRArgument *x0; } x0; })milArgumentForSNNMILValue:(id)a0;
- (id)nextSymbol;
- (id)outputsByApplyingOperatorNamed:(id)a0 toInputs:(id)a1 outputs:(id)a2 attributes:(id)a3 location:(id)a4;
- (id)outputsByApplyingOperatorNamed:(id)a0 toInputs:(id)a1 outputs:(id)a2 location:(id)a3;
- (id)placeholderWithShape:(id)a0 dataType:(unsigned long long)a1 location:(id)a2;
- (id)placeholderWithShape:(id)a0 dataType:(unsigned long long)a1 name:(id)a2 location:(id)a3;
- (BOOL)retainOutputs:(id)a0;
- (BOOL)retainOutputsWithNames:(id)a0;
- (const struct IRTensorValueType { void /* function */ **x0; } *)tensorValueTypeWithShape:(id)a0 dataType:(unsigned long long)a1;

@end
