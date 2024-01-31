@class SUUITextBoxView, NSString, SUUIEditorialLinkView;

@interface SUUIEditorialCellLayout : SUUICellLayout <SUUIEditorialLinkViewDelegate> {
    double _linkSpacing;
    SUUIEditorialLinkView *_linkView;
    SUUITextBoxView *_textBoxView;
    double _totalHeight;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) SUUITextBoxView *textBoxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_linkView;
- (id)initWithParentView:(id)a0;
- (void)_initContentInset;
- (id)_textBoxView;
- (void)applyEditorialLayout:(id)a0 withOrientation:(long long)a1 expanded:(BOOL)a2;
- (void)editorialLinkView:(id)a0 didSelectLink:(id)a1;
- (id)initWithCollectionViewCell:(id)a0;
- (void)resetContentInset;
- (void)setColoringWithColorScheme:(id)a0;

@end
