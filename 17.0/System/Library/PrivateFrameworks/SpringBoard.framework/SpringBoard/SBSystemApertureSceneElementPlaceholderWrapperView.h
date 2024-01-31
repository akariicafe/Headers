@class UIView;
@protocol SBSystemApertureSceneElementPlaceholderWrapperViewDelegate;

@interface SBSystemApertureSceneElementPlaceholderWrapperView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<SBSystemApertureSceneElementPlaceholderWrapperViewDelegate> delegate;

- (id)initWithContentView:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)allowsReparentingByLayoutHost;

@end
