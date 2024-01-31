@class NSString;

@interface DEGrammarFeature : NSObject

@property struct GrammarFeature { int mType; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } mName; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } mValues; BOOL mIsUniqueValues; } Obj;
@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) BOOL isUniqueValues;

+ (id)features:(id)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)values;

@end
