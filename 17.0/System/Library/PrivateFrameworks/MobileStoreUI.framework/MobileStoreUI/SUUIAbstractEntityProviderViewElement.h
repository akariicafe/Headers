@class NSString, NSArray, SUUISortDescriptorListViewElement, SUUILimitListViewElement, SUUIPredicateListViewElement;

@interface SUUIAbstractEntityProviderViewElement : SUUIViewElement

@property (readonly, copy, nonatomic) NSString *entityTypeString;
@property (readonly, copy, nonatomic) NSArray *prefetchedProperties;
@property (readonly, nonatomic) SUUILimitListViewElement *limitListViewElement;
@property (readonly, nonatomic) SUUIPredicateListViewElement *predicateListViewElement;
@property (readonly, nonatomic) SUUISortDescriptorListViewElement *sortDescriptorListViewElement;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
