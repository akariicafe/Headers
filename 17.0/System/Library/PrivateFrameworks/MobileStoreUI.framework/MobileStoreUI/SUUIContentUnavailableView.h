@class SUUIButtonViewElement, NSString, UIControl, SUUIImageView, SUUIImageViewElement, SUUIAttributedStringView;

@interface SUUIContentUnavailableView : SUUIViewReuseView <SUUIViewElementView> {
    UIControl *_button;
    SUUIButtonViewElement *_buttonElement;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    SUUIImageView *_imageView;
    SUUIImageViewElement *_imageElement;
    SUUIAttributedStringView *_messageView;
    SUUIAttributedStringView *_titleView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringWithButton:(id)a0 context:(id)a1;
+ (id)_attributedStringWithMessageLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringWithTitleLabel:(id)a0 context:(id)a1;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_baselineOffsetForView:(id)a0;
- (void)_buttonAction:(id)a0;
- (double)_firstBaselineOffsetForView:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
