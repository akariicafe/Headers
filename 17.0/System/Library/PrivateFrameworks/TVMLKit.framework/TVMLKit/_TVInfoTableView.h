@class NSArray, NSString, UIView;

@interface _TVInfoTableView : _TVFocusRedirectView <TVAppTemplateImpressionable>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoTableViewWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_normalizedInfoHeaderWidth;
- (id)impressionableElementsContainedInDocument:(id)a0;

@end
