@class NSString;

@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable>

@property (nonatomic) long long requirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyRequestedEffectToView:(id)a0;
- (void)addEffectToView:(id)a0;
- (id)copyForTransitionToEffect:(id)a0;
- (BOOL)shouldAnimateProperty:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void)convertToIdentity;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (void)applyIdentityEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)copyForTransitionOut;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyEffectAsRequested:(BOOL)a0 toView:(id)a1;

@end
