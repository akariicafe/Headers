@class RUILinkLabel, NSString, NSURL, UILabel, UIButton;
@protocol RUITableFooterDelegate;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    BOOL _usesCustomTextAlignment;
    double _topMarginValue;
}

@property (weak, nonatomic) id<RUITableFooterDelegate> delegate;
@property (retain, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) id /* block */ linkAction;
@property (readonly, nonatomic) RUILinkLabel *linkLabel;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIButton *linkButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTopMargin:(double)a0;
- (void)_linkPressed;
- (double)footerHeightForWidth:(double)a0 inTableView:(id)a1;
- (double)footerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setText:(id)a0 attributes:(id)a1;
- (double)_footerHeightForWidth:(double)a0;
- (double)_getTopMargin;
- (struct CGSize { double x0; double x1; })_labelSizeForWidth:(double)a0;

@end
