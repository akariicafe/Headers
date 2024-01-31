@protocol CSActivityItemContentViewSizeProviding;

@interface CSActivityItemContentView : UIView

@property (weak, nonatomic) id<CSActivityItemContentViewSizeProviding> sizeProvider;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
