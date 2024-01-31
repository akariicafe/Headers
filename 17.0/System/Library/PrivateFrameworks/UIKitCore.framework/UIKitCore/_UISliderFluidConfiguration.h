@class UIVisualEffect, UIBlurEffect, NSString, UIView;
@protocol _UISliderFluidInteractionDelegate;

@interface _UISliderFluidConfiguration : NSObject <_UISliderConfiguration>

@property (weak, nonatomic) id<_UISliderFluidInteractionDelegate> delegate;
@property (nonatomic) double expansionFactor;
@property (nonatomic) double stretchLimit;
@property (retain, nonatomic) UIView *minimumValueView;
@property (retain, nonatomic) UIView *maximumValueView;
@property (retain, nonatomic) UIVisualEffect *minimumTrackEffect;
@property (retain, nonatomic) UIVisualEffect *maximumTrackEffect;
@property (nonatomic) BOOL disableAllSliderVisuals;
@property (retain, nonatomic, setter=_setMinimumTrackBlurEffect:) UIBlurEffect *minimumTrackBlurEffect;
@property (retain, nonatomic, setter=_setMaximumTrackBlurEffect:) UIBlurEffect *maximumTrackBlurEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
