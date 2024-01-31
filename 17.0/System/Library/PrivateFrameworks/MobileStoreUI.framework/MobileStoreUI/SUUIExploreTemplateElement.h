@class NSArray, SUUIViewElement, SUUINavigationBarViewElement;

@interface SUUIExploreTemplateElement : SUUIViewElement

@property (readonly, nonatomic) NSArray *childViewElements;
@property (readonly, nonatomic) SUUIViewElement *leftSplit;
@property (readonly, nonatomic) SUUIViewElement *rightSplit;
@property (readonly, nonatomic) SUUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) BOOL usesSplits;

- (void)_getLeftSplit:(id *)a0 rightSplit:(id *)a1;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
