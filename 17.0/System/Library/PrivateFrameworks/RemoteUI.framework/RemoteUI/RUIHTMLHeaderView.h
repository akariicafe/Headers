@class NSURL, NSString, RUIWebContainerView;
@protocol RUIHeaderDelegate;

@interface RUIHTMLHeaderView : UIView <RUIWebContainerViewDelegate, RUIHeader> {
    RUIWebContainerView *_webContainerView;
    BOOL _isFirstSection;
}

@property (weak, nonatomic) id<RUIHeaderDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_topPadding;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setHTMLContent:(id)a0 toElementsMatchingQuery:(id)a1;
- (void)setSectionIsFirst:(BOOL)a0;
- (void)setText:(id)a0 attributes:(id)a1;
- (id)quoteEncodedStringWithString:(id)a0;
- (void)setFooterStyleText:(id)a0 attributes:(id)a1;
- (void)webContainerView:(id)a0 didClickLinkWithURL:(id)a1;
- (void)webContainerViewContentDidChange:(id)a0;
- (double)webViewWidth;
- (double)webViewWidthForWidth:(double)a0;

@end
