@class NSString, NSDictionary;

@interface ADArgumentParserOptionalArgument : NSObject

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char shortName;
@property (readonly, retain, nonatomic) id value;
@property (readonly, retain, nonatomic) NSString *descriptionString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) NSDictionary *conversionDictionary;

+ (id)boolOption:(SEL)a0 shortName:(char)a1 description:(id)a2;
+ (id)enumOption:(SEL)a0 shortName:(char)a1 defaultValue:(unsigned long long)a2 description:(id)a3 conversionDictionary:(id)a4;
+ (id)floatArrayOption:(SEL)a0 shortName:(char)a1 defaultValue:(id)a2 description:(id)a3;
+ (id)floatOption:(SEL)a0 shortName:(char)a1 defaultValue:(float)a2 description:(id)a3;
+ (id)integerArrayOption:(SEL)a0 shortName:(char)a1 defaultValue:(id)a2 description:(id)a3;
+ (id)integerOption:(SEL)a0 shortName:(char)a1 defaultValue:(long long)a2 description:(id)a3;
+ (id)stringArrayOption:(SEL)a0 shortName:(char)a1 defaultValue:(id)a2 description:(id)a3;
+ (id)stringOption:(SEL)a0 shortName:(char)a1 defaultValue:(id)a2 description:(id)a3;

- (void).cxx_destruct;
- (id)defaultValueString;
- (id)fullUsage;
- (id)initWithName:(SEL)a0 shortName:(char)a1 defaultValue:(id)a2 description:(id)a3 type:(unsigned long long)a4 conversionDictionary:(id)a5;
- (id)legalValuesString;
- (BOOL)setPropertyFromMap:(struct map<std::string, docopt::value, std::less<std::string>, std::allocator<std::pair<const std::string, docopt::value>>> { struct __tree<std::__value_type<std::string, docopt::value>, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>, std::allocator<std::__value_type<std::string, docopt::value>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, docopt::value>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; })a0 toCommand:(id)a1;
- (id)shortUsage;

@end
