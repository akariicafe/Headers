@class SUUIPhysicalCirclesTemplateDOMFeature, NSArray, SUUILabelViewElement, SUUIPaletteViewElement;

@interface SUUIPhysicalCirclesTemplateViewElement : SUUIViewElement

@property (readonly, nonatomic) SUUILabelViewElement *subtitleElement;
@property (readonly, nonatomic) SUUILabelViewElement *titleElement;
@property (readonly, nonatomic) NSArray *circleItemElements;
@property (readonly, nonatomic) SUUIPaletteViewElement *footerPaletteElement;
@property (readonly, nonatomic) SUUIPhysicalCirclesTemplateDOMFeature *scriptInterface;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (void)dispatchRemovedEventWithChildViewElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
