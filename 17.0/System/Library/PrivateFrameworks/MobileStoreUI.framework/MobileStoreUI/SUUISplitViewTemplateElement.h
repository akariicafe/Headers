@class SUUIViewElement, SUUIJSDOMFeatureNavigationDocument;

@interface SUUISplitViewTemplateElement : SUUIViewElement {
    SUUIJSDOMFeatureNavigationDocument *_leftNavigationDocument;
    SUUIJSDOMFeatureNavigationDocument *_rightNavigationDocument;
}

@property (readonly, nonatomic) long long preferredDisplayMode;
@property (readonly) SUUIJSDOMFeatureNavigationDocument *leftNavigationDocument;
@property (readonly) SUUIJSDOMFeatureNavigationDocument *rightNavigationDocument;
@property (readonly, nonatomic) SUUIViewElement *leftSplitElement;
@property (readonly, nonatomic) SUUIViewElement *rightSplitElement;
@property (readonly, nonatomic) BOOL usesInlineSplitContent;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_splitElementForIndex:(long long)a0;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
