@class NSString, UIView;

@interface SBUISystemApertureAspectFittingContentProvider : SBUISystemApertureCustomContentProvider <SBUISystemApertureContentIntrinsicSizeScaling> {
    UIView *_customView;
}

@property (nonatomic) BOOL shouldAutomaticallyScaleUpIntrinsicSize;
@property (nonatomic) struct CGSize { double x0; double x1; } explicitIntrinsicSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (id)contentColor;
- (void).cxx_destruct;
- (void)setContentColor:(id)a0;
- (id)_providedView;
- (void)setContentContainer:(id)a0;

@end
