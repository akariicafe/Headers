@class UIView;
@protocol PRWidgetEducationViewDelegate;

@interface PRWidgetEducationView : UIView

@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<PRWidgetEducationViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
