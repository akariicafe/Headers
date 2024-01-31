@class SUUIPredicateListViewElement, SUUIViewElement, NSString;

@interface SUUITemplateDefinitionViewElement : SUUIViewElement

@property (readonly, nonatomic) SUUIPredicateListViewElement *predicateListViewElement;
@property (readonly, nonatomic) SUUIViewElement *contentViewElement;
@property (readonly, copy, nonatomic) NSString *definitionMode;
@property (readonly, copy, nonatomic) NSString *definitionType;

@end
