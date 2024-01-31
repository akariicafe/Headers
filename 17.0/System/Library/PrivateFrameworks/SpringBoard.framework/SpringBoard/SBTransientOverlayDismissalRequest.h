@class SBTransientOverlayViewController, SBWindowScene;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;

+ (id)dismissalRequestForAllViewControllers;
+ (id)dismissalRequestForAllViewControllersInWindowScene:(id)a0;
+ (id)dismissalRequestForViewController:(id)a0;

- (id)_init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
