@interface TPKTipContentHintView : TPKContentView {
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

- (void)updateContentBackgroundColor:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)resetHostingView;
- (id)initWithContentController:(id)a0 tipContent:(id)a1;
- (id)initWithReusableTipView:(id)a0;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (void)bottomSeperatorNeedsUpdate;

@end
