@class UIViewController, NSMutableArray;

@interface NAUIUIViewControllerNoticationObserver : NSObject {
    NSMutableArray *_observations;
}

@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
