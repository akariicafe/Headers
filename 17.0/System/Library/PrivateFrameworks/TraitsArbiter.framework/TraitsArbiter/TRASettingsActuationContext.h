@class NSString, BSAnimationSettings;

@interface TRASettingsActuationContext : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) id drawingFence;
@property (readonly, nonatomic) BOOL preventTouchCancellation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnimationSettings:(id)a0 drawingFence:(id)a1;
- (id)initWithAnimationSettings:(id)a0 drawingFence:(id)a1 preventTouchCancellation:(BOOL)a2;
- (id)initWithSettingsActuationContext:(id)a0;
- (BOOL)isEqualToSettingsActuationContext:(id)a0;

@end
