@class NSString, UIImage;
@protocol CAMMachineReadableCodeButtonDelegate;

@interface CAMMachineReadableCodeButton : UIButton

@property (nonatomic, getter=isDismissable) BOOL dismissable;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *titleImage;
@property (weak, nonatomic) id<CAMMachineReadableCodeButtonDelegate> delegate;

- (void)updateConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_didTapDismiss:(id)a0;
- (void)setAttributedTitleWithTitle:(id)a0 image:(id)a1;

@end
