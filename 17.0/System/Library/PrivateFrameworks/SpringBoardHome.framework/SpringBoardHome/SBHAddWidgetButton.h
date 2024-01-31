@class MTStylingProvidingSolidColorView, NSString, UIView;

@interface SBHAddWidgetButton : UIButton <UIPointerInteractionDelegate> {
    double _buttonCornerRadius;
}

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)mt_applyVisualStyling:(id)a0;
- (void)dealloc;
- (id)_titleLabelFont;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)layoutSubviews;
- (double)_buttonCornerRadius;
- (void)mt_removeAllVisualStyling;
- (id)_addSymbolImage;

@end
