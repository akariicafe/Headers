@class UIView;

@interface TSKModalNavigationController : UINavigationController {
    UIView *mTopSeparator;
}

@property (nonatomic) BOOL showTopSeparator;
@property (nonatomic) BOOL isFullscreenViewController;

- (id)initWithRootViewController:(id)a0;
- (void)dealloc;
- (void)layoutViews;
- (void)viewDidLoad;
- (long long)positionForBar:(id)a0;
- (void)p_statusBarWillChange:(id)a0;

@end
