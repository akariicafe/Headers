@class NSArray, NSEnumerator;

@interface SNNMILFunction : NSObject {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _name;
    struct shared_ptr<MIL::IRFunction> { struct IRFunction *__ptr_; struct __shared_weak_count *__cntrl_; } _function;
}

@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) long long operationCount;
@property (readonly, nonatomic) NSEnumerator *operationEnumerator;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })name;
- (id)operationAtIndex:(long long)a0;
- (id)initWithFunction:(struct shared_ptr<MIL::IRFunction> { struct IRFunction *x0; struct __shared_weak_count *x1; })a0 name:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1;
- (id)inputWithName:(id)a0;
- (struct shared_ptr<MIL::IRFunction> { struct IRFunction *x0; struct __shared_weak_count *x1; })milFunction;

@end
