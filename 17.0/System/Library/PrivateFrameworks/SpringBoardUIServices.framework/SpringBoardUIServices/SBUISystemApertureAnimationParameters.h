@class SBFFluidBehaviorSettings, BSSettings, NSNumber;

@interface SBUISystemApertureAnimationParameters : NSObject {
    NSNumber *_tracking;
    NSNumber *_retargeted;
}

@property (readonly, nonatomic) SBFFluidBehaviorSettings *fluidBehaviorSettings;
@property (readonly, nonatomic, getter=isRetargeted) BOOL retargeted;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) BOOL tracking;
@property (readonly, nonatomic) BSSettings *BSSettingsRepresentation;

+ (BOOL)areParams:(id)a0 equivalentTo:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_animationBehavior;
- (BOOL)_hasSpringParameters;
- (id)initWithBSSettingsRepresentation:(id)a0;
- (id)initWithFluidBehaviorSettings:(id)a0 tracking:(BOOL)a1 retargeted:(BOOL)a2;

@end
