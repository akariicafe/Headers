@class NSString, NSArray, UIView;

@interface CCUIContentModuleContainerView : UIView {
    NSArray *_views;
    unsigned long long _options;
}

@property (readonly, copy, nonatomic) NSString *moduleIdentifier;
@property (readonly, nonatomic) UIView *c2AnimationContainerView;
@property (readonly, nonatomic) UIView *caAnimationContainerView;
@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) BOOL ignoreFrameUpdates;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)caAnimationContainerView;
- (id)containerView;
- (id)initWithModuleIdentifier:(id)a0 options:(unsigned long long)a1;
- (id)c2AnimationContainerView;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
