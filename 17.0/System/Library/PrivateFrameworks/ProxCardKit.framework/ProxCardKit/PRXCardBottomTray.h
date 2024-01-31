@class NSArray, NSString, UIImageView, UILabel, UIView;
@protocol PRXCardBottomTrayDelegate;

@interface PRXCardBottomTray : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSArray *buttonConstraints;
@property (copy, nonatomic) NSArray *titleConstraints;
@property (copy, nonatomic) NSArray *actionButtons;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *activityIndicator;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<PRXCardBottomTrayDelegate> delegate;
@property (readonly, nonatomic) BOOL containsContents;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
