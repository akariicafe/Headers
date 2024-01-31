@class NSString, UIVisualEffectView, _UIInterfaceActionSeparatorConstraintController;

@interface _UIInterfaceActionVibrantSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying> {
    UIVisualEffectView *_effectView;
}

@property (readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints;
@property (nonatomic) double constantAxisDimension;
@property (nonatomic) double horizontalLineLeadingInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateContentDirectionalInsets;
- (void)_setupEffectView;
- (long long)constantSizedAxis;
- (void)setConstantSizedAxis:(long long)a0;

@end
