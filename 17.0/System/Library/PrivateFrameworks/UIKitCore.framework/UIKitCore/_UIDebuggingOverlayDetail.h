@class NSString, UIViewController, UIView;

@interface _UIDebuggingOverlayDetail : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) long long accessoryType;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController;

+ (id)detailWithTitle:(id)a0 detail:(id)a1;

- (void).cxx_destruct;
- (void)_updateForInspectedView:(id)a0;

@end
