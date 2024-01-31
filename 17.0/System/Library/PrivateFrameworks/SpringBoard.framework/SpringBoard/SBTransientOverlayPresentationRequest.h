@class BSProcessHandle, SBTransientOverlayViewController, SBWindowScene;

@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL shouldDismissSiri;
@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) BSProcessHandle *originatingProcess;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;

@end
