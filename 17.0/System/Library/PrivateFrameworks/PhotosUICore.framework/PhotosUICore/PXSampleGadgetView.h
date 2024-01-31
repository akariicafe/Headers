@class UIColor, UIView;
@protocol PXSampleGadgetViewDelegate;

@interface PXSampleGadgetView : UICollectionViewCell

@property (retain, nonatomic) UIView *colorView;
@property (weak, nonatomic) id<PXSampleGadgetViewDelegate> delegate;
@property (retain, nonatomic) UIColor *color;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
