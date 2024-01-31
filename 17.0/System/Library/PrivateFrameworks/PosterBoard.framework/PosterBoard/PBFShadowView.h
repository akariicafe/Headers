@class NSString, UIView;

@interface PBFShadowView : UIView <PBFShadowMetricsProviding> {
    UIView *_shadowView;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) long long shadowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameWithContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureForShadowType;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })shadowSupplementaryTransform;

@end
