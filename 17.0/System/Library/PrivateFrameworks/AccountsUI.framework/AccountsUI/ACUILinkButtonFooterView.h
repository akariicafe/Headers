@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {
    ACUILinkButton *_linkButton;
}

@property (nonatomic) long long alignment;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithButton:(id)a0;

@end
