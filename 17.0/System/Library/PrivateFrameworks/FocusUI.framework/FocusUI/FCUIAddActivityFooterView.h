@class NSString, _FCUIAddActivityControl, UILabel;

@interface FCUIAddActivityFooterView : UIView <FCUIContentSizeCategoryAdjusting> {
    _FCUIAddActivityControl *_addActivityControl;
    UILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2;

- (id)initWithAction:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)_needsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesIfNecessary;
- (void)_setNeedsTextAttributesUpdate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateTextAttributesForTitleLabel;
- (void)_configureActivityTitleLabelIfNecessaryWithTitle:(id)a0;
- (void)_configureAddActivityControlIfNecessaryWithAction:(id)a0;
- (void)_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 measuringOnly:(out struct CGSize { double x0; double x1; } *)a1;

@end
