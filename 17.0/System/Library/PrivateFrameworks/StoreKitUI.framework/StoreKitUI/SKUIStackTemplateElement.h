@class SKUINavigationBarViewElement, NSArray, SKUIToolbarViewElement, NSMutableArray, SKUIViewElement, SKUIIndexBarViewElement;

@interface SKUIStackTemplateElement : SKUIViewElement {
    NSMutableArray *_collectionElements;
    SKUIViewElement *_collectionHeaderViewElement;
}

@property (readonly, nonatomic) NSArray *collectionElements;
@property (readonly, nonatomic) SKUIViewElement *collectionHeaderViewElement;
@property (readonly, nonatomic) SKUIIndexBarViewElement *indexBarViewElement;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) SKUIToolbarViewElement *toolbarElement;
@property (readonly, nonatomic) long long numberOfSplits;
@property (readonly, nonatomic) BOOL needsStateReset;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
