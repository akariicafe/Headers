@protocol SUUIProxyScrollViewDelegate;

@interface SUUIProxyScrollView : UIScrollView

@property (nonatomic) id<SUUIProxyScrollViewDelegate> delegate;

- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didMoveToWindow;

@end
