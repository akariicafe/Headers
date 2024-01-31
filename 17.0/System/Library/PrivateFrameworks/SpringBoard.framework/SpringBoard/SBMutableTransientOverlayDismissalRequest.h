@interface SBMutableTransientOverlayDismissalRequest : SBTransientOverlayDismissalRequest

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)setCompletionHandler:(id /* block */)a0;
- (void)setAnimated:(BOOL)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
