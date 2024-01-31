@class NSString, NSDictionary;

@interface ADArgumentParserPositionalArgument : NSObject

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) id value;
@property (readonly, retain, nonatomic) NSString *descriptionString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) NSDictionary *conversionDictionary;

+ (id)enumArgument:(SEL)a0 description:(id)a1 conversionDictionary:(id)a2;
+ (id)floatArgument:(SEL)a0 description:(id)a1;
+ (id)integerArgument:(SEL)a0 description:(id)a1;
+ (id)stringArgument:(SEL)a0 description:(id)a1;

- (void).cxx_destruct;
- (id)fullUsage;
- (id)initWithName:(SEL)a0 description:(id)a1 type:(unsigned long long)a2 conversionDictionary:(id)a3;
- (id)legalValuesString;
- (BOOL)setPropertyFromMap:(struct map<std::string, docopt::value, std::less<std::string>, std::allocator<std::pair<const std::string, docopt::value>>> { struct __tree<std::__value_type<std::string, docopt::value>, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>, std::allocator<std::__value_type<std::string, docopt::value>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, docopt::value>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; })a0 toCommand:(id)a1;
- (id)shortUsage;

@end
