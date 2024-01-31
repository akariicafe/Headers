@class UIViewController;

@interface FLPreferencesTapActionResult : NSObject

@property (readonly, nonatomic) UIViewController *viewControllerToPresent;
@property (readonly, nonatomic) unsigned long long presentationStyle;

- (void).cxx_destruct;
- (id)initWithViewControllerToPresent:(id)a0 presentationStyle:(unsigned long long)a1;

@end
