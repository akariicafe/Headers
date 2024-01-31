@class NSString, NSArray, UIAction, UILabel, UIView, NSMutableDictionary;

@interface _FCUIActivityControlMenuFooterView : UIView <FCUIMenuElement, MTVisualStylingRequiring, FCUIContentSizeCategoryAdjusting> {
    UILabel *_footerLabel;
    UIView *_highlightView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}

@property (copy, nonatomic) UIAction *footerAction;
@property (readonly, nonatomic, getter=isMenuElement) BOOL menuElement;
@property (readonly, copy, nonatomic) NSString *representedObjectIdentifier;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)_needsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_configureFooterLabelIfNecessary;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_updateTextAttributesIfNecessary;
- (void)performAction;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3 observerBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_configureHightlightViewIfNecessary;
- (double)_continuousCornerRadius;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_updateTextAttributesForFooterLabel;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
