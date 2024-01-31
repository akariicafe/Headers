@class UIViewController, NSString, QLToolbarButton, UILongPressGestureRecognizer;
@protocol QLToolbarButtonDelegate;

@interface QLToolbarButtonItemRepresentation : UIBarButtonItem

@property (retain) NSString *identifier;
@property unsigned long long placement;
@property BOOL disappearsOnTap;
@property (weak) QLToolbarButton *originalButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (weak) UIViewController<QLToolbarButtonDelegate> *presentingViewController;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setLongPressTarget:(id)a0 action:(SEL)a1;

@end
