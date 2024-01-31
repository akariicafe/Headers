@class NSArray, SUUIIndexBarViewElement, SUUINavigationBarViewElement, SUUIToolbarViewElement, SUUIViewElement, NSMutableArray;

@interface SUUIStackTemplateElement : SUUIViewElement {
    NSMutableArray *_collectionElements;
    SUUIViewElement *_collectionHeaderViewElement;
}

@property (readonly, nonatomic) NSArray *collectionElements;
@property (readonly, nonatomic) SUUIViewElement *collectionHeaderViewElement;
@property (readonly, nonatomic) SUUIIndexBarViewElement *indexBarViewElement;
@property (readonly, nonatomic) SUUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) SUUIToolbarViewElement *toolbarElement;
@property (readonly, nonatomic) long long numberOfSplits;
@property (readonly, nonatomic) BOOL needsStateReset;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
