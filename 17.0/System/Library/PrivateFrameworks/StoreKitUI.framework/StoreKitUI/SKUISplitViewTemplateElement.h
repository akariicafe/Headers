@class SKUIJSDOMFeatureNavigationDocument, SKUIViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement {
    SKUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    SKUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property (readonly, nonatomic) long long preferredDisplayMode;
@property (readonly) SKUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (readonly) SKUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (readonly, nonatomic) SKUIViewElement *leftSplitElement;
@property (readonly, nonatomic) SKUIViewElement *rightSplitElement;
@property (readonly, nonatomic) BOOL usesInlineSplitContent;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_splitElementForIndex:(long long)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
