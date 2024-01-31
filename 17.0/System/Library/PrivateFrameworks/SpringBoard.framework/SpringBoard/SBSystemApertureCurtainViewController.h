@class _UIPortalView, UIView;

@interface SBSystemApertureCurtainViewController : UIViewController <SBSystemApertureCurtainViewHoster> {
    UIView *_curtainView;
    _UIPortalView *_indicatorPortalView;
}

@property (retain, nonatomic) UIView *curtainView;
@property (weak, nonatomic) UIView *indicatorSourceView;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_indicatorPortalView;

@end
