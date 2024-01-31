@class NSArray, UIAction, UILabel, UIView, UIButton;
@protocol SFFluidTabOverviewItemViewBorrowedContentProvider;

@interface SFFluidTabOverviewItemView : SFFluidTabOverviewReusableView {
    UIButton *_deleteButton;
    NSArray *_deleteButtonConstraints;
    UIView *_highlightView;
    UIView *_borrowedContentViewContainer;
}

@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIAction *deleteButtonAction;
@property (retain, nonatomic) UIView *borrowedContentView;
@property (readonly, nonatomic) BOOL wantsBorrowedContentView;
@property (weak, nonatomic) id<SFFluidTabOverviewItemViewBorrowedContentProvider> borrowedContentProvider;
@property (readonly, nonatomic) double controlsAlpha;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
