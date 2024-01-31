@class NSString, UIView;
@protocol SBUISystemApertureContentViewContaining;

@interface _SBUISystemApertureAspectFittingView : UIView <SBUISystemApertureContentIntrinsicSizeScaling> {
    UIView *_contentView;
    id<SBUISystemApertureContentViewContaining> _contentContainer;
}

@property (nonatomic) BOOL shouldAutomaticallyScaleUpIntrinsicSize;
@property (nonatomic) struct CGSize { double width; double height; } explicitIntrinsicSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
