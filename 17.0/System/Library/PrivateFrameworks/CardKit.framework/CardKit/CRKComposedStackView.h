@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView {
    NSMutableArray *_keylines;
}

@property (nonatomic) unsigned long long direction;

- (void)_updateLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })templatedContentMargins;
- (void)addCardSectionSubview:(id)a0 withKeyline:(long long)a1;
- (void)setCardSectionSubviews:(id)a0;
- (void)setDirection:(unsigned long long)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)triggerLayoutAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
