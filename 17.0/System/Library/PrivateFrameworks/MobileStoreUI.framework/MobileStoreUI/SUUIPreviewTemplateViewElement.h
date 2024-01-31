@class NSString, SUUILockupViewElement;

@interface SUUIPreviewTemplateViewElement : SUUIViewElement

@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) SUUILockupViewElement *previewLockup;
@property (readonly, nonatomic) NSString *previewURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
