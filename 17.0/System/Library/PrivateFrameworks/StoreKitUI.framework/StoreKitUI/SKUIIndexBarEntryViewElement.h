@class SKUIViewElement, NSString;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElement *childElement;
@property (readonly, copy, nonatomic) NSString *targetIndexBarEntryID;
@property (readonly, nonatomic) long long visibilityPriority;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
