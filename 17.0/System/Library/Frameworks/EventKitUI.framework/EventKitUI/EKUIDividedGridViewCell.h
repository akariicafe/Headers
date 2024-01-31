@class UIColor, EKUIDividedGridViewController, UILabel, NSLayoutConstraint;

@interface EKUIDividedGridViewCell : UIView {
    UIColor *_bgColor;
}

@property (weak) EKUIDividedGridViewController *viewController;
@property (weak) NSLayoutConstraint *widthConstraint;
@property (retain) UILabel *label;
@property (nonatomic) BOOL selected;

- (id)init;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)selectedTextColor;
- (id)initWithBackgroundColor:(id)a0;

@end
