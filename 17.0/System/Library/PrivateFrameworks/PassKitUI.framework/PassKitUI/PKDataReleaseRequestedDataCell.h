@class UIFont, NSString, NSArray, UILabel, NSMutableArray, UIView;

@interface PKDataReleaseRequestedDataCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_intentRetainLabel;
    NSMutableArray *_retainElementViews;
    UIView *_separatorView1;
    UILabel *_intentDoNotRetainLabel;
    NSMutableArray *_doNotRetainElementViews;
    UIView *_separatorView2;
    UILabel *_intentDisplayOnlyLabel;
    NSMutableArray *_displayOnlyElementViews;
    BOOL _isTemplateLayout;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *intentRetainTitle;
@property (copy, nonatomic) NSArray *intentRetainElements;
@property (copy, nonatomic) NSString *intentDoNotRetainTitle;
@property (copy, nonatomic) NSArray *intentDoNotRetainElements;
@property (copy, nonatomic) NSString *intentDisplayOnlyTitle;
@property (copy, nonatomic) NSArray *intentDisplayOnlyElements;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) UIFont *bodyFont;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_recreateViews:(id)a0 forElements:(id)a1;

@end
