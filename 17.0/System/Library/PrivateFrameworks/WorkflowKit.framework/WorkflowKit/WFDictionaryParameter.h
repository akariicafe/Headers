@class NSString, NSSet;

@interface WFDictionaryParameter : WFParameter

@property (readonly, nonatomic) NSString *localizedItemTypeName;
@property (readonly, nonatomic) NSString *localizedNewItemTypeName;
@property (readonly, nonatomic) NSSet *allowedValueTypes;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (BOOL)allowsMultipleValues;
- (id)defaultSupportedVariableTypes;
- (Class)singleStateClass;

@end
